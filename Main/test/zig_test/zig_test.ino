#include <ZigduinoRadio.h>

void setup()
{
  ZigduinoRadio.begin(0);
  Serial.begin(9600);
  ZigduinoRadio.attachError(errHandle);
  ZigduinoRadio.attachTxDone(onXmitDone);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
}

void loop()
{
  ZigduinoRadio.beginTransmission();
  ZigduinoRadio.write('a');
  ZigduinoRadio.endTransmission();
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(18, HIGH);
  digitalWrite(20, HIGH);
  digitalWrite(22, HIGH);
  digitalWrite(24, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, LOW);
  digitalWrite(15, LOW);
  digitalWrite(17, LOW);
  digitalWrite(19, LOW);
  digitalWrite(21, LOW);
  digitalWrite(23, LOW);
  
  ZigduinoRadio.beginTransmission();
  ZigduinoRadio.write('a');
  ZigduinoRadio.endTransmission();
  delay(500);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(14, LOW);
  digitalWrite(16, LOW);
  digitalWrite(18, LOW);
  digitalWrite(20, LOW);
  digitalWrite(22, LOW);
  digitalWrite(24, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(15, HIGH);
  digitalWrite(17, HIGH);
  digitalWrite(19, HIGH);
  digitalWrite(21, HIGH);
  digitalWrite(23, HIGH);
}

void errHandle(radio_error_t err)
{
  Serial.println();
  Serial.print("Error: ");
  Serial.print((uint16_t)err);
  Serial.println();
}

void onXmitDone(radio_tx_done_t x)
{
  Serial.println();
  Serial.print("TxDone: ");
  Serial.print((uint16_t)x);
  Serial.println();
}


