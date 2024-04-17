# Introdução à Engenharia com Arduino

<div align="center">
  <img src="https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/7bd0dbb4-95c8-4a03-a157-a20bd56ed8a6" width="500" height="300">
</div>

## A Importância do Estudo de Arduino para IoT
O Arduino é uma plataforma de prototipagem eletrônica de código aberto, tornando-o ideal para iniciantes e experientes em IoT. Sua importância reside em:

## Facilidade de uso:

A linguagem de programação do Arduino é similar ao C++, facilitando o aprendizado para iniciantes.
O ambiente de desenvolvimento integrado (IDE) do Arduino é intuitivo e fácil de usar.

## Flexibilidade:

A plataforma Arduino oferece uma ampla variedade de placas e shields para atender às necessidades de diversos projetos.
A comunidade Arduino é vasta e oferece suporte online, tutoriais e projetos para auxiliar no desenvolvimento.
Aplicabilidade:

O Arduino pode ser usado para criar diversos projetos de IoT, como:
Sensores e atuadores para monitoramento e controle ambiental.
Automação residencial e industrial.
Protótipos de wearables e dispositivos inteligentes.
Habilidades desenvolvidas:

O estudo de Arduino permite desenvolver habilidades em:
Programação embarcada.
Eletrônica digital e analógica.
Comunicação serial e protocolos de rede.
Prototipagem e design de hardware.

## Objetivo do repositório

Este repositório visa organizar meus estudos sobre a plataforma Arduino de forma acessível e escalável. 
O curso base para esse estudo pode ser encontrado nesse link: https://www.udemy.com/course/introducao-a-engenharia-com-arduino/?couponCode=ST8MT40924

## Conclusão

O Arduino é uma ferramenta poderosa para o desenvolvimento de projetos de IoT. Aprender a usar o Arduino pode te preparar para uma carreira em áreas como automação, eletrônica e desenvolvimento de software.

## Projetos

### Introdução e Leds

Primeiro começaremos a prática do arduino com um circuito simples para piscar um led

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/2a7da551-82bd-4da8-bdd7-1cc5b2e0b12e

Depois faremos um sinal usando dois leds de cores diferentes, um verde e outro vermelho. Eles piscam em intervalos distintos criando uma sinaleira

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/d3bdaddd-90ce-4e3b-9718-33de756f8d53

Logo depois criaremos um semáforo adicionando mais um led, amarelo, ao circuito anterior

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/7d3fdcf6-2b8c-4cda-8629-833cf34aefed



### Pushbuttom com resistor pullup

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/9a01c856-5457-4162-9d57-7253b8d1caa2

### Display de 7 segmentos
Aqui aprendi a usar o display de 7 segmentos. Como mostra na figura abaixo

<p align="center"><img src="https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/8fd3b2a5-ec17-4aba-96d0-b2b49a1252bf" alt="download" width="50%"/></p>

De maneira simples, um display LED de 7 segmentos é um tipo comum de dispositivo de exibição usado para mostrar números. Ele consiste em sete segmentos individuais de LEDs dispostos na forma de um "8", com um segmento adicional para cada ponto decimal, se necessário. Cada segmento é chamado de "a", "b", "c", "d", "e", "f" e "g".

A ideia por trás de um display de 7 segmentos é que cada segmento pode ser aceso ou apagado de forma independente para criar diferentes padrões. Cada segmento representa uma parte específica do número que está sendo exibido. Por exemplo, para exibir o número "1", você só precisa acender os segmentos "b" e "c", enquanto para exibir o número "2", você precisa acender os segmentos "a", "b", "g", "e" e "d", e assim por diante.

Para controlar um display de 7 segmentos, você precisa enviar sinais elétricos para os segmentos relevantes para formar o número desejado. Isso geralmente é feito com um circuito eletrônico simples que recebe a entrada do número a ser exibido e converte isso em sinais que ligam e desligam os LEDs nos segmentos apropriados.

Nessa prática foi programado esse LED para escrever números de 0 a 9.

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/477ec4fd-6c66-42b1-a424-48ac16384f2b

Em seguida, este circuito foi criado conectando os mesmos pinos do arduino nos pinos do display. Ao executar esse circuito usando a função programada anteriormente temos que os dois digitos estão no mesmo estado.

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/d47a76f4-6791-44a9-9fea-30af9ecac9f9

Depois criamos uma função que alterna o estado dos pinos de saída de cada display. Isso nos permite imprimir os digitos de maneira separada criando um contador eficiente.

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/5e9fc602-f442-4cfe-99cc-0fa212397b3f

Por fim, o código foi retrabalhado e funções para ligar e desligar o circuito usando o botão foram implementadas.

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/2aea579f-a420-4581-b798-e9866886a848

Em seguida adicionei dois botões. Um adiciona uma unidade no display o outro remove uma unidade no display.

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/13838173-bb98-4cb1-a553-7c134f170112

## Display LCD 16 por 2

Essa prática é bem simples. Foi usado um display 16 por 2 para exibir uma mensgem na tela. A configuração do circuito é simples bastando ligar o pino VCC ao positivo da placa de ensaio e o GND ao negativo da placa de ensaio. Depois passamos um potenciomentro conectado ao VD e quatro pinos de dados. 

https://github.com/Vinicius-O-Ferraz/Engenharia-com-Arduino/assets/146992032/19626c12-d8e8-4220-8e3b-0ac20a35c2c3


