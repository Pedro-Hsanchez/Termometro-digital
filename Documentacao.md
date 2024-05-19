## Interfaces

- **Interface I2C**: A interface I2C é usada para a comunicação entre o ESP8266 e o display OLED. A biblioteca Wire do Arduino é usada para facilitar a comunicação I2C.

- **Interface OneWire**: A interface OneWire é usada para a comunicação entre o ESP8266 e o sensor de temperatura DS18B20. A biblioteca OneWire do Arduino é usada para facilitar a comunicação OneWire.

## Protocolos

- **Protocolo MQTT**: O protocolo MQTT (Message Queuing Telemetry Transport) é usado para enviar os dados de temperatura do ESP8266 para o servidor MQTT na nuvem. A biblioteca PubSubClient do Arduino é usada para facilitar a comunicação MQTT.

## Módulos de Comunicação

- **Módulo WiFi do ESP8266**: O módulo WiFi do ESP8266 é usado para conectar o ESP8266 à sua rede WiFi e para enviar dados para o servidor MQTT na nuvem. A biblioteca ESP8266WiFi do Arduino é usada para controlar o módulo WiFi do ESP8266.
