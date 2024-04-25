#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8



int contagem = 0;

int mapaDisplay[] = {
  B00111111, B00000110, B01011011, B01001111,
  B01100110, B01101101, B01111100, B00000111,
  B01111111, B01100111
};

void mostrarNumero(int numero) {
  
  if (numero < 0) {
   	numero = 0; 
  }
  
  int mapa = mapaDisplay[numero];
  int bitAtual = B00000001;
  
  for (int i = 0; i < 7; i++) {
    int acender = mapa & bitAtual;
    digitalWrite(i + 2, acender);
    bitAtual = bitAtual << 1;
  }
  
}

void setup()
{
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);   
  
}

void loop() {

  mostrarNumero(contagem);
  contagem = ++contagem % 10;
  delay(500);
  
}




