#define M_A1 5
#define M_A2 6
#define M_B1 8
#define M_B2 9
#define LEFT_S 2
#define RIGHT_S 3

int Out_R_S = 0;
int Out_L_S = 0;

void setup() {
      pinMode(M_A1, OUTPUT);
      pinMode(M_A2, OUTPUT);
      pinMode(M_B1, OUTPUT);
      pinMode(M_B2, OUTPUT);  
      pinMode(10, OUTPUT);
      pinMode(11, OUTPUT);  
      pinMode(LEFT_S, INPUT);
      pinMode(RIGHT_S, INPUT);}

void loop() {
       analogWrite(10,75);
       analogWrite(11,75);
       Out_R_S = digitalRead(RIGHT_S);
       Out_L_S = digitalRead(LEFT_S);    
if (Out_R_S == 1 && Out_L_S == 0){
     analogWrite(10,90);
     analogWrite(11,90);
    turnRight();
    delay(500);}
else if (Out_R_S == 0 && Out_L_S == 1){
    analogWrite(10,90);
     analogWrite(11,90);
      turnLeft();
    delay(500); }
else if (Out_R_S == 1 && Out_L_S == 1){
    Stop();}
  else if (Out_R_S == 0 && Out_L_S == 0){
    Forward();}}

void turnLeft() {
      digitalWrite(M_A1, HIGH);
      digitalWrite(M_A2, LOW);
      digitalWrite(M_B1, LOW);
      digitalWrite(M_B2, HIGH);}
void turnRight() {
      digitalWrite(M_A1, LOW);
      digitalWrite(M_A2, HIGH);
      digitalWrite(M_B1, HIGH);
      digitalWrite(M_B2, LOW);}
void Backward() {
      digitalWrite(M_A1, HIGH);
      digitalWrite(M_A2, LOW);
      digitalWrite(M_B1, HIGH);
      digitalWrite(M_B2, LOW);  }

void Forward() {
     digitalWrite(M_A1, LOW);
     digitalWrite(M_A2, HIGH);
     digitalWrite(M_B1, LOW);
     digitalWrite(M_B2, HIGH);  }

void Stop() {
      digitalWrite(M_A1, LOW);
      digitalWrite(M_A2, LOW);
      digitalWrite(M_B1, LOW);
      digitalWrite(M_B2, LOW);  }
