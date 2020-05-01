/*
 * PROGRAM FOR SINE WAVE.
 * DEVELOPER- AKASH
 * DATE -13/01/2020
 * COMPANY -ENVISION LAB
 * VERSION - 2.1
 */
float b=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 

}

void loop() {
  // put your main code here, to run repeatedly:
     for(float i=0;i<3.14159*2;i=i+0.0174553)
     {
      b=sin(i);
       Serial.println(b*5);
     }
   
}
