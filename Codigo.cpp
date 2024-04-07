#define ledVerde 4
#define ledAzul 3
#define botao 2

int contador = 0;

void setup(){
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
  bool press = digitalRead(botao);
  if(press == false){
  	contador++;
  
  if((contador %2) == 0){
  	digitalWrite(ledVerde, HIGH);
  	digitalWrite(ledAzul, LOW);
    Serial.println("Lin e o mior professor do mundo");
  }else{
  	digitalWrite(ledAzul, HIGH);
  	digitalWrite(ledVerde, LOW);
    Serial.println("Lari e a mior aluna da galaxia ");
  }
    delay(200); 
 }
}  

  
 
  
