/*
* Aula 02:
* Pratica 03: Semaforo com potenciometro
* 21/04/2022
*/
#define potenciometro  A0 
#define red 12
#define yellow 11
#define green 10

void setup() {
  Serial.begin(9600);
  pinMode(potenciometro, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  int valorPotenciometro = analogRead(potenciometro); 
  Serial.println(valorPotenciometro); 
    
  if(valorPotenciometro < 285){
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW); 
    digitalWrite(red, LOW); 
  }
  
  else if((valorPotenciometro >= 285) && (valorPotenciometro < 600)){
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH); 
    digitalWrite(red, LOW); 
  }
  else{
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW); 
    digitalWrite(red, HIGH); 
  }  

  delay(20); 
}
