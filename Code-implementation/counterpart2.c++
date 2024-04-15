#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

#define DSP_D 9
#define DSP_U 10
#define BTM 11

int contagem = 0;
int espera = 0;
bool ativo = false;

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

void mostrarDigitos(int dezena, int unidade){

  digitalWrite(DSP_U, HIGH);
  digitalWrite(DSP_D, LOW);
  mostrarNumero(unidade);
  delay(50);
  
  
  digitalWrite(DSP_U, LOW);
  digitalWrite(DSP_D, HIGH);
  mostrarNumero(dezena);
  delay(50);
  
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
  
  pinMode(DSP_D, OUTPUT);
  pinMode(DSP_U, OUTPUT);
  
  pinMode(BTM, INPUT_PULLUP);

  }

void contar(){
if (espera == 5){
   contagem++;
    espera = 0;
  }
  
  espera++;
  
  int dez;
  int uni;
  
  dez = contagem / 10;
  uni = contagem % 10;
  
  mostrarDigitos(dez,uni);
}


void loop() {
  
  if(digitalRead(BTM)==0){
    contagem = 0;
    ativo = !ativo;
    digitalWrite(DSP_U, LOW);
  	digitalWrite(DSP_D, LOW);
    
    while(digitalRead(BTM)==0);
  }
  
  if (ativo){
  	 contar();
  }
  
}
  


