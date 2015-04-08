int ledDelay = 1000; // espera entre as trocas de cores
int vermelho = 13;
int amarelo = 12;
int verde = 11;

void setup()
{
pinMode (vermelho, OUTPUT);
pinMode (amarelo, OUTPUT);
pinMode (verde, OUTPUT);
}

void loop()
{
digitalWrite (vermelho, HIGH); // liga o led vermelho
delay (ledDelay); // espera o tempo determinado na variável “ledDelay”
digitalWrite (vermelho, LOW); // desliga o led vermelho
digitalWrite (verde, HIGH); // liga o led verde
delay (ledDelay); // espera o tempo determinado na variável “ledDelay”
digitalWrite (verde, LOW); // desliga o led verde
digitalWrite (amarelo, HIGH); // liga o led amarelo
delay (ledDelay); // espera o tempo determinado na variável “ledDelay”
digitalWrite (amarelo, LOW); // desliga o led amarelo
}
