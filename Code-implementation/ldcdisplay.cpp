#include <LiquidCrystal.h>

#define LEFT 2
#define UP 3
#define RIGHT 5
#define DOWN 4

int initialLetter = 65;
int linha = 0;
int coluna = 0;

LiquidCrystal lcd(6,7,8,9,10,11);

void UPWARD(){
  if (initialLetter<90){
    initialLetter++;
  }lcd.write(initialLetter);
  lcd.setCursor(coluna %16,linha);

} 

void DOWNWARD(){
  if (initialLetter>65){
    initialLetter--;
  }lcd.write(initialLetter);
  lcd.setCursor(coluna %16,linha);

} 

void setup()
{
  pinMode(LEFT,INPUT_PULLUP);  
  pinMode(UP,INPUT_PULLUP);
  pinMode(RIGHT,INPUT_PULLUP);
  pinMode(DOWN,INPUT_PULLUP);
  
  lcd.begin(16,2);
}

void loop()
{
  while (digitalRead(UP)==0) {
  	UPWARD();
    delay(500);
  }
  
 while (digitalRead(DOWN)==0) {
  	DOWNWARD();
    delay(500);
  }
  
  while (digitalRead(RIGHT)==0) {
    coluna++;

    if (coluna > 15){
      linha = 1;
    }
    lcd.setCursor(coluna%16,linha);
    delay(500);
  }
  
   while (digitalRead(LEFT)==0) {
    
     if (coluna > 0){
       coluna--;
     }

    if (coluna < 16){
      linha = 0;
    }
    lcd.setCursor(coluna%16,linha);
    delay(500);
  }
}
