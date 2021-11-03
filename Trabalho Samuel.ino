#define P A0
#define Botao 8
#define Pot 3
#define ent1 2
#define ent2 7


int vP = 0;
int vel = 0;
int estadoBotao = 0;
   
void setup()  
{  
  Serial.begin(9600);
  pinMode(P, INPUT);
  pinMode(Botao, INPUT_PULLUP);
  pinMode(Pot, OUTPUT); 
  pinMode(ent1, OUTPUT);  
  pinMode(ent2, OUTPUT);  
}    
void loop()  
{  
  vP = analogRead (P);
  vel = map(vP ,0 ,1023, 0, 255);
  estadoBotao = digitalRead (Botao);
  analogWrite(Pot, vel);   
  if (estadoBotao == HIGH){
      digitalWrite(ent1, LOW);  
      digitalWrite(ent2, HIGH);  
  }
  else{
      digitalWrite(ent1, HIGH);  
      digitalWrite(ent2, LOW); 
  }
}  