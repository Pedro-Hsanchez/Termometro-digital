#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <UbidotsESPMQTT.h>

#define ONE_WIRE_BUS D4
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

char TOKEN[] = "BBUS-HBBqzVrvpi3h0Eb5LnC39is8FeFczJ";
char MQTTCLIENTNAME[] = "Esp.tempe";
char ssid[] = "PEDRINHO_2G";  
char password[] = "jeanhouse#";  
Ubidots client(TOKEN);

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  if ((char)payload[0] == '1') {
    digitalWrite(16, HIGH);
  } else {
    digitalWrite(16, LOW);
  }
  Serial.println();
}

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Temperatura:");
  display.display();

  client.setDebug(true); 
  client.wifiConnection(ssid, password);
  client.begin(callback);
  client.ubidotsSubscribe("esp.temp", "tempC"); 
  sensors.begin();

  Serial.begin(9600);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);
  
  display.setCursor(0,25);
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.println(tempC);
  display.display();

  
  if (!client.connected()) {
    client.reconnect();
  }

  
  client.add("tempC", tempC);  
  client.ubidotsPublish("sensor-temperatura");
  client.add("tempC", tempC);
  client.ubidotsPublish("sensor-temperatura2");
  client.loop();
  delay(5000);
}
