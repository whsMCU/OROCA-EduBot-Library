#include <EduBot.h>




void setup() {
  // put your setup code here, to run once:
  edubot.begin(115200);                                   
}

void loop() {
  // put your main code here, to run repeatedly:
  static uint32_t pre_time; 

  
  if (millis()-pre_time >= 50)
  {
    pre_time = millis();

    Serial.print("aX : ");
    Serial.print(edubot.imu.getAccX());
    Serial.print("\taY : ");
    Serial.print(edubot.imu.getAccY());

    Serial.print("\taZ : ");
    Serial.print(edubot.imu.getAccZ());
    Serial.println();    
  }   
}