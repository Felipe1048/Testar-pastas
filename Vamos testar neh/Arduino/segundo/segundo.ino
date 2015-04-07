int buzz1 =33;
int buzz2 =53;
int t=1;
int led[15];
int i;
unsigned long flag=0;
int h=1;
int m=0;
int tempo=int(3.64*(m+60*h));
int tempo_restante=(1000*(60*(m+60*h))-2918)-16384*tempo;


// 3,5 segundos de delay

void buzinar(){

for(i=0;i<100;i++){
digitalWrite(buzz1, LOW);
digitalWrite(buzz2, HIGH);
delay(t);
digitalWrite(buzz2, LOW);
digitalWrite(buzz1, HIGH);
delay(t);
}

}

void setup() {
//tempo=0;
pinMode(buzz1, OUTPUT);
pinMode(buzz2, OUTPUT);

//for(i=0;i<4;i++)led[i]=22+2*i;
//for(i=0;i<10;i++)led[i+4]=3+i;

for(i=0;i<10;i++)led[i]=12-i;
for(i=0;i<4;i++)led[i+10]=28-2*i;

for(i=0;i<14;i++)pinMode(led[i], OUTPUT);

//tempo=0;
//tempo_restante=600;
//Mostrando
}



void loop()
{

while(flag!=16384){

for(i=0;i<14;i++)
if((1<<i)&flag){digitalWrite(led[i], HIGH);}else{digitalWrite(led[i], LOW);}  

flag++;

delay(tempo);

}

delay(tempo_restante);

flag=0;

buzinar();

/*
for(i=0;i<15;i++)
digitalWrite(led[i], HIGH);

delay(5000);

for(i=0;i<15;i++)
digitalWrite(led[i], LOW);

delay(5000);
*/

}
