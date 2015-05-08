//Copy Dari Sini
#define LED1 10
#define LED2 11
#define LED3 12
int count = 0;
boolean Stat = true;

void setup()
{
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  pinMode(3, INPUT);
}

void loop()
{
  Serial.println(count);
  if (digitalRead(3) == HIGH)
  {
    Stat = true;
  }
  else if (digitalRead(3) == LOW && Stat == true)
  {
    count++;
    if (count >= 6)
    {
      count = 0;
    }
    Stat = false;
  }
  if (count == 0)
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    delay(100);
  }
  else if (count == 1)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
  }
  else if (count == 2)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    delay(100);
  }
  else if (count == 3)
  {
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(100);
  }
  else if (count == 4)
  {
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
  }
  else if (count == 5)
  {
    for (int i = 0; i <= 5; i++)
    {
      digitalWrite(LED1, HIGH);
      delay(50);
      digitalWrite(LED1, LOW);
      delay(50);
      digitalWrite(LED2, HIGH);
      delay(50);
      digitalWrite(LED2, LOW);
      delay(50);
      digitalWrite(LED3, HIGH);
      delay(50);
      digitalWrite(LED3, LOW);
      delay(50);
      digitalWrite(LED3, HIGH);
      delay(50);
      digitalWrite(LED3, LOW);
      delay(50);
      digitalWrite(LED2, HIGH);
      delay(50);
      digitalWrite(LED2, LOW);
      delay(50);
      digitalWrite(LED1, HIGH);
      delay(50);
      digitalWrite(LED1, LOW);
      delay(50);
      if (digitalRead(3) == LOW)
      {
        count = 0;
        Stat = false;
        return;
      }
    }
    delay(300);
    for (int i = 0; i <= 7; i++)
    {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      delay(30);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      delay(30);
      if (digitalRead(3) == LOW)
      {
        count = 0;
        Stat = false;
        return;
      }
    }
    delay(300);
  }
}
//Sampai sini