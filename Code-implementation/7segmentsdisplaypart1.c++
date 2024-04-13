#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

void mostrarZero() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);  
  digitalWrite(SEG_F, HIGH);  
  digitalWrite(SEG_G, LOW);
}

void mostrarUm() {
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);  
  digitalWrite(SEG_F, LOW);  
  digitalWrite(SEG_G, LOW);
}

void mostrarDois() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH); 
  digitalWrite(SEG_F, LOW); 
  digitalWrite(SEG_G, HIGH);
}

void mostrarTres() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, LOW); 
  digitalWrite(SEG_F, LOW); 
  digitalWrite(SEG_G, HIGH);
}

void mostrarQuatro() {
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

void mostrarCinco() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, LOW); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

void mostrarSeis() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

void mostrarSete() {
  digitalWrite(SEG_A, HIGH );
  digitalWrite(SEG_B,HIGH );
  digitalWrite(SEG_C,HIGH );
  digitalWrite(SEG_D,LOW);
  digitalWrite(SEG_E,LOW ); 
  digitalWrite(SEG_F,LOW ); 
  digitalWrite(SEG_G,LOW );
}

void mostrarOito() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

void mostrarNove() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, LOW); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

void setup(){
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  
}

void loop()
{
  mostrarZero();
  delay(1000);
  mostrarUm();
  delay(1000);
  mostrarDois();
  delay(1000);
  mostrarTres();
  delay(1000);
  mostrarQuatro();
  delay(1000);
  mostrarCinco();
  delay(1000);
  mostrarSeis();
  delay(1000);
  mostrarSete();
  delay(1000);
  mostrarOito();
  delay(1000);
  mostrarNove();
  delay(1000);
}







