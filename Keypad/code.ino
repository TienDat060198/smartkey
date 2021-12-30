#include <LiquidCrystal.h>
#include <EEPROM.h>
#define dodaimk 4
#define buz A4
#define keyPad A5
#define chotcua 9
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int addr = 0 , val , pass , vitri=0 , doimk=0 , dathaydoi=0, dem=0;
long luu=0;
int nut;
byte value;

void setup(){
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(9,OUTPUT);
  pinMode(A5,INPUT);
  pinMode(A4,OUTPUT);
  for(int i = 0; i < dodaimk ; i++){
    value = EEPROM.read(i);
    val = value;
    pass = pass*10 + val;       
  }  
}

void docnutbam(){
  if(vitri < 8){
    if(nut >= 738 && nut <= 760){
      delay(200);
      while(nut >= 738 && nut <= 760) { nut = analogRead(A5); }
      if(doimk == 0){
        digitalWrite(A4, 1);
        delay(100);
        digitalWrite(A4, 0);
        luu = luu*10 + 0;
        lcd.setCursor(vitri,1);  
        lcd.print('0');
        vitri++;
      }
      else{
        digitalWrite(A4, 1);
        delay(100);
        digitalWrite(A4, 0);
        luu = luu*10 + 0;
        EEPROM.write(vitri, 0);
        lcd.setCursor(vitri,1);  
        lcd.print('0');
        vitri++;          
      }
    }
    if(nut >= 789 && nut <= 800){
      delay(200);
      while(nut >= 789 && nut <= 800) { nut = analogRead(A5); }
      if(doimk == 0){
        digitalWrite(A4, 1);
        delay(100);
        digitalWrite(A4, 0);
        luu = luu*10 + 1;
        lcd.setCursor(vitri,1);  
        lcd.print('1');
        vitri++;
      }
      else{
        digitalWrite(A4, 1);
        delay(100);
        digitalWrite(A4, 0);
        luu = luu*10 + 1;
        EEPROM.write(vitri, 1);
        lcd.setCursor(vitri,1);  
        lcd.print('1');
        vitri++;          
      }
    }
    if(nut >= 721 && nut <= 735){
      delay(200);
      while(nut >= 721 && nut <= 735) { nut = analogRead(A5); }
      digitalWrite(A4, 1);
      delay(100);
      digitalWrite(A4, 0);      
      if(doimk == 0){        
        luu = luu*10 + 2;
        lcd.setCursor(vitri,1);  
        lcd.print('2');
        vitri++;
      }
      else{
        luu = luu*10 + 2;
        EEPROM.write(vitri, 2);
        lcd.setCursor(vitri,1);  
        lcd.print('2');
        vitri++;          
      }
    }
    if(nut >= 590 && nut <= 610){
      delay(200);
      while(nut >= 590 && nut <= 610) { nut = analogRead(A5); }
      digitalWrite(A4, 1);
      delay(100);
      digitalWrite(A4, 0);       
      if(doimk == 0){
        luu = luu*10 + 3;
        lcd.setCursor(vitri,1);  
        lcd.print('3');
        vitri++;
      }
      else{
        luu = luu*10 + 3;
        EEPROM.write(vitri, 3);
        lcd.setCursor(vitri,1);  
        lcd.print('3');
        vitri++;          
      }
    }
    if(nut >= 779 && nut <= 788){
      delay(200);
      while(nut >= 775 && nut <= 788) { nut = analogRead(A5); }
      digitalWrite(A4, 1);
      delay(100);
      digitalWrite(A4, 0);       
      if(doimk == 0){
        luu = luu*10 + 4;
        lcd.setCursor(vitri,1);  
        lcd.print('4');
        vitri++;
      }
      else{
        luu = luu*10 + 4;
        EEPROM.write(vitri, 4);
        lcd.setCursor(vitri,1);  
        lcd.print('4');
        vitri++;          
      }
    }
    if(nut >= 695 && nut <= 720){
      delay(200);
      while(nut >= 695 && nut <= 714) { nut = analogRead(A5); }
      digitalWrite(A4, 1);
      delay(100);
      digitalWrite(A4, 0);  
      if(doimk == 0){
        luu = luu*10 + 5;
        lcd.setCursor(vitri,1);  
        lcd.print('5');
        vitri++;
      }
      else{
        luu = luu*10 + 5;
        EEPROM.write(vitri, 5);
        lcd.setCursor(vitri,1);  
        lcd.print('5');
        vitri++;          
      }
    }
    if(nut >= 556 && nut <= 566){
      delay(200);
      while(nut >= 556 && nut <= 566) { nut = analogRead(A5); }
      digitalWrite(A4, 1);
      delay(100);
      digitalWrite(A4, 0);       
      if(doimk == 0){
        luu = luu*10 + 6;
        lcd.setCursor(vitri,1);  
        lcd.print('6');
        vitri++;
      }
      else{
        luu = luu*10 + 6;
        EEPROM.write(vitri, 6);
        lcd.setCursor(vitri,1);  
        lcd.print('6');
        vitri++;          
      }
    }
    if(nut >= 749 && nut <= 778){
      delay(200);
      while(nut >= 749 && nut <= 778) { nut = analogRead(A5); }
      digitalWrite(A4, 1);
      delay(100);
      digitalWrite(A4, 0);       
      if(doimk == 0){
        luu = luu*10 + 7;
        lcd.setCursor(vitri,1);  
        lcd.print('7');
        vitri++;
      }
      else{
        luu = luu*10 + 7;
        EEPROM.write(vitri, 7);
        lcd.setCursor(vitri,1);  
        lcd.print('7');
        vitri++;          
      }
    }
    if(nut >= 665 && nut <= 688){
      delay(200);
      while(nut >= 665 && nut <= 688) { nut = analogRead(A5); }
      digitalWrite(A4, 1);
      delay(100);
      digitalWrite(A4, 0);       
      if(doimk == 0){
        luu = luu*10 + 8;
        lcd.setCursor(vitri,1);  
        lcd.print('8');
        vitri++;
      }
      else{
        luu = luu*10 + 8;
        EEPROM.write(vitri, 8);
        lcd.setCursor(vitri,1);  
        lcd.print('8');
        vitri++;          
      }
    }
    if(nut >= 490 && nut <= 520){
      delay(200);
      while(nut >= 490 && nut <= 520) { nut = analogRead(A5); }
      digitalWrite(A4, 1);
      delay(100);
      digitalWrite(A4, 0);       
      if(doimk == 0){
        luu = luu*10 + 9;
        lcd.setCursor(vitri,1);  
        lcd.print('9');
        vitri++;
      }
      else{
        luu = luu*10 + 9;
        EEPROM.write(vitri, 9);
        lcd.setCursor(vitri,1);  
        lcd.print('9');
        vitri++;          
      }
    }
  }
  if(nut >= 290 && nut <= 330){
    delay(200);
    while(nut >= 290 && nut <= 330) { nut = analogRead(A5); } 
    luu=0;
    vitri=0;
    lcd.clear();
  }
} 

