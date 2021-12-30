#include <SPI.h>
#include <MFRC522.h>
#include <Stepper.h>

const int stepsPerRevolution = 48;

//  Motor Driver Pins
#define IN1 25
#define IN2 26
#define IN3 27
#define IN4 13

constexpr uint8_t RST_PIN = 15;     // Configurable, see typical pin layout above
constexpr uint8_t SS_PIN = 5;     // Configurable, see typical pin layout above

// initialize the stepper library
Stepper myStepper(stepsPerRevolution, 25, 26, 27, 13);

MFRC522 rfid(SS_PIN, RST_PIN); // Instance of the class
MFRC522::MIFARE_Key key;
String tag;
//int dem = 0;
bool st=false;
void setup() {
    // set the speed at 5 rpm:
  myStepper.setSpeed(600);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(115200);
  SPI.begin(); // Init SPI bus
  rfid.PCD_Init(); // Init MFRC522
//  pinMode(D8, OUTPUT);
}
void loop() {
  if ( ! rfid.PICC_IsNewCardPresent())
    return;
  if (rfid.PICC_ReadCardSerial()) {
    for (byte i = 0; i < 4; i++) {
      tag += rfid.uid.uidByte[i];
    }
    Serial.println(tag);
    if (tag == "195146239150") {
      st =! st;
      Serial.print("Status: ");
      Serial.println(st);
      if (st)//số lẻ
      {
        Serial.println("OK MỞ ĐƯỢC");
       myStepper.step(3.5*stepsPerRevolution);
      delay(100);
      }
      else
      {
         Serial.println("OK ĐÓNG");
        myStepper.step(-3.5*stepsPerRevolution);
       delay(100);
      }
       
    } else {
      
      Serial.println("BẠN DELL CÓ CƠ HỘI");
      
    }
    tag = "";
    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }
}
