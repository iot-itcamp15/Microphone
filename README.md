# Microphone Sensor


### Guide for Microphone Sound Sensor Arduino

<img src="https://img.staticbg.com/thumb/large/oaupload/banggood/images/1C/80/94db0a4e-61fa-4dc6-9533-83a7d301a016.JPG"
     alt="Markdown Monster icon"
     style=" margin-left: 40px;" />
     
#####  เป็นเซนเซอร์ที่ใช้ในการวัดค่าระดับเสียงว่าเสียงนั้นดังมากแค่ใหน
##### เซนเซอร์เหล่านี้มีหลากหลาย ในภาพด้านล่างจะเห็นสิ่งที่ใช้บ่อยที่สุดกับ Arduino


<img src="https://i2.wp.com/randomnerdtutorials.com/wp-content/uploads/2016/10/sound-sensor.jpg?w=700&ssl=1"
     alt="Markdown Monster icon"
     style=" margin-left: 40px;" />
     
##### ที่ด้านซ้ายสุดคุณจะเห็น KY-038 และที่ด้านขวาของเซ็นเซอร์เสียงไมโครโฟน LM393
##### โมดูลเซ็นเซอร์ทั้งสองมี Potentiometer ในตัว





### **ตัวอย่างโค้ด**


##### void setup() { 

#####     Serial.begin(9600);                        // เปิดพอร์ตอนุกรมตั้งค่าอัตราข้อมูลเป็น 9600 bps

##### }   

##### loop() { 

#####     int sensorValue = analogRead(A0);         //ตั้งตัวแปล sensorValue ไว้เก็บค่าที่ได้จากการอ่านค่าของinput analog จากขา A0

#####     Serial.println(sensorValue);              // ปริ๊นค่าที่ได้

#####     delay(100);                               //ตั้งดีเลย์ 0.1 วินาที 

##### }                                            // หมายเหตุ กดอัพโค้ดลงบอร์ด จากนั้น กด Ctrl+ Shift + M เช็ค output
 



