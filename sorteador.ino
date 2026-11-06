
int pinA=2;
int pinB=3;
int pinC=4;
int pinD=5;
int pinE=6;
int pinF=7;
int pinG=8;

int botao=9;
int sorteando=0;

void setup ()
{
  for (int x=0;x<=8;x++){
    pinMode (x, OUTPUT);
  }

  for (int x=0;x<=8;x++){
    digitalWrite (x, LOW);
  }

  pinMode (botao, INPUT_PULLUP);

  randomSeed(analogRead(A0));
}

void loop ()
{
  //botao inicia ou para o sorteio
  if (digitalRead(botao)==LOW){
    delay(50);

    if (digitalRead(botao)==LOW){
      sorteando=!sorteando;

      while (digitalRead(botao)==LOW){
      }

      delay(100);
    }
  }

  //sorteio de numeros aleatorios
  if (sorteando==1){

    int numero=random(0,10);

    //numero 0
    if (numero==0){
      digitalWrite (pinA,HIGH);
      digitalWrite (pinB,HIGH);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,HIGH);
      digitalWrite (pinE,HIGH);
      digitalWrite (pinF,HIGH);
      digitalWrite (pinG,LOW);
    }

    //numero 1
    else if (numero==1){
      digitalWrite (pinA,LOW);
      digitalWrite (pinB,HIGH);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,LOW);
      digitalWrite (pinE,LOW);
      digitalWrite (pinF,LOW);
      digitalWrite (pinG,LOW);
    }

    //numero 2
    else if (numero==2){
      digitalWrite (pinA,HIGH);
      digitalWrite (pinB,HIGH);
      digitalWrite (pinC,LOW);
      digitalWrite (pinD,HIGH);
      digitalWrite (pinE,HIGH);
      digitalWrite (pinF,LOW);
      digitalWrite (pinG,HIGH);
    }

    //numero 3
    else if (numero==3){
      digitalWrite (pinA,HIGH);
      digitalWrite (pinB,HIGH);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,HIGH);
      digitalWrite (pinE,LOW);
      digitalWrite (pinF,LOW);
      digitalWrite (pinG,HIGH);
    }

    //numero 4
    else if (numero==4){
      digitalWrite (pinA,LOW);
      digitalWrite (pinB,HIGH);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,LOW);
      digitalWrite (pinE,LOW);
      digitalWrite (pinF,HIGH);
      digitalWrite (pinG,HIGH);
    }

    //numero 5
    else if (numero==5){
      digitalWrite (pinA,HIGH);
      digitalWrite (pinB,LOW);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,HIGH);
      digitalWrite (pinE,LOW);
      digitalWrite (pinF,HIGH);
      digitalWrite (pinG,HIGH);
    }

    //numero 6
    else if (numero==6){
      digitalWrite (pinA,HIGH);
      digitalWrite (pinB,LOW);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,HIGH);
      digitalWrite (pinE,HIGH);
      digitalWrite (pinF,HIGH);
      digitalWrite (pinG,HIGH);
    }

    //numero 7
    else if (numero==7){
      digitalWrite (pinA,HIGH);
      digitalWrite (pinB,HIGH);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,LOW);
      digitalWrite (pinE,LOW);
      digitalWrite (pinF,LOW);
      digitalWrite (pinG,LOW);
    }

    //numero 8
    else if (numero==8){
      digitalWrite (pinA,HIGH);
      digitalWrite (pinB,HIGH);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,HIGH);
      digitalWrite (pinE,HIGH);
      digitalWrite (pinF,HIGH);
      digitalWrite (pinG,HIGH);
    }

    //numero 9
    else if (numero==9){
      digitalWrite (pinA,HIGH);
      digitalWrite (pinB,HIGH);
      digitalWrite (pinC,HIGH);
      digitalWrite (pinD,HIGH);
      digitalWrite (pinE,LOW);
      digitalWrite (pinF,HIGH);
      digitalWrite (pinG,HIGH);
    }

    delay(100);
  }
}
