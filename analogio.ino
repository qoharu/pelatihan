#define ADC A0
#define LED 9
int val;
void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  analogWrite(LED,0);
}

void loop()
{
  val=analogRead(ADC)/4;
  analogWrite(LED,val);
  Serial.print("Nilai PWM = ");
  Serial.println(val);
}
