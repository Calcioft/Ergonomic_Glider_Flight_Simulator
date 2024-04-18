#include <Keyboard.h>

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinAZUL = 8;
int pinVERMELHO = 9;
int pinVERDE = 10;
int liga_azul = 0;
int liga_vermelho = 0;
int liga_verde = 0;


void setup() {

  pinMode(pinA, INPUT_PULLUP);
  pinMode(pinB, INPUT_PULLUP);
  pinMode(pinC, INPUT_PULLUP);
  pinMode(pinAZUL, OUTPUT);
  pinMode(pinVERDE, OUTPUT);
  pinMode(pinVERMELHO, OUTPUT);


}

void loop() {

  
  
  if (digitalRead(pinA) == LOW)
  {
    if (liga_vermelho == 1)
    {
      liga_vermelho = liga_vermelho - 1;
      
      digitalWrite(pinVERMELHO, HIGH);
      Keyboard.print("Vermelho Ligado ");
    }
    else
    {
      liga_vermelho = liga_vermelho + 1;
      digitalWrite(pinVERMELHO, LOW);
      Keyboard.print("Vermelho Desligado ");
    }

    delay(300);
  }
    if (digitalRead(pinB) == LOW)
  {
    if (liga_azul == 1)
    {
      liga_azul = liga_azul - 1;
      
      digitalWrite(pinAZUL, HIGH);
      Keyboard.print("Azul Ligado ");
    }
    else
    {
      liga_azul = liga_azul + 1;
      digitalWrite(pinAZUL, LOW);
      Keyboard.print("Azul Desilgado ");
    }

    delay(300);
  }
    if (digitalRead(pinC) == LOW)
    
  {
    if (liga_verde == 1)
    {
      liga_verde = liga_verde - 1;
      
      digitalWrite(pinVERDE, HIGH);
      Keyboard.print("Verde Ligado ");
    }
    else
    {
      liga_verde = liga_verde + 1;
      digitalWrite(pinVERDE, LOW);
      Keyboard.print("Verde Desligado ");
    }

    delay(300);
  }

}
