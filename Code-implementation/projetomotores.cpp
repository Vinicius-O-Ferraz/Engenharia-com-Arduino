#define EN1 2
#define IN1 3
#define IN2 4

#define EN2 5
#define IN3 6
#define IN4 7

#define FRENTE 13
#define ESQUERDA 12
#define DIREITA 11
#define TRAS 10
#define PARAR 9



void setup() {
  
  pinMode(EN1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  pinMode(EN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  pinMode(ESQUERDA, INPUT_PULLUP);
  pinMode(FRENTE, INPUT_PULLUP);
  pinMode(DIREITA, INPUT_PULLUP);
  pinMode(TRAS, INPUT_PULLUP);
  pinMode(PARAR, INPUT_PULLUP);
  
  digitalWrite(EN1, LOW);
  digitalWrite(EN2, LOW);
    
  /*
  	IN1 | IN2  | MOTOR1
    HIGH  LOW    HORARIO
    LOW   HIGH   ANTI-HORARIO
    LOW   LOW    IRRELEVANTE
    HIGH  HIGH   IRRELEVANTE
    
  	IN3 | IN4  | MOTOR2
    HIGH  LOW    ANTI-HORARIO
    LOW   HIGH   HORARIO
    LOW   LOW    IRRELEVANTE
    HIGH  HIGH   IRRELEVANTE
  */
  
}

void tras(){
  digitalWrite(EN1, HIGH);
  digitalWrite(EN2, HIGH);
  // MOTOR1
	digitalWrite(IN1, HIGH);
  	digitalWrite(IN2, LOW);
   
  // MOTOR2
	digitalWrite(IN3, LOW);
  	digitalWrite(IN4, HIGH);
  
}

void frente(){
  digitalWrite(EN1, HIGH);
  digitalWrite(EN2, HIGH);
  
  // MOTOR1
	digitalWrite(IN1, LOW);
  	digitalWrite(IN2, HIGH);
   
  // MOTOR2
	digitalWrite(IN3, HIGH);
  	digitalWrite(IN4, LOW);
  
}

void direita(){
  digitalWrite(EN1, HIGH);
  digitalWrite(EN2, HIGH);
  
  // MOTOR1
	digitalWrite(IN1, HIGH);
  	digitalWrite(IN2, LOW);
  
	// MOTOR2
	digitalWrite(IN3, HIGH);
  	digitalWrite(IN4, LOW);
}

void esquerda(){
  digitalWrite(EN1, HIGH);
  digitalWrite(EN2, HIGH);
  
  // MOTOR1
	digitalWrite(IN1, LOW);
  	digitalWrite(IN2, HIGH);
  
	// MOTOR2
	digitalWrite(IN3, LOW);
  	digitalWrite(IN4, HIGH);
}

void parar(){
	digitalWrite(EN1, LOW);
  	digitalWrite(EN2, LOW);
}


void loop() {
    if ( digitalRead(ESQUERDA) == 0 ) {
    esquerda();
  }
  
  if ( digitalRead(DIREITA) == 0 ) {
    direita();
  }
  
  if ( digitalRead(FRENTE) == 0 ) {
    frente();
  }
  
  if ( digitalRead(TRAS) == 0 ) {
    tras();
  }
  
  if ( digitalRead(PARAR) == 0 ) {
    parar();
  }
  
}
