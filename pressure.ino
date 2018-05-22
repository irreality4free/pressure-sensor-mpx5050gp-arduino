float sensor = A1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  float pressure = (50000/1024) * analogRead(sensor) ;
//  Serial.print("didgit value  ");
//  Serial.println(analogRead(sensor));
//  Serial.print("50000/1024  ");
//  Serial.println(50000/1024);
//  Serial.print("50000/1024*30  ");
//  Serial.println(50000/1024*30);
  Serial.print("pressure = ");
  Serial.print(pressure/1000);
  Serial.println(" kPa");
  delay(1000);
  // put your main code here, to run repeatedly:

}
