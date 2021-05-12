//defining variable values
#define LED1 8
#define LED2 9
#define LED3 10
#define LED4 11
#define DELAY 250


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Menetapkan mode pin yang akan digunakan
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //untuk setiap LED (LED1 - LED4)
  //print pada serial LED mana yang menyala
  //menyalakan LED
  //delay selama 0.25 detik
  //matikan LED
  
  //LED1
  Serial.println("LED - 1 Nyala");
  digitalWrite(LED1, HIGH);
  delay(DELAY);
  digitalWrite(LED1, LOW);

  //LED2
  Serial.println("LED - 2 Nyala");
  digitalWrite(LED2, HIGH);
  delay(DELAY);
  digitalWrite(LED2, LOW);

  //LED3
  Serial.println("LED - 3 Nyala");
  digitalWrite(LED3, HIGH);
  delay(DELAY);
  digitalWrite(LED3, LOW);

  //LED4
  Serial.println("LED - 4 Nyala");
  digitalWrite(LED4, HIGH);
  delay(DELAY);
  digitalWrite(LED4, LOW);
}
//hai ini nyoba