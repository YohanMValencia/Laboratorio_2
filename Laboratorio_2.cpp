#include <iostream>
#include <string>
using namespace std;

int problema_1();
int problema_2();
int problema_3();
int problema_4();
int problema_5();
int problema_6();
int problema_7();
int problema_8();
int problema_9();
int problema_10();
int problema_11();
int problema_12();
int problema_13();
int problema_14();
int problema_15();
int problema_16();
int problema_17();
int problema_18();

int main() {
    cout << "|---------------------------------------|" << endl;
    cout << "|       L A B O R A T O R I O   2       |" << endl;
    cout << "|---------------------------------------|" << endl;
    cout << "|   1. Problema 1                       |" << endl;
    cout << "|   2. Problema 2                       |" << endl;
    cout << "|   3. Problema 3                       |" << endl;
    cout << "|   4. Problema 4                       |" << endl;
    cout << "|   5. Problema 5                       |" << endl;
    cout << "|   6. Problema 6                       |" << endl;
    cout << "|   7. Problema 7                       |" << endl;
    cout << "|   8. Problema 8                       |" << endl;
    cout << "|   9. Problema 9                       |" << endl;
    cout << "|  10. Problema 10                      |" << endl;
    cout << "|  11. Problema 11                      |" << endl;
    cout << "|  12. Problema 12                      |" << endl;
    cout << "|  13. Problema 13                      |" << endl;
    cout << "|  14. Problema 14                      |" << endl;
    cout << "|  15. Problema 15                      |" << endl;
    cout << "|  16. Problema 16                      |" << endl;
    cout << "|  17. Problema 17                      |" << endl;
    cout << "|  18. Problema 18                      |" << endl;
    cout << "|  0. Salir                             |" << endl;
    cout << "----------------------------------------|" << endl;


    int opcion;
    do {
        cout << endl << "Seleccione una opcion: ";
        cin >> opcion;
        switch(opcion) {
        case 1:
            cout << endl << "Ejecutando Problema 1..." << endl << endl;
            problema_1();
            cout <<'\n';
            break;
        case 2:
            cout << endl << "Ejecutando Problema 2..." << endl << endl;
            problema_2();
            cout <<'\n';
            break;
        case 3:
            cout << endl << "Ejecutando Problema 3..." << endl << endl;
            problema_3();
            cout <<'\n';
            break;
        case 4:
            cout << endl << "Ejecutando Problema 4..." << endl << endl;
            problema_4();
            cout <<'\n';
            break;
        case 5:
            cout << endl << "Ejecutando Problema 5..." << endl << endl;
            problema_5();
            cout <<'\n';
            break;
        case 6:
            cout << endl << "Ejecutando Problema 6..." << endl << endl;
            problema_6();
            cout <<'\n';
            break;
        case 7:
            cout << endl << "Ejecutando Problema 7..." << endl << endl;
            problema_7();
            cout <<'\n';
            break;
        case 8:
            cout << endl << "Ejecutando Problema 8..." << endl << endl;
            problema_8();
            cout <<'\n';
            break;
        case 9:
            cout << endl << "Ejecutando Problema 9..." << endl << endl;
            problema_9();
            cout <<'\n';
            break;
        case 10:
            cout << endl << "Ejecutando Problema 10..." << endl << endl;
            problema_10();
            cout <<'\n';
            break;
        case 11:
            cout << endl << "Ejecutando Problema 11..." << endl << endl;
            problema_11();
            cout <<'\n';
            break;
        case 12:
            cout << endl << "Ejecutando Problema 12..." << endl << endl;
            problema_12();
            cout <<'\n';
            break;
        case 13:
            cout << endl << "Ejecutando Problema 13..." << endl << endl;
            problema_13();
            cout <<'\n';
            break;
        case 14:
            cout << endl << "Ejecutando Problema 14..." << endl << endl;
            problema_14();
            cout <<'\n';
            break;
        case 15:
            cout << endl << "Ejecutando Problema 15..." << endl << endl;
            problema_15();
            cout <<'\n';
            break;
        case 16:
            cout << endl << "Ejecutando Problema 16..." << endl << endl;
            problema_16();
            cout <<'\n';
            break;
        case 17:
            cout << endl << "Ejecutando Problema 17..." << endl << endl;
            problema_17();
            cout <<'\n';
            break;
        case 18:
            cout << endl << "Ejecutando Problema 18..." << endl << endl;
            problema_18();
            cout <<'\n';
            break;
        case 0:
            cout << endl << "Saliendo..." << endl << endl;
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo."<< endl << endl;
        }
    }
    while(opcion != 0);
    return 0;
}


