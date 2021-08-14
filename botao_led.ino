int led = 13; // Led endereçado no pino 13
int botao = 12; // Botão endereçado no pino 12

int estadoBotao = 0;// Botão em 0 LOW ou 1 HIGH

void setup()
{
  pinMode(led,OUTPUT); // Pino 13 definido como saída
  pinMode(botao,INPUT); // Pino 12 definido como entrada
  }

void loop(){
  estadoBotao = digitalRead(botao);
  
  if (estadoBotao == HIGH) {
    digitalWrite(led, HIGH); // Botão pressionado, acende o Led
  } else {
    digitalWrite(led,LOW); // Botão não pressionado, apaga o Led
  }
}
