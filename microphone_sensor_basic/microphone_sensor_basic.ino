void setup() {
  pinMode(A0, INPUT);                 // กำหนด A0 เป็น input
  Serial.begin(9600);                 // เปิดพอร์ตอนุกรมตั้งค่าอัตราข้อมูลเป็น 9600 bps
}
loop() {
  int sensorValue = analogRead(A0);   //ตั้งตัวแปล sensorValue ไว้เก็บค่าที่ได้จากการอ่านค่าของinput analog จากขา A0
  Serial.println(sensorValue);        // ปริ๊นค่าที่ได้
  delay(100);                         //ตั้งดีเลย์ 0.1 วินาที
}                                   