int problema_1(){
    cout << "*** PROBLEMA 1 ***" << endl << endl;

    const int NUM_DENOMINACIONES = 10;
    int denominaciones[NUM_DENOMINACIONES] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidad[NUM_DENOMINACIONES] = {0};                                 // Inicializa todas las cantidades a 0
    int valor;

    while (true){
        cout << "Ingrese un valor para descomponerlo: ";
        cin >> valor;

        // Verifica si la entrada es un numero
        if (cin.fail()){
            cout << "Error: Debe ingresar un numero valido." << endl;       // Si hubo un error en la entrada, mostrar un mensaje
            cin.clear();                                                    // Limpia el estado de error
            cin.ignore(10000, '\n');                                        // Ignora hasta 10000 caracteres o hasta nueva línea
            continue;   // Vuelve a solicitar la entrada
        }
        else{
            break;  // Si la entrada es valida, salimos del bucle
        }
    }

    // Verificar si el numero ingresado es valido
    if (valor >= 0){
        for (int i = 0; i < NUM_DENOMINACIONES; i++){                       // Reinicia las cantidades para evitar errores en la impresión
            cantidad[i] = 0;
        }

        // Si el valor es mayor que 0, procede a la descomposición
        if (valor > 0){
            for (int i = 0; i < NUM_DENOMINACIONES; i++){
                cantidad[i] = valor / denominaciones[i];                    // Calcula cuantas veces cabe la denominación en el valor actual
                valor -= cantidad[i] * denominaciones[i];                   // Reduce el valor por la cantidad de la denominación multiplicada por su valor
            }

            // Imprime los resultados
            for (int i = 0; i < NUM_DENOMINACIONES; i++){
                cout << denominaciones[i] << ": " << cantidad[i] << '\n';
            }
            cout << "Faltante: " << valor << '\n';
        }
        else{
            cout << "El valor ingresado debe ser mayor que 0." << endl;
        }
    }
    else{
        cout << "Por favor, ingrese un numero valido." << endl;
    }
    return 0;
}

int problema_2(){
    cout << "*** PROBLEMA 2 ***" << endl << endl;
}

int problema_3(){
    cout << "*** PROBLEMA 3 ***" << endl << endl;

    const int MAX = 50;
    char cadena1[MAX], cadena2[MAX];
    cin.ignore();

    // Se Solicita al usuario ingresar la primera cadena
    cout << "Ingresa la primera cadena: ";
    cin.getline(cadena1, MAX);

    // Se Solicita al usuario ingresar la segunda cadena
    cout << "Ingresa la segunda cadena: ";
    cin.getline(cadena2, MAX);

    int i = 0, j = 0;       // Se inician contadores para verificar la longitud de ambas cadenas

    // Contamos la longitud de la primera cadena
    while (cadena1[i] != 0){
        i++;
    }

    // Contamos la longitud de la segunda cadena
    while (cadena2[j] != 0){
        j++;
    }

    // Si las longitudes son iguales, las cadenas son iguales
    if (i == j){
        cout << endl << "Las cadenas \"" << cadena1 << "\" y \"" << cadena2 << "\" son iguales." << endl;
        return 0;
    }
    else{
        cout << endl << "Las cadenas \"" << cadena1 << "\" y \"" << cadena2 << "\" son diferentes." << endl;
    }
    return 0;
}

int problema_4(){
    cout << "*** PROBLEMA 4 ***" << endl << endl;
}

int problema_5(){
    cout << "*** PROBLEMA 5 ***" << endl << endl;

    int numero;
    char cadena[50]; // Buffer lo suficientemente grande para almacenar la cadena resultante

    while (true){
        cout << "Ingrese un numero entero: ";                               // Solicitar al usuario que ingrese un número
        cin >> numero;

        // Verifica si la entrada es un numero
        if (cin.fail()){
            cout << "Error: Debe ingresar un numero valido." << endl;       // Si hubo un error en la entrada, mostrar un mensaje
            cin.clear();                                                    // Limpia el estado de error
            cin.ignore(10000, '\n');                                        // Ignora hasta 10000 caracteres o hasta nueva línea
            continue;   // Vuelve a solicitar la entrada
        }
        else{
            break;  // Si la entrada es valida, salimos del bucle
        }
    }

    // Guardamos el valor original del número
    int original = numero;

    // Implementación para convertir numero entero a cadena
    int temp = numero;
    int count = 0;

    // Si el número es 0, manejamos ese caso especial
    if (numero == 0){
        cadena[0] = '0';
        cadena[1] = '\0'; // Terminador de cadena
    }
    else{
        while (temp != 0){      // Contamos cuántos dígitos tiene el número
            count++;
            temp /= 10;
        }

        // Añadir el terminador de cadena
        cadena[count] = '\0';

        // Convertimos cada dígito a carácter desde el final
        while (numero != 0){
            cadena[count - 1] = (numero % 10) + '0'; // Convierte el último dígito a carácter
            numero /= 10;
            count--;
        }
    }

    // Mostramos la cadena resultante
    cout << "El numero ingresado es: " << original << ", la cadena de retorno es: \"" << cadena << "\"" << endl;

    return 0;
}

