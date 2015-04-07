//
int buzz1 =33;
int buzz2 =53;
int t=1;
int flag=0;
int botao_buz=22;
int botao_t=24;
int led0=8;
int led1=9;
int led2=10;
int led3=11;
int led4=12;
int i;
unsigned long espera=6*60;

void setup() {

pinMode(buzz1, OUTPUT);
pinMode(buzz2, OUTPUT);
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(botao_buz, INPUT);
pinMode(botao_t, INPUT);
}



void loop()
{
  
if((1<<0)&t){digitalWrite(led0, HIGH);}else{digitalWrite(led0, LOW);}  
if((1<<1)&t){digitalWrite(led1, HIGH);}else{digitalWrite(led1, LOW);}  
if((1<<2)&t){digitalWrite(led2, HIGH);}else{digitalWrite(led2, LOW);}  
if((1<<3)&t){digitalWrite(led3, HIGH);}else{digitalWrite(led3, LOW);}  
if((1<<4)&t){digitalWrite(led4, HIGH);}else{digitalWrite(led4, LOW);}

if(digitalRead(botao_t)){
if(flag==0)t+=1000;
flag=1;
}else{
flag=0;
}

digitalWrite(led0, LOW);

for(i=0;i<espera/6;i++)delay(1000);
digitalWrite(led0, HIGH);
for(i=0;i<espera/6;i++)delay(1000);
digitalWrite(led1, HIGH);
for(i=0;i<espera/6;i++)delay(1000);
digitalWrite(led2, HIGH);
for(i=0;i<espera/6;i++)delay(1000);
digitalWrite(led3, HIGH);
for(i=0;i<espera/6;i++)delay(1000);
digitalWrite(led4, HIGH);
for(i=0;i<(espera-espera/6-espera/6-espera/6-espera/6-espera/6);i++)delay(1000);

//if(digitalRead(botao_buz)){
for(i=0;i<100;i++){
digitalWrite(buzz1, LOW);
digitalWrite(buzz2, HIGH);
delay(t);
digitalWrite(buzz2, LOW);
digitalWrite(buzz1, HIGH);
delay(t);
}
//}
}
