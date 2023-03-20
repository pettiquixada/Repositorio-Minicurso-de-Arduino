/*
* Aula 01:
* Pratica 02: Piscando um led 
* 21/04/2022
*/

#define ledPin  9 //Atribui o valor 9 a variável inteira ledPin, que irá representar o pino digital 9


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);//Define ledPin (pino 9) como saída

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);//Coloca ledPin em nível alto (5V)
  delay(2000);//Espera 2000 milissegundos (2 segundo)
  digitalWrite(ledPin, LOW);//Coloca ledPin em nível baixo (0V)
  delay(2000);//Espera 2000 milissegundos (2 segundo)

}
