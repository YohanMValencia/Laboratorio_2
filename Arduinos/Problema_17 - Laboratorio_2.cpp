#define MAX_DIVISORES 100

void setup() {
    Serial.begin(9600);
}

void loop() {
    int limite = 0;

    // Solicitar el número límite al usuario
    Serial.println("*** PROBLEMA 17 ***");
    Serial.print("Ingrese un numero: ");
    
    while (Serial.available() == 0) {} // Espera hasta que se ingrese un número
    limite = Serial.parseInt(); // Lee el número ingresado
    Serial.println(limite);

    int sumaAmigables = 0;

    // Función interna para calcular la suma de los divisores propios y devolver la lista de divisores
    auto divisores = [](int n, int divisoresList[]) {
        int count = 0;
        for (int i = 1; i <= n / 2; i++) { // Divisores propios de n son menores o iguales a n/2
            if (n % i == 0) {
                divisoresList[count++] = i; // Agrega divisor a la lista
            }
        }
        return count; // Retorna la cantidad de divisores encontrados
    };

    // Función interna para calcular la suma de los divisores
    auto sumaDivisores = [&](int n) {
        int divs[MAX_DIVISORES];
        int count = divisores(n, divs);
        int suma = 0;
        for (int i = 0; i < count; i++) {
            suma += divs[i];
        }
        return suma;
    };

    // Buscar números amigables menores al límite ingresado
    for (int a = 1; a < limite; a++) {
        int b = sumaDivisores(a);  // Suma de los divisores propios de 'a'
        if (b != a && b < limite && sumaDivisores(b) == a && a < b) {  // Comprobar si son amigables y evitar duplicados
            sumaAmigables += a + b;   // Sumar 'a' y 'b' (amigables)

            // Imprimir los valores de a y b con sus divisores
            int divA[MAX_DIVISORES], countA = divisores(a, divA);
            Serial.print("Divisores de ");
            Serial.print(a);
            Serial.print(": ");
            for (int i = 0; i < countA; i++) {
                Serial.print(divA[i]);
                Serial.print(" ");
            }
            Serial.print("(Suma: ");
            Serial.print(sumaDivisores(a));
            Serial.println(")");

            // Imprimir divisores de 'b'
            int divB[MAX_DIVISORES], countB = divisores(b, divB);
            Serial.print("Divisores de ");
            Serial.print(b);
            Serial.print(": ");
            for (int i = 0; i < countB; i++) {
                Serial.print(divB[i]);
                Serial.print(" ");
            }
            Serial.print("(Suma: ");
            Serial.print(sumaDivisores(b));
            Serial.println(")");

            Serial.println("----------------------------------");
        }
    }

    // Imprimir el resultado final
    Serial.print("El resultado de la suma es: ");
    Serial.println(sumaAmigables);
    
    // Esperar 2 segundos y volver a pedir un número
    delay(2000);
}