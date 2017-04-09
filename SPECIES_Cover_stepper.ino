#define step_pin 9 
#define dir_pin 8  
#define Direction 3   
#define Limit01 4  
#define Limit02 5  


int step_speed = 1;  // Speed of Stepper motor (higher = slower)

void setup() {
   pinMode(dir_pin, OUTPUT);
   pinMode(step_pin, OUTPUT);
   pinMode(Direction, INPUT);

   pinMode(Limit01, INPUT);
   pinMode(Limit01, INPUT);
}

void loop() {  
  if (digitalRead(Direction) == HIGH) {  //  If Direction pin LOW
    if (!digitalRead(Limit01)) {  // check if limit switch is activated
    digitalWrite(dir_pin, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
        digitalWrite(step_pin, HIGH);
        delay(step_speed);
        digitalWrite(step_pin, LOW);
        delay(step_speed);
    }
      else {}                      //  if limit switch is activated, stop    
  }
  
    if (digitalRead(Direction) == LOW) {  // If Direction pin LOW
    
    if (!digitalRead(Limit02)) {  // check if limit switch is activated
    digitalWrite(dir_pin, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
        digitalWrite(step_pin, HIGH);
        delay(step_speed);
        digitalWrite(step_pin, LOW);
        delay(step_speed);
    }
      else {}                       //  if limit switch is activated, stop   
  }
}
