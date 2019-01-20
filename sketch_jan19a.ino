#define enA 9
#define in1 4
#define in2 5
#define enB 10
#define in3 6
#define in4 7
#include <IRremote.h>

// A is left wheel and B is right wheel
int PIN_RECV =11;
IRrecv irrecv(PIN_RECV);
decode_results results;
int motorSpeedA = 0;
int motorSpeedB = 20;

int number=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}


void loop() {

      Serial.println("forward");
      // Set Motor A backward
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      // Set Motor B backward
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      //move_bk_left();
      analogWrite(enA, 100); // Send PWM signal to motor A
      analogWrite(enB, 100); // Send PWM signal to motor B

//  // put your main code here, to run repeatedly:
//  if (irrecv.decode(&results)){
////    Serial.println(results.value,);
//    String str_val = String(results.value, HEX);
//   if (str_val == "ff18e7") {  //btm 2
//      Serial.println("forward");
//       forwards();
//    }
//
//    else if (str_val == "ff10ef") { //btm 4
//      Serial.println("left");
//      //move_left()
//      turnleft();  
//    }
//    else if (str_val == "ff5aa5") { //btm 6
//      Serial.println("right");
//      //move_right()
//      turnright();
//    }
//
//   else if (str_val == "ff4ab5") {  //btm 8
//      Serial.println("backward");
//      backwards();
//    }
//    irrecv.resume();
//  }
}

void turnleft(void){
      analogWrite(enA,0); // Send PWM signal to motor A
      analogWrite(enB,100 ); // Send PWM signal to motor B

  }


void turnright(void){
      analogWrite(enA,100); // Send PWM signal to motor A
      analogWrite(enB,0 ); // Send PWM signal to motor B

  }
  void backwards(void){
      Serial.println("backward");
      // Set Motor A backward
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      // Set Motor B backward
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      //move_bk_left();
      analogWrite(enA, 100); // Send PWM signal to motor A
      analogWrite(enB, 100); // Send PWM signal to motor B

  }
void forwards(){
      
      Serial.println("forward");
      // Set Motor A backward
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      // Set Motor B backward
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      //move_bk_left();
      analogWrite(enA, 100); // Send PWM signal to motor A
      analogWrite(enB, 100); // Send PWM signal to motor B

  }

  

















  //    if (str_val == "ff30cf") {     //btm 1
//      Serial.println("fd_left"); 
//
//      if(number++<5){
//      turnleft();
//      
//      }
//      else{
//        turnbackward();
//        }
//    } 

//    else if (str_val == "ff7a85"){ //btm 3
//      Serial.println("fd_right");
//      forward();
//      //move_fd_right()
//      
//      }
//    else if (str_val == "ff52ad") { //btm 9
//      Serial.println("bk_right");
//      //move_bk_right();
//      
//    } 

//   else if (str_val == "ff42bd") { //btm 7
//      Serial.println("bk_left");
//     if(number++<5){
//      turnleft();
//      
//      }
//      
//   else{
//        turnbackward();
//        }
//
//      //move_bk_left();
//      
//    }
    
