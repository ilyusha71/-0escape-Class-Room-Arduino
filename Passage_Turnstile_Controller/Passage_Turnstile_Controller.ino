/******************************************
  Title: Passage Turnstile Controller
  Studio: Wakaka KocmocA & 0escape
  Author: By iLYuSha Wakaka KocmocA
  2016/08/20
*******************************************/
/* Input */
const int wallJ = 2;
const int wallk = 3;
/* Output */
const int turnstile = 7; // 旋轉門陽極鎖
const int sound = 8; // 音效

/* Variable */
int valueWallJ = 0;
int valueWallK = 0;

void setup() {
  Serial.begin(9600);
  pinMode(wallJ,INPUT);
  pinMode(wallk,INPUT);
  pinMode(turnstile,OUTPUT);
  pinMode(sound,OUTPUT);
  digitalWrite(turnstile,LOW);
  digitalWrite(sound,HIGH);
  Serial.println("Passage Turnstile Controller 2016/08/20 iLYuSha Wakaka KocmocA");
  delay(3000);
}
void loop() {

  valueWallJ = digitalRead(wallJ);
  valueWallK = digitalRead(wallk);

  if(valueWallJ == 1 && valueWallK == 1)
  {
    digitalWrite(turnstile,HIGH);
    digitalWrite(sound,LOW);
  }
}
