#define ML_DIR_PIN 12
#define ML_SPD_PIN 10

#define MR_DIR_PIN 13
#define MR_SPD_PIN 11

#define ML_DIR 0
#define MR_DIR 0

#define PROX_L_PIN 2
#define PROX_R_PIN 3

void setup() {
  pinMode(ML_DIR_PIN, OUTPUT);
  pinMode(ML_SPD_PIN, OUTPUT);
  pinMode(MR_DIR_PIN, OUTPUT);
  pinMode(MR_SPD_PIN, OUTPUT);

  pinMode(PROX_L_PIN, OUTPUT);
  pinMode(PROX_R_PIN, OUTPUT);
  
  setSpeed( 128 );
  moveForward();
}

void moveForward(){
  digitalWrite( ML_DIR_PIN, ML_DIR );
  digitalWrite( MR_DIR_PIN, MR_DIR );
}

void moveBackward(){
  digitalWrite( ML_DIR_PIN, !ML_DIR );
  digitalWrite( MR_DIR_PIN, !MR_DIR );
}

void rollLeft(){
  digitalWrite( ML_DIR_PIN, !ML_DIR );
  digitalWrite( MR_DIR_PIN, MR_DIR );
}

void rollRight(){
  digitalWrite( ML_DIR_PIN, ML_DIR );
  digitalWrite( MR_DIR_PIN, !MR_DIR );
}

void setSpeed(int speed){
  analogWrite( ML_SPD_PIN, speed );
  analogWrite( MR_SPD_PIN, speed );
}

void loop() {
  if( digitalRead(PROX_L_PIN) ){
      moveBackward();
      delay(500);
      rollLeft();
      delay(300);
  } else {    
      moveForward();
  }
}

