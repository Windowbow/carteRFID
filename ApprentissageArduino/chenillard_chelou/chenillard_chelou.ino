int SER_Pin = 8;   //pin 14 on the 75HC595
int RCLK_Pin = 9;  //pin 12 on the 75HC595
int SRCLK_Pin = 10; //pin 11 on the 75HC595
int sens=1;
int led=0;
char incomingByte ;
//How many of the shift registers - change this
#define number_of_74hc595s 1 
 
//do not touch
#define numOfRegisterPins number_of_74hc595s * 8
 
boolean registers[numOfRegisterPins];
 
void setup(){
  Serial.begin(9600);
  pinMode(SER_Pin, OUTPUT);
  pinMode(RCLK_Pin, OUTPUT);
  pinMode(SRCLK_Pin, OUTPUT);
 
  //reset all register pins
  clearRegisters();
  writeRegisters();
}               
 
//set all register pins to LOW
void clearRegisters(){
  for(int i = numOfRegisterPins - 1; i >=  0; i--){
     registers[i] = LOW;
  }
} 
 
//Set and display registers
//Only call AFTER all values are set how you would like (slow otherwise)
void writeRegisters(){
 
  digitalWrite(RCLK_Pin, LOW);
 
  for(int i = numOfRegisterPins - 1; i >=  0; i--){
    digitalWrite(SRCLK_Pin, LOW);
 
    int val = registers[i];
    
    digitalWrite(SER_Pin, val);
    digitalWrite(SRCLK_Pin, HIGH);
 
  }
  digitalWrite(RCLK_Pin, HIGH);
 
}
 
//set an individual pin HIGH or LOW
void setRegisterPin(int index, int value){
  registers[index] = value;
}
 
void loop(){
 

  int i;
  for (i=0; i<8;i++) {
      Serial.print("numero");
      Serial.println(led);
      setRegisterPin(led, HIGH);
      writeRegisters();
      delay(500);               
      setRegisterPin(led, LOW);
      writeRegisters();
      if (Serial.available() > 0) {
                // read the incoming byte:
                //incomingByte = Serial.read();
                char texte;
                int j=0;
                int k;
                texte=Serial.read();
                if (texte=='d'){
                sens=1; 
                
      }
                if (texte=='i'){
                  sens=-1;
                  }
                }
      led=led+sens;
      // -1%8=-1 selon arduino
      if (led==-1){
        led=7;
      }
      if (led==8){
        led=0;
      }

    }

  //writeRegisters();  //MUST BE CALLED TO DISPLAY CHANGES
  //Only call once after the values are set how you need.
}
