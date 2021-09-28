void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT);   
}
   
void morseDot() {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);                      
  }

void morseDash() {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(2000);                       
  digitalWrite(LED_BUILTIN, LOW);     
  delay(2000);                       
  }



void loop() {
 // Contains teh code for blinking LED

    // M 
    morseDash();
    morseDash();
    delay(500); 
  
    //A  
    morseDot();
    morseDash();
    delay(500);  



    // I
    morseDot();
    morseDot();
    delay(500);  


// * V 
    morseDot();
    morseDot();
    morseDot();
    morseDash();
    delay(500);  
delay(457836);
            
}
