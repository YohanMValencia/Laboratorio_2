// C++ code
//
void setup()
{
 
  Serial.begin(9600);
}

void loop()
{
 Serial.println("ingrese una cadena: ");
 while(Serial.available() == 0){} //no hara nada hasta que se ingrese algo por el monitor Serial
 String cadena = Serial.readString();
  
 char caracteres[cadena.length()];
  for(int i = 0; i < cadena.length(); i++){
    if(cadena[i] >= 97 && cadena[i] <= 122){
    	caracteres[i] = cadena[i] -32;
    }
    else{
    	caracteres[i] = cadena[i];
    }
  }
 Serial.print("original:");
 Serial.println(cadena);
 Serial.print("Mayuscula:");
  for(int i = 0; i < cadena.length(); i++){
  	Serial.print(caracteres[i]);
  }
  Serial.println('\n');
  
 delay(1000);
}