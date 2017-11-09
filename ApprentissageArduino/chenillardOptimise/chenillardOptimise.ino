/*
  Clignotement.
  Allume la LED pendant 1 seconde,
  puis l'éteint pendant 0,5 seconde.
*/
 
// Numéro de la broche à laquelle est
// connectée la LED
int led;
 
// le code dans cette fonction est exécuté une fois au début
void setup() {
  // indique que la broche de la LED une sortie sortie :
  // on va modifier sa tension
  for (led=5; led<14;led++) {
    if (led != 8) {
      pinMode(led, OUTPUT);
    }
  }
}
// le code dans cette fonction est exécuté en boucle
void loop() {
    for (led=5; led<14;led++) {
    if (led != 8) {
      digitalWrite(led, HIGH);   // allumer la LED         
      delay(500);               // attendre 1000 ms=1s
      digitalWrite(led, LOW);    // éteindre la LED
    }
  }
}