int problema_6(){
    cout << "*** PROBLEMA 6 ***" << endl << endl;
}

int problema_7(){
    cout << "*** PROBLEMA 7 ***" << endl << endl;

    char original[100];             // Buffer para la cadena original
    char resultado[100];            // Buffer para la cadena sin caracteres repetidos

    cin.ignore();                   // Ignorar el salto de línea pendiente si lo hay

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(original, 100);     // Leer la línea completa

    bool encontrado[256] = {false}; // Para marcar si un carácter ya fue encontrado
    int j = 0; // Índice para la cadena de resultado

    // Iteramos sobre cada carácter de la cadena original
    for (int i = 0; original[i] != '\0'; i++) { // Utilizamos '\0' para terminar la cadena
        char c = original[i];

        // Solo añadimos el carácter si no ha sido encontrado antes
        if (!encontrado[static_cast<unsigned char>(c)]){            // Convertir c a unsigned char
            encontrado[static_cast<unsigned char>(c)] = true;       // Marcamos el carácter como encontrado
            resultado[j++] = c;                                     // Agregamos el carácter a la cadena de resultado
        }
    }

    resultado[j] = '\0'; // Añadimos el terminador de cadena

    // Mostramos los resultados
    cout << endl << "Original: " << original << endl << endl;
    cout << "Sin repetidos: " << resultado << endl;

    return 0;
}

int problema_8(){
    cout << "*** PROBLEMA 8 ***" << endl << endl;
}

int problema_9(){
    cout << "*** PROBLEMA 9 ***" << endl << endl;

    int n;
    string cadena;

    cout << "Ingrese el valor de n (numero de cifras): ";
    cin >> n;
    cout << endl << "Ingrese la cadena de caracteres numericos: ";
    cin >> cadena;

    // Determinar cuántos caracteres hay en la cadena
    int longitud = cadena.length();

    // Asegurarse de que se pueda dividir en números de n cifras
    int cerosAdicionales = (n - (longitud % n)) % n; // Calcula los ceros adicionales necesarios para el primer número

    // Sumar los números formados
    int suma = 0;

    // Crear un string para almacenar el primer grupo con ceros a la izquierda si es necesario
    string primerNumero = string(cerosAdicionales, '0') + cadena.substr(0, longitud % n);
    suma += stoi(primerNumero); // Convertir a entero y sumar

    // Mostrar el primer número
    cout << endl << "Numeros a sumar: " << primerNumero;

    // Procesar el resto de la cadena en grupos de n
    for (int i = longitud % n; i < longitud; i += n){
        string numero = cadena.substr(i, n); // Extraer el grupo de n cifras
        suma += stoi(numero); // Convertir a entero y sumar
        cout << " + " << numero; // Mostrar los números que se suman
    }

    // Mostrar los resultados
    cout << " = " << suma << endl << endl; // Muestra la suma total
    cout << "Original: " << cadena << endl << endl;
    cout << "Suma: " << suma << endl;

    return 0;
}

int problema_10(){
    cout << "*** PROBLEMA 10 ***" << endl << endl;
}

