int f1 = A0;
int f2 = A1;
int f3 = A2;
int f4 = A3;
int f5 = A4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(f1,INPUT);
  pinMode(f2,INPUT);
  pinMode(f3,INPUT);
  pinMode(f4,INPUT);
  pinMode(f5,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int v1 = analogRead(f1);
  int v2 = analogRead(f2);
  int v3 = analogRead(f3);
  int v4 = analogRead(f4);
  int v5 = analogRead(f5);
  //  Serial.print("value 1 ");
  //  Serial.println(v1);
  //  Serial.print("value 2 ");
  //  Serial.println(v2);
  //  Serial.print("value 3 ");
  //  Serial.println(v3);
  //  Serial.print("value 4 ");
  //  Serial.println(v4);
  //  Serial.print("value 5");
  //  Serial.println(v5);
   
  if (v1<=200)
  {
    Serial.println("Good Morning");
  }
  else if (v2<=150)
  {
    Serial.println("Welcome");
  }
  else if (v3<=70)
  {
    Serial.println("Thank You");
  }
  else if (v4<=50)
  {
    Serial.println("I hope u liked our presentation");
  }
  else if(v5<=100)
  {
    Serial.println("Bye");
  }
  delay(1000);

}
