// C++
void setup() {
  Serial.begin(9600);
}

int ValorRomano(char c) {
  switch(c) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
  }
}

void loop() {
  Serial.println("Ingrese un numero romano: ");
  while (Serial.available() == 0) {} // Espera hasta que se ingrese algo por el monitor Serial
  String NumRomano = Serial.readString();
  for (size_t i = 0; i < NumRomano.length(); i++){ //si se ingresa el numero en minuscula
            NumRomano[i] = toupper(NumRomano[i]); // convierte a mayuscula
        }
  int total = 0;
  int preValor = 0;
  bool esValido = true; 

  for (int i = NumRomano.length() - 1; i >= 0; i--) { //recorre la cadena de derecha a izquierda 
    int valor = ValorRomano(NumRomano[i]);
    if (valor != 0) { //verifica que el numero romano si exista 
      if (valor < preValor) { //condiciones de la suma de los numeros romanos 
        total -= valor;
      } else {
        total += valor;
      }
      preValor = valor;
    } else {
      Serial.print(NumRomano);
      Serial.print(": ");
      Serial.println("Error. Numero ingresado no valido.");
      esValido = false;
      break;
    }
  }

  if (esValido) { //al final se muesta en el monitor el resultado de la conversion 
    Serial.print(NumRomano);
    Serial.print(": ");
    Serial.println(total);
  }

  delay(1000);
}
