#define triger 1
#define echo 2
#define transistor1 3
#define transistor2 4

float distancia;
void setup() {
  // put your setup code here, to run once:
  pinMode(triger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(transistor1,OUTPUT);
  pinMode(transistor2,OUTPUT);
  distancia=(pulseIn(13,HIGH)/2.0)/29.1;
}

void loop() {
  // put your main code here, to run repeatedly:
  int distancia2=(pulseIn(13,HIGH)/2.0)/29.1;
  while((distancia2>(distancia-10)) && (distancia2<distancia+20)){
    digitalWrite(transistor1,HIGH);
    digitalWrite(transistor2,HIGH);
    delay(100);
    distancia2=(pulseIn(13,HIGH)/2.0)/29.1;
  }
  while(distancia2>distancia+20){
    digitalWrite(transistor1,LOW);
    delay(50);
    distancia2=(pulseIn(13,HIGH)/2.0)/29.1;
    
  }
  

}
