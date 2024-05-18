# Projeto Termômetro Digital

## Descrição do Projeto
Este projeto é um termômetro digital para uso na área da saúde, utilizando o NodeMCU com módulo Wi-Fi ESP8266, um sensor de temperatura DS18B20 à prova d'água, e um display OLED 0.96" I2C SSD1306 para exibir as leituras de temperatura em tempo real.

## Componentes Utilizados

### NodeMCU com Módulo Wi-Fi ESP8266
**Descrição:**
O NodeMCU é uma plataforma de desenvolvimento open-source baseada no módulo Wi-Fi ESP8266, que integra um microcontrolador e uma interface de rede Wi-Fi. É ideal para projetos IoT devido à sua capacidade de se conectar à internet e interagir com diversos sensores e atuadores.

**Especificações Técnicas:**
- **Microcontrolador:** Tensilica Xtensa LX106
- **Frequência de Clock:** 80 MHz
- **Memória Flash:** 4 MB
- **Pinos de I/O:** 17 pinos digitais, 1 pino analógico (10 bits)
- **Interface de Rede:** Wi-Fi 802.11 b/g/n
- **Protocolos Suportados:** TCP/IP, HTTP, MQTT, etc.
- **Alimentação:** 3.3V
- **Interfaces:** UART, I2C, SPI, PWM

**Imagem:**
![NodeMCU ESP8266](https://raw.githubusercontent.com/nodemcu/nodemcu-devkit/master/Docs/nodemcu-devkit-v1.0.jpg)

### Sensor de Temperatura DS18B20 à Prova d'Água
**Descrição:**
O DS18B20 é um sensor de temperatura digital que fornece leituras de alta precisão em um formato à prova d'água, tornando-o ideal para aplicações em ambientes úmidos ou submersos.

**Especificações Técnicas:**
- **Faixa de Temperatura de Operação:** -55°C a +125°C
- **Precisão:** ±0.5°C na faixa de -10°C a +85°C
- **Resolução:** Configurável de 9 a 12 bits
- **Interface:** 1-Wire
- **Alimentação:** 3.0V a 5.5V
- **Tempo de Conversão:** 750 ms (resolução de 12 bits)
- **Encapsulamento:** Aço inoxidável à prova d'água

**Imagem:**
![Sensor DS18B20](https://components101.com/sites/default/files/component_datasheet/DS18B20-Sensor.jpg)

### Display OLED 0.96" I2C SSD1306
**Descrição:**
O display OLED 0.96" com controlador SSD1306 é um módulo compacto que utiliza a interface I2C para exibir informações de forma clara e nítida, mesmo em ambientes com pouca luz.

**Especificações Técnicas:**
- **Dimensões:** 0.96 polegadas
- **Resolução:** 128 x 64 pixels
- **Interface:** I2C (endereço padrão 0x3C ou 0x3D)
- **Tensão de Operação:** 3.3V a 5V
- **Consumo de Energia:** Baixo consumo de energia
- **Contraste:** Alta relação de contraste para melhor visibilidade

**Imagem:**
![Display OLED SSD1306](https://components101.com/sites/default/files/component_datasheet/OLED-Display-Module.jpg)

### Protoboard 400 Pontos
**Descrição:**
A protoboard é uma placa de ensaio sem solda com 400 pontos de conexão, ideal para a montagem rápida de circuitos e testes de protótipos eletrônicos.

**Especificações Técnicas:**
- **Dimensões:** 8.5 cm x 5.5 cm
- **Pontos de Conexão:** 400 pontos
- **Faixas de Alimentação:** 2 faixas de alimentação (power rails)
- **Material:** Plástico ABS com contatos em fosfor bronze

**Imagem:**
![Protoboard 400 Pontos](https://components101.com/sites/default/files/component_datasheet/400-Points-Breadboard.jpg)

### Kit Cabo Jumper Macho x Fêmea
**Descrição:**
O kit de cabos jumper é essencial para conexões rápidas e seguras em protoboards e outros módulos. O kit inclui cabos macho para fêmea de várias cores e comprimentos.

**Especificações Técnicas:**
- **Comprimentos Variados:** 10 cm, 20 cm, 30 cm
- **Conectores:** Macho x Fêmea
- **Material do Condutor:** Fio de cobre
- **Isolamento:** Plástico flexível

**Imagem:**
![Kit Cabo Jumper](https://components101.com/sites/default/files/component_datasheet/Jumper-Wire-Kit.jpg)

### Resistor 4.7kΩ
**Descrição:**
Um resistor de 4.7kΩ é utilizado no circuito para garantir a operação adequada do sensor DS18B20 no modo de interface 1-Wire.

**Especificações Técnicas:**
- **Resistência:** 4.7kΩ
- **Tolerância:** ±5%
- **Potência Nominal:** 0.25W (1/4W)
- **Tipo:** Resistor de filme de carbono
- **Temperatura de Operação:** -55°C a +155°C

**Imagem:**
![Resistor 4.7kΩ](https://components101.com/sites/default/files/component_datasheet/4.7k-resistor.jpg)

## Diagrama de Conexão
Abaixo está um diagrama de conexão ilustrando como todos os componentes são conectados:

![Diagrama de Conexão](https://www.example.com/diagrama-conexao.png) *(substitua pela URL real do diagrama)*

## Instruções para Reproduzir
1. **Clone o Repositório:**
    ```bash
    git clone https://github.com/usuario/projeto-termometro-digital.git
    ```
2. **Instale as Dependências:**
    - Arduino IDE com as bibliotecas necessárias (OneWire, DallasTemperature, Adafruit SSD1306, Adafruit GFX)
3. **Conecte os Componentes:**
    - Siga o diagrama de conexão acima.
4. **Carregue o Código:**
    - Abra o arquivo `termometro_digital.ino` na Arduino IDE.
    - Configure o Wi-Fi SSID e senha no código.
    - Carregue o código no NodeMCU.

5. **Execute o Projeto:**
    - Conecte o NodeMCU à fonte de alimentação.
    - Verifique as leituras de temperatura no display OLED e no servidor MQTT.

## Licença
Este projeto é licenciado sob os termos da licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.
