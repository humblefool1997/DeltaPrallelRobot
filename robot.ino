//***********************************************************************************//
//
// The code is below for parallel delta robot with three 3 servo motors configuration //
//  written in using C and servo lib in arduino                                      //
//																					//
//																					//	
//                                                                                  //
//                                                                                  //
//																					//		
//																					//
=====================================================================================

#include <Servo.h>
Servo one;
Servo two;
Servo three;
int pot1=0;
int pot2=1;
int pot3=2;
void setup() 
{
  one.attach(3); 
  two.attach(6);
  three.attach(5);
 }

void loop() 
{
  int val1=analogRead(pot1);           
  Serial.println("Saif");
  Serial.print(val1);
  
  int val2=analogRead(pot2);
  int val3=analogRead(pot3);
  val1 = map(val1, 0, 1023, 0, 180); 
  val2 = map(val2, 0, 1023, 0, 180); 
  val3 = map(val3, 0, 1023, 0, 180); 
  one.write(val1);
  two.write(val2);
  three.write(val3);                  
  delay(10);                           
}

========================================================================================================