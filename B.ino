#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define led1 A0
#define led2 A1

#define led3 A2
#define led4 A3

#define led5 A4
#define led6 A5

#define led7 2
#define led8 3

#define led9 4
#define led10 5

#define led11 6


int buttonState = 0;

RF24 radio(9, 8); // CE, CSN
const byte address[6] = "00002";

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);

  pinMode(led11, OUTPUT);
  
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);

  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  
  digitalWrite(led11, HIGH);
 
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
}
void loop() {
  radio.startListening();
  while (!radio.available());
  radio.read(&buttonState, sizeof(buttonState));
  Serial.println(buttonState);

  if (buttonState == 1) {
    digitalWrite(led1, LOW);
  }
  else  if (buttonState == 2) {
    digitalWrite(led1, HIGH);
  }
  else if (buttonState == 3) {
    digitalWrite(led2, LOW);
  }
  else  if (buttonState == 4) {
    digitalWrite(led2, HIGH);
  }

   else if (buttonState == 5) {
    digitalWrite(led3, LOW);
  }
  else  if (buttonState == 6) {
    digitalWrite(led3, HIGH);
  }
  else if (buttonState == 7) {
    digitalWrite(led4, LOW);
  }
  else  if (buttonState == 8) {
    digitalWrite(led4, HIGH);
  }


  else if (buttonState == 9) {
    digitalWrite(led5, LOW);
  }
  else  if (buttonState == 10) {
    digitalWrite(led5, HIGH);
  }
  else if (buttonState == 11) {
    digitalWrite(led6, LOW);
  }
  else  if (buttonState == 12) {
    digitalWrite(led6, HIGH);
  }


   else if (buttonState == 13) {
    digitalWrite(led7, LOW);
  }
  else  if (buttonState == 14) {
    digitalWrite(led7, HIGH);
  }
  else if (buttonState == 15) {
    digitalWrite(led8, LOW);
  }
  else  if (buttonState == 16) {
    digitalWrite(led8, HIGH);
  }


   else if (buttonState == 17) {
    digitalWrite(led9, LOW);
  }
  else  if (buttonState == 18) {
    digitalWrite(led9, HIGH);
  }
  else if (buttonState == 19) {
    digitalWrite(led10, LOW);
  }
  else  if (buttonState == 20) {
    digitalWrite(led10, HIGH);
  }


   else if (buttonState == 21) {
    digitalWrite(led11, LOW);
  }
  else  if (buttonState == 22) {
    digitalWrite(led11, HIGH);
 
  }
}
