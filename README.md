# Laboratório de Sniffing e Replay no Protocolo I2C

Este projeto faz parte de um laboratório prático que demonstra como ataques de sniffing e replay podem ser executados no protocolo I2C. 

# Componentes Utilizados (requisitos)

2x Arduino UNO
3x LEDs (Vermelho, Amarelo, Verde)
1x Bus Pirate
Resistores e jumpers para conexões

# Funcionamento

Arduino Master: Envia comandos I2C para o Arduino Slave, indicando qual LED deve ser aceso.
Arduino Slave: Recebe os comandos via I2C e acende o LED correspondente (vermelho, amarelo ou verde).
Bus Pirate: Utilizado para sniffar a comunicação I2C entre os dois Arduinos e reproduzir os comandos (replay attack).

# Tutorial

Assista ao vídeo completo no YouTube para ver como o experimento é montado e como reproduzir o ataque: Link do vídeo.

# Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.
