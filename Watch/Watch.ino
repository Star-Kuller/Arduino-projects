#define PIN_LED 8
#define PIN_PHOTO_SENSOR A0

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}
bool Alarm = false;
void loop() {
  int val = analogRead(PIN_PHOTO_SENSOR);
  Serial.println(val);
  if (val > 700) {
    Alarm = true;
  }
  if (Alarm) {
    tone(8, 600);
    delay(1000);
    noTone(8);
    delay(1000);
  }
}