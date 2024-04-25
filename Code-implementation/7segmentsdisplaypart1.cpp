// Define os pinos do Arduino aos quais os segmentos do display de 7 segmentos estão conectados
#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

// Função para mostrar o número zero no display de 7 segmentos
void mostrarZero() {
  // Acende os segmentos necessários para formar o número zero
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);  
  digitalWrite(SEG_F, HIGH);  
  digitalWrite(SEG_G, LOW);
}

// Função para mostrar o número um no display de 7 segmentos
void mostrarUm() {
  // Acende os segmentos necessários para formar o número um
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);  
  digitalWrite(SEG_F, LOW);  
  digitalWrite(SEG_G, LOW);
}

// Função para mostrar o número dois no display de 7 segmentos
void mostrarDois() {
  // Acende os segmentos necessários para formar o número dois
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH); 
  digitalWrite(SEG_F, LOW); 
  digitalWrite(SEG_G, HIGH);
}

// Função para mostrar o número três no display de 7 segmentos
void mostrarTres() {
  // Acende os segmentos necessários para formar o número três
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, LOW); 
  digitalWrite(SEG_F, LOW); 
  digitalWrite(SEG_G, HIGH);
}

// Função para mostrar o número quatro no display de 7 segmentos
void mostrarQuatro() {
  // Acende os segmentos necessários para formar o número quatro
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

// Função para mostrar o número cinco no display de 7 segmentos
void mostrarCinco() {
  // Acende os segmentos necessários para formar o número cinco
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, LOW); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

// Função para mostrar o número seis no display de 7 segmentos
void mostrarSeis() {
  // Acende os segmentos necessários para formar o número seis
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

// Função para mostrar o número sete no display de 7 segmentos
void mostrarSete() {
  // Acende os segmentos necessários para formar o número sete
  digitalWrite(SEG_A, HIGH );
  digitalWrite(SEG_B,HIGH );
  digitalWrite(SEG_C,HIGH );
  digitalWrite(SEG_D,LOW);
  digitalWrite(SEG_E,LOW ); 
  digitalWrite(SEG_F,LOW ); 
  digitalWrite(SEG_G,LOW );
}

// Função para mostrar o número oito no display de 7 segmentos
void mostrarOito() {
  // Acende os segmentos necessários para formar o número oito
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

// Função para mostrar o número nove no display de 7 segmentos
void mostrarNove() {
  // Acende os segmentos necessários para formar o número nove
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, LOW); 
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH);
}

// Configuração inicial dos pinos do Arduino como saídas
void setup(){
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
}

// Função principal que executa repetidamente as funções de exibição de números
void loop()
{
  // Exibe o número zero por 1 segundo
  mostrarZero();
  delay(1000);
  
  // Exibe o número um por 1 segundo
  mostrarUm();
  delay(1000);
  
  // Exibe o número dois por 1 segundo
  mostrarDois();
  delay(1000);
  
  // Exibe o número três por 1 segundo
  mostrarTres();
  delay(1000);
  
  // Exibe o número quatro por 1 segundo
  mostrarQuatro();
  delay(1000);
  
  // Exibe o número cinco por 1 segundo
  mostrarCinco();
  delay(1000);
  
  // Exibe o número seis por 1 segundo
  mostrarSeis();
  delay(1000);
  
  // Exibe o número sete por 1 segundo
  mostrarSete();
  delay(1000);
  
  // Exibe o número oito por 1 segundo
  mostrarOito();
  delay(1000);
  
  // Exibe o número nove por 1 segundo
  mostrarNove();
  delay(1000);
}
