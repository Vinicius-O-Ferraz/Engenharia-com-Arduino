#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

int mapaDisplay[] ={
   B00111111, B00000110,B01011011,B01001111,B01100110,B01101101,B01111101,B00000111,B01111111,B01101111
};
 
void mostrarNumero(int numero){
  
	int mapa = mapaDisplay[numero];
  	int currentBit = B00000001;
  	//operadores bit a bit
  	
  for (int i = 0; i < 7 ; i++){
    
    int on = mapa & currentBit;
  	digitalWrite(i+2,on);
    
    currentBit = currentBit << 1;
    
  }
  
};

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
  for (int i = 0; i < 10; i++){
    mostrarNumero(i);
    delay(1000);
  }
}


