# การทดลองที่ 4 เรื่อง การเขียนโปรแกรมอินพุตสัญญาณดิจิทัล

## วัตถุประสงค์ 
1. ให้เข้าใจถึงโปรแกรมอินพุตสัญญาณดิจิทัล
2. เพื่อทดสอบการทำงานของโปรแกรมอินพุตสัญญาณดิจิทัล
3. เพื่อให้เข้าใจการทำงานของโปรแกรมอินพุตสัญญาณดิจิทัลกับเซ็นเซอร์แสง


## อุปกรณ์ที่ใช้
- บอร์ด ESP-01
- USB
- ซีเรียลพอร์ต
- ตัวต้านทาน
- เซ็นเซอร์แสง


## ข้อมูลเบื้องต้น 
- การต่อวงจรอินพุตแบบดิจิทัล (Digital Input) มีสองแบบ แบบแรกคือการต่อแบบ Pull Up กล่าวคือ ในขณะที่ไม่ได้กดสวิตช์ บอร์ด Arduino Mega 2560 จะอ่านแรงดันไฟฟ้าได้ +3.3 V หรือที่เรียกว่า ลอจิก HIGH (‘1’) แต่เมื่อมีการกดสวิตช์ แรงดันไฟฟ้าจะลงมาที่ 0 V ซึ่งเรียกว่าลอจิก LOW (‘0’) ดังนั้นการทำงานภายใต้การต่อแบบ Pull up จึงถูกเรียกว่า Active Low นั่นคือลอจิก LOW ในขณะทำงาน แบบที่สองคือการต่อแบบ Pull Down ซึ่งจะได้ผลลัพธ์กลับกัน คือหากไม่ได้กดสวิตช์ จะได้ลอจิก LOW ‘0’ แต่เมื่อกดสวิตซ์จะได้ลอจิก HIGH ‘1’ ทำให้การต่อแบบ Pull Down ถูกเรียกว่า Active High นั่นคือเกิดการสั่งการในขณะลอจิก HIGH นั่นเอง
  - ข้อมูลเพิ่มเติม [netpie](https://netpie.gitbooks.io/nodemcu-esp8266-on-netpie/content/lab-3.html)



## วิธีการทำการทดลอง 
1. เขียนโปรแกรม กำหนดให้พอร์ตศูนย์เป็น input และพอร์ตสองเป็น output
  > <img width="445" alt="image" src="https://user-images.githubusercontent.com/80879351/112290788-265b6500-8cc2-11eb-85c5-8fc9848a17b0.png">
2. เชื่อมต่อบอร์ด ESP-01 เข้ากับซีเรียลพอร์ต และต่อเข้ากับคอมพิวเตอร์ด้วยสาย USB
  > <img width="345" alt="image" src="https://user-images.githubusercontent.com/80879351/112291156-733f3b80-8cc2-11eb-9c94-b4e9a7ef0c4c.png">
3. ลงโปรแกรมให้กับบอร์ดด้วยคำสั่ง pio -t upload และกดปุ่มพอร์ตศูนย์กับปุ่มรีเซ็ต
  > <img width="310" alt="image" src="https://user-images.githubusercontent.com/80879351/112291504-c0231200-8cc2-11eb-8417-d1dac8dba76b.png">
4. จากนั้นรันโปรแกรมด้วยคำสั่ง pio device monitor
5. ทดลองนำสายไฟสีขาวจิ้มไปที่พอร์ตศูนย์ หรือกดที่ปุ่มพอร์ตศูนย์
  > <img width="309" alt="image" src="https://user-images.githubusercontent.com/80879351/112292027-45a6c200-8cc3-11eb-9d06-e63d671dda81.png">
6. ต่อตัวต้านทานและเซ็นเซอร์แสงเข้าพอร์ตศูนย์ และทดลองเอามือบังที่เซ็นเซอร์แสง
  > <img width="347" alt="image" src="https://user-images.githubusercontent.com/80879351/112292413-a635ff00-8cc3-11eb-9752-f4c6070e55d9.png">

## ผลการทดลอง
- เมื่อทดลองนำสายไฟสีขาวจิ้มไปที่พอร์ตศูนย์ ผลลัพธ์ที่แสดงจะเปลี่ยนจากศูนย์เป็นหนึ่ง และหลอดLED จะเปล่งแสง
  > <img width="490" alt="image" src="https://user-images.githubusercontent.com/80879351/112293029-3ffdac00-8cc4-11eb-8167-c2a928727ba7.png">
- เมื่อต่อตัวต้านทานและเซ็นเซอร์แสงเข้าพอร์ตศูนย์ ผลลัพธ์ที่แสดงเป็นศูนย์ และหลอด LED เปล่งแสง แต่เมื่อทดลองเอามือบังเซ็นเซอร์ ผลลัพธ์จะเปลี่ยนจากศูนย์เป็นหนึ่ง และหลอด LED ดับ
  > <img width="347" alt="image" src="https://user-images.githubusercontent.com/80879351/112293397-b00c3200-8cc4-11eb-9cab-bafacc19d2e9.png">
  > <img width="335" alt="image" src="https://user-images.githubusercontent.com/80879351/112293527-d29e4b00-8cc4-11eb-89de-ebab78089651.png">



## อภิปรายผลการทดลอง 
- จากการทดลองพบว่า เราสามารถสร้างโปรแกรมอินพุตสัญญาณดิจิทัลได้ โดยที่เมื่อเราอินพุตที่พอร์ตศูนย์ จะทำให้เอาท์พุตที่ออกมาเป็น 0 และหลอด LED เปล่งแสง

####


## คำถามหลังการทดลอง
1. เพราะเหตุใดเมื่อบังแสงที่เซ็นเซอร์แสง LED จึงดับ❓
  > ตอบ เนื่องจากเซ็นเซอร์แสงจะมีความต้านทานมากขึ้นเมื่อถูกบังแสง ซึ่งจะเปรียบเหมือนไม่ได้อินพุตที่พอร์ตศูนย์ LED จึงดับ
