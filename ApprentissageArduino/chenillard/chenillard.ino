/*
  Clignotement.
  Allume la LED pendant 1 seconde,
  puis l'éteint pendant 0,5 seconde.
*/
 
// Numéro de la broche à laquelle est
// connectée la LED
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;
 
// le code dans cette fonction est exécuté une fois au début
void setup() {
  // indique que la broche de la LED une sortie sortie :
  // on va modifier sa tension
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
}
 
// le code dans cette fonction est exécuté en boucle
void loop() {
  digitalWrite(led5, HIGH);   // allumer la LED         
  delay(500);               // attendre 1000 ms=1s
  digitalWrite(led5, LOW);    // éteindre la LED
                             // (tension 0V sur la broche)
  digitalWrite(led6, HIGH);   // allumer la LED         
  delay(500);               // attendre 1000 ms=1s
  digitalWrite(led6, LOW);    // éteindre la LED

  digitalWrite(led7, HIGH);   // allumer la LED         
  delay(500);               // attendre 1000 ms=1s
  digitalWrite(led7, LOW);    // éteindre la LED

  digitalWrite(led9, HIGH);   // allumer la LED         
  delay(500);               // attendre 1000 ms=1s
  digitalWrite(led9, LOW);    // éteindre la LED

  digitalWrite(led10, HIGH);   // allumer la LED         
  delay(500);               // attendre 1000 ms=1s
  digitalWrite(led10, LOW);    // éteindre la LED

  digitalWrite(led11, HIGH);   // allumer la LED         
  delay(500);               // attendre 1000 ms=1s
  digitalWrite(led11, LOW);    // éteindre la LED

  digitalWrite(led12, HIGH);   // allumer la LED         
  delay(500);               // attendre 1000 ms=1s
  digitalWrite(led12, LOW);    // éteindre la LED

  digitalWrite(led13, HIGH);   // allumer la LED         
  delay(500);               // attendre 1000 ms=1s
  digitalWrite(led13, LOW);    // éteindre la LED
}
