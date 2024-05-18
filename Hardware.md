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

Imagem: ![image](https://github.com/Pedro-Hsanchez/Termometro-digital/assets/160167596/5da4adcf-5ccb-472e-a38e-b3f95378b680)



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
Sensor DS18B20: ![image](https://github.com/Pedro-Hsanchez/Termometro-digital/assets/160167596/ff392590-36ba-47d0-8725-ad7b0dd0c500)


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
Display OLED SSD1306: ![image](https://github.com/Pedro-Hsanchez/Termometro-digital/assets/160167596/2d8e5cc2-2474-48ec-b427-6f948e32a65c)


### Protoboard 400 Pontos
**Descrição:**
A protoboard é uma placa de ensaio sem solda com 400 pontos de conexão, ideal para a montagem rápida de circuitos e testes de protótipos eletrônicos.

**Especificações Técnicas:**
- **Dimensões:** 8.5 cm x 5.5 cm
- **Pontos de Conexão:** 400 pontos
- **Faixas de Alimentação:** 2 faixas de alimentação (power rails)
- **Material:** Plástico ABS com contatos em fosfor bronze

**Imagem:**
Protoboard 400 Pontos: ![image](https://github.com/Pedro-Hsanchez/Termometro-digital/assets/160167596/9c9d4bd9-2b24-4a28-b3b9-493066c6c898)


### Kit Cabo Jumper Macho x Fêmea
**Descrição:**
O kit de cabos jumper é essencial para conexões rápidas e seguras em protoboards e outros módulos. O kit inclui cabos macho para fêmea de várias cores e comprimentos.

**Especificações Técnicas:**
- **Comprimentos Variados:** 10 cm, 20 cm, 30 cm
- **Conectores:** Macho x Fêmea
- **Material do Condutor:** Fio de cobre
- **Isolamento:** Plástico flexível

**Imagem:**
Kit Cabo Jumper: ![image](https://github.com/Pedro-Hsanchez/Termometro-digital/assets/160167596/542ad984-fe21-47c9-805b-1037cf0ec211)

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
Resistor 4.7kΩ: ![image](https://github.com/Pedro-Hsanchez/Termometro-digital/assets/160167596/fd489331-b637-492d-9b90-d761072465c2)


## Diagrama de Conexão
Abaixo está um diagrama de conexão ilustrando como todos os componentes são conectados:

Diagrama de Conexão: ![image](https://github.com/Pedro-Hsanchez/Termometro-digital/assets/160167596/048172c3-70b7-4802-ab23-0cfcc1483b86)


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
