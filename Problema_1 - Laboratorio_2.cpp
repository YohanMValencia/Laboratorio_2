const int NUM_DENOMINACIONES = 10;
long denominaciones[NUM_DENOMINACIONES] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
long cantidad[NUM_DENOMINACIONES] = {0}; // Inicializa todas las cantidades a 0
long valor;

void setup(){
  Serial.begin(9600); // Inicia la comunicación serial
  Serial.println("*****************************");
  Serial.println();
  Serial.println("Descomposicion de Valores");
}

void loop(){
  
  // Solicita al usuario que ingrese un valor
  Serial.println();
  Serial.println("Ingrese un valor para descomponer:");
    
  // Espera a que haya datos disponibles en el Monitor Serial
  while (Serial.available() == 0){
    // Espera activamente la entrada del usuario
  }
  
  // Lee la cadena de texto ingresada desde el monitor serial
  String input = Serial.readStringUntil('\n');
  input.trim(); // Elimina espacios en blanco al inicio y final
  
  // Verifica si la entrada contiene solo dígitos
  bool esValido = true;
  for (int i = 0; i < input.length(); i++){
    if (!isDigit(input[i])){
      esValido = false;
      break;
    }
  }
  
  if (esValido){
    valor = input.toInt();
    Serial.println();
    Serial.print("Valor ingresado: ");
    Serial.println(valor);
    
    if (valor >= 0){
      for (int i = 0; i < NUM_DENOMINACIONES; i++){
        cantidad[i] = 0;
      }
      if (valor > 0){
        long originalValor = valor;
        for (int i = 0; i < NUM_DENOMINACIONES; i++){
          cantidad[i] = valor / denominaciones[i];
          valor -= cantidad[i] * denominaciones[i];
        }
        Serial.println();
        Serial.println("Resultados de descomposicion:");
        for (int i = 0; i < NUM_DENOMINACIONES; i++){
          Serial.print(denominaciones[i]);
          Serial.print(": ");
          Serial.println(cantidad[i]);
        }
        Serial.println();
        Serial.print("Faltante: ");
        Serial.println(valor);
        Serial.println();
        Serial.println("*****************************");
        
        valor = originalValor;
      }
      else{
        Serial.println();
        Serial.println("El valor ingresado debe ser mayor que 0.");
        Serial.println();
        Serial.println("*****************************");
      }
    }
    else{
      Serial.println();
      Serial.println("Por favor, ingrese un numero valido.");
      Serial.println();
      Serial.println("*****************************");
    }
  }
  else{
    Serial.println();
    Serial.println("Error: Ingrese solo numeros.");
    Serial.println();
    Serial.println("*****************************");
  }
  while (Serial.available() > 0){
    Serial.read();
  }
  delay(1000);
}