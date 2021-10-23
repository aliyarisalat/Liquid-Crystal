
# include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
const int tp=8;
const int ep=9;
// const int g1=10;
// const int r1=11;
// const int w1=12;
float duration;
float distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(tp,OUTPUT);
  pinMode(ep,INPUT);
  // pinMode(g1,OUTPUT);
  // pinMode(r1,OUTPUT);
  // pinMode(w1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(tp,LOW);
  delay(100);

  digitalWrite(tp,HIGH);
  delay(100);

  digitalWrite(tp,LOW);
  duration=pulseIn(ep,HIGH);
  distance=0.034*duration/2.0;
  Serial.print(" Distance: ");
  Serial.print(distance);
  Serial.println(" cm ");
  lcd.setCursor(0,0);
  lcd.print(" Distance: ");
  lcd.setCursor(1,0);
  lcd.print(distance);
  delay(1000);
  
}
