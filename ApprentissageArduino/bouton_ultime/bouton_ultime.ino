/*
  Allumage de LED par bouton.
  Allume la LED quand on appuie sur le bouton.
 */
 
// Numéro de la broche à laquelle est connecté le bouton
const int buttonPin = 2;
// Numéro de la broche à laquelle est connectée la LED
const int ledPin =  13;
// lastState est vrai lorsque le bouton est appuyé
int lastState=0;

// ledState est vrai lorsque la led est allumé
int ledState=0;
 
void setup() {
  // indique que la broche de la LED est utilisée en sortie :
  // on va modifier sa tension
  pinMode(ledPin, OUTPUT);
  // indique que la broche du bouton est utilisée en entrée :
  // on va lire sa tension
  pinMode(buttonPin, INPUT);
}
void loop() {
  // lit l'état du bouton : appuyé si on lit 5V
  // éteint si on lit 0 V
  int buttonState = digitalRead(buttonPin);
 
  // Condition sur l'état du bouton
  if (buttonState == HIGH) {
    if (lastState==LOW){
    // s'il est à 5V (HIGH)
    // on allume la LED
        digitalWrite(ledPin, HIGH);
        delay(100);
        lastState=HIGH;
      }
      else {
        lastState = LOW;
        digitalWrite(ledPin, LOW);
        delay(100);
      }
      while (digitalRead(buttonPin)==HIGH){}
    }
   else
   {
  }

}
