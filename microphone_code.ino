int ledPin = 13;  // (ขา digital ที่ 13)
int sensorPin = A0; // (ขาanalog ที่ A0)
int val = 0; // กำหนดตัวแปล val = 0

void setup(){
  pinMode(ledPin, OUTPUT); //set ledPin เป็น output
  pinMode(sensorPin, INPUT); //set ledPin เป็น input
  Serial.begin (9600); // เปิดพอร์ตอนุกรมตั้งค่าอัตราข้อมูลเป็น 9600 bps
}
  
void loop (){
  val = analogRead(sensorPin); //ให้อ่านค่าจากตัว SensorPin (microphone sensor) แล้วเก็บไว้ในตัวแปล val 
  Serial.println (val);// print ค่าที่อ่านจากตัวแปล val
  delay(100); // ตั้งค่าดีเลย์ 0.1 วินาที

  
  // when the sensor detects a signal above the threshold value, LED flashes
  if (val >= 300) { //ถ้า val มีค่ามากกว่าหรือเท่ากับ 300
    digitalWrite(ledPin, HIGH); //ไฟติด
  }
  else { //ถ้าไม่ใช่
    digitalWrite(ledPin, LOW); //ไฟดับ
  }
}
