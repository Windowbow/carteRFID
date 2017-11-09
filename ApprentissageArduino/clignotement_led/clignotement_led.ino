/*
  Clignotement.
  Allume la LED pendant 1 seconde,
  puis l'éteint pendant 0,5 seconde.
*/
 
// Numéro de la broche à laquelle est
// connectée la LED
int led = 13;
 
// le code dans cette fonction est exécuté une fois au début
void setup() {
  // indique que la broche de la LED une sortie sortie :
  // on va modifier sa tension
  pinMode(led, OUTPUT);
}
 
// le code dans cette fonction est exécuté en boucle
void loop() {
  digitalWrite(led, HIGH);   // allumer la LED
                             // (tension 5V sur la broche)
  delay(1000);               // attendre 1000 ms=1s
  digitalWrite(led, LOW);    // éteindre la LED
                             // (tension 0V sur la broche)
  delay(500);               // attendre 0,5 seconde
}
