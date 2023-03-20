/*
* Aula 02:
* Pratica 01: Ligar um led com LDR
* 21/04/2022
*/

#define portaLed  10 //Porta a ser utilizada para ligar o led  
#define portaLDR  A5 //Porta analógica utilizada pelo LDR 
 

void setup() {
 pinMode(portaLed, OUTPUT); //Define a porta do Led como saída
 pinMode(portaLDR, INPUT); //Define a porta do LDR com entrada  
 Serial.begin(9600);
}

void loop() {
  int estado = analogRead(portaLDR);  //Lê o valor fornecido pelo LDR  
    
  // Caso o valor lido na porta analógica seja maior do que 
  // 800, acende o LED  
  // Ajuste o valor abaixo de acordo com o seu circuito  
  if (estado > 500)    
  {  
    digitalWrite(portaLed, HIGH);  
  }  
  else  //Caso contrário, apaga o led  
  {  
    digitalWrite(portaLed, LOW);  
  } 

    Serial.println(estado);
}