void ktmk(){
  if(nut >= 385 && nut <= 400){
    delay(200);
    while(nut >= 385 && nut <= 400) { nut = analogRead(A5); }
    if(doimk == 0){
      if(pass == luu) {
        digitalWrite(A4, 1);
        delay(100);
        digitalWrite(A4, 0);
        delay(100);
        digitalWrite(A4, 1);
        delay(100);
        digitalWrite(A4, 0);        
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("CUA MO"); 
        digitalWrite(9, 1); 
        delay(5000);
        lcd.clear();
        digitalWrite(9, 0);
        luu=0;
        vitri=0;
      }
      else{
        digitalWrite(A4, 1); 
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("NHAP SAI MK");
        delay(2000);
        digitalWrite(A4, 0);
        lcd.clear();
        luu=0;
        vitri=0;
      }
    } 
    else{
      if(pass == luu) {
        luu=0;
        pass=0;
        vitri=0;
        lcd.clear();
        while(1){
          nut = analogRead(A5);
          lcd.setCursor(0,0);
          lcd.print("NHAP MK MOI : "); 
          docnutbam();
          if(vitri == dodaimk) {
            pass = luu;
            dathaydoi=1;
            lcd.clear(); 
            lcd.setCursor(0,0);
            lcd.print("MAT KHAU DA DUOC");
            lcd.setCursor(4,1);
            lcd.print("THAY DOI"); 
            delay(1500);
            break;}
        }
        luu=0;
        vitri=0;
      } else {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("NHAP SAI MK");
        delay(2000);
        lcd.clear();
        luu=0;
        vitri=0;
      }      
    }
  }  
}

void ktthaydoimk(){
  if(nut >= 172 && nut <= 182){
    while(nut >= 174 && nut <= 746) { nut = analogRead(A5); }
    lcd.clear();
    luu=0;
    vitri=0;
    while(1){
      nut = analogRead(A5);
      doimk=1;
      lcd.setCursor(0,0);
      lcd.print("NHAP MK CU :");
      docnutbam();
      ktmk();
      if(nut >= 0 && nut <= 80){
        while(nut >= 0 && nut <= 80) { nut = analogRead(A5); } 
        lcd.clear(); 
        break;
      }
      if(dathaydoi == 1) {lcd.clear(); dathaydoi=0; break;}
    }  
    doimk=0;
  }
} 

void loop(){
  nut = analogRead(A5);
  lcd.setCursor(0,0);
  lcd.print("NHAP MK : ");
  lcd.setCursor(10,1);
  lcd.print(nut);  
  docnutbam();
  ktthaydoimk();
  ktmk();
}