int problema_11(){
    cout << "*** PROBLEMA 11 ***" << endl << endl;

    const int FILAS = 15;
    const int ASIENTOS = 20;
    char sala[FILAS][ASIENTOS];  // Matriz para representar la sala de cine

    // Inicializamos la sala con todos los asientos disponibles
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < ASIENTOS; j++){
            sala[i][j] = '-'; // '-' representa un asiento disponible
        }
    }

    int opcion;
    // Mostrar el menú de opciones
    do{
        cout << endl << "--- Menu de Reservas ---" << endl << endl;
        cout << "1. Mostrar sala" << endl;
        cout << "2. Reservar asiento" << endl;
        cout << "3. Cancelar reserva" << endl;
        cout << "4. Salir" << endl << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (cin.fail()){        // Verifica si hubo un error en la entrada
            cout << endl << "Opcion invalida, intente de nuevo." << endl;
            cin.clear();        // Limpia el estado de error
            cin.ignore(10000, '\n'); // Ignora hasta 10000 caracteres o hasta nueva línea
            continue; // Vuelve a solicitar la entrada
        }

        // Mostrar la sala de cine
        if (opcion == 1){
            cout << endl << "   ";
            for (int i = 1; i <= ASIENTOS; i++){
                if (i < 10) cout << i << "  ";    // Mostrar número de asiento (alineado)
                else cout << i << " ";            // Mostrar número de asiento > 9
            }
            cout << endl;

            // Mostrar la letra de la fila
            for (int i = 0; i < FILAS; i++){
                cout << (char)('A' + i) << "  ";
                for (int j = 0; j < ASIENTOS; j++) {
                    cout << sala[i][j] << "  ";   // Mostrar el estado de cada asiento
                }
                cout << endl;
            }
        }

        // Realizar reservas
        else if (opcion == 2){
            char fila;
            int asiento;
            cout << endl << "Ingrese la fila (A-O): ";
            cin >> fila;
            fila = toupper(fila); // Convertir la fila ingresada a mayúscula
            if (fila < 'A' || fila > 'O'){      // Verificamos si la fila ingresada es válida (de 'A' a 'O')
                cout << endl << "ERROR, Fila invalida. Debe ingresar una letra entre A y O" << endl;
                continue;
            }
            cout << endl << "Ingrese el numero del asiento (1-20): ";
            cin >> asiento;
            if (asiento < 1 || asiento > 20){      // Verificamos si la silla ingresada es valida (de 1 a 20)
                cout << endl << "ERROR, asiento invalido. Debe ingresar un valor entre 1 y 20" << endl;
                continue;
            }


            int filaIdx = fila - 'A';  // Convertir la letra a un índice (A=0, B=1, ...)
            int asientoIdx = asiento - 1;  // Convertir el número de asiento a índice (1=0, 2=1, ...)

            if (sala[filaIdx][asientoIdx] == '+'){
                cout << endl << "El asiento se encuentra reservado." << endl;
            }
            else{
                sala[filaIdx][asientoIdx] = '+';
                cout << endl << "Reserva realizada exitosamente." << endl;
            }
        }

        // Cancelar una reserva
        else if (opcion == 3){
            char fila;
            int asiento;
            cout << endl << "Ingrese la fila (A-O): ";
            cin >> fila;
            fila = toupper(fila); // Convertir la fila ingresada a mayúscula
            if (fila < 'A' || fila > 'O') {      // Verificamos si la fila ingresada es válida (de 'A' a 'O')
                cout << endl << "ERROR, Fila invalida. Debe ingresar una letra entre A y O.\n";
                continue;
            }
            cout << endl << "Ingrese el numero del asiento (1-20): ";
            cin >> asiento;
            if (asiento < 1 || asiento > 20) {      // Verificamos si la silla ingresada es válida (de 1 a 20)
                cout << endl << "ERROR, asiento invalido. Debe ingresar un valor entre 1 y 20" << endl;
                continue;
            }

            int filaIdx = fila - 'A';
            int asientoIdx = asiento - 1;

            if (sala[filaIdx][asientoIdx] == '-'){
                cout << endl << "El asiento ya esta disponible." << endl;
            }
            else{
                sala[filaIdx][asientoIdx] = '-';
                cout << endl << "Reserva cancelada exitosamente." << endl;
            }
        }

        else if (opcion == 4){
            cout << "Saliendo..." << endl;
        }
        else{
            cout  << endl << "Opcion invalida, intente de nuevo." << endl;
        }
    }
    while (opcion != 4);
    return 0;
}

int problema_12(){
    cout << "*** PROBLEMA 12 ***" << endl << endl;
}

int problema_13(){
    cout << "*** PROBLEMA 13 ***" << endl << endl;
}

int problema_14(){
    cout << "*** PROBLEMA 14 ***" << endl << endl;
}

int problema_15(){
    cout << "*** PROBLEMA 15 ***" << endl << endl;
}

int problema_16(){
    cout << "*** PROBLEMA 16 ***" << endl << endl;
}

int problema_17(){
    cout << "*** PROBLEMA 17 ***" << endl << endl;
}

int problema_18(){
    cout << "*** PROBLEMA 18 ***" << endl << endl;
}


