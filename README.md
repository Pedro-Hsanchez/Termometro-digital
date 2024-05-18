# Termometro-digital
"Projeto de Termômetro Digital para Área da Saúde".

## Descrição
Este projeto implementa um termômetro digital para monitoramento de temperatura na área da saúde utilizando NodeMCU e um sensor de temperatura DS18B20.

## Funcionalidade
O termômetro digital permite monitorar a temperatura e enviar os dados em tempo real para a internet utilizando o protocolo MQTT.

## Componentes Utilizados
- NodeMCU com módulo Wi-Fi ESP8266
- Sensor de temperatura DS18B20 à prova d'água
- Display OLED 0.96" I2C SSD1306
- Protoboard
- Cabos jumpers

## Instruções de Uso
Para reproduzir este projeto, siga os passos abaixo:
1. Monte o circuito conforme o diagrama fornecido.
2. Faça o upload do código para o NodeMCU.
3. Configure a conexão MQTT conforme as instruções.

## Código
O código-fonte está disponível no arquivo `termometro-digital.ino`.

## Documentação do Hardware
- **NodeMCU**: Plataforma de desenvolvimento com módulo Wi-Fi ESP8266.
- **Sensor de temperatura DS18B20**: Sensor digital à prova d'água.
- **Display OLED 0.96"**: Display I2C para exibição das leituras de temperatura.

## Protocolos de Comunicação
O projeto utiliza o protocolo MQTT para comunicação via internet, permitindo o monitoramento remoto das leituras de temperatura.

## Licença
Este projeto está licenciado sob a MIT License.

## Uso
O dispositivo exibirá os a temperatura no display LCD e enviará os dados para o broker MQTT.

[Link para vídeo de demonstração](https://www.youtube.com/seuvideo)

## Estrutura do Repositório
- `Codigo/`: Contém o código fonte do projeto.
- `Hardware/`: Contém a descrição do hardware utilizado e imagens dos diagramas.
- `Documentacao/`: Contém a documentação das interfaces, protocolos e módulos de comunicação.
