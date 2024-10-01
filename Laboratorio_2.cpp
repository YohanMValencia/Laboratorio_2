#include <iostream>
#include <cstdlib> //libreria para generar numeros aleatorios
#include <ctime> //libreria para garantizar el generado de numeros aleatorios
#include <string>
#include <cmath> //libreria para hallar la potencia
#include <vector>
#include <cctype> // para las funciones islower y toupper
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

    //cout << "ingrese un valor entero \n";
    char letras[200];
    char Letras[26]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int cantidad[26] = {0};
    char a;

    int contador =0;

    srand(time(0));

    for (int i = 0; i< 200; i++){ //genera todas las letras del alfabeto y las guarda en letras
        a = 65 + (rand() % 26);
        letras[i] = a;
        cout << letras[i]<< " ";
    }

    for(int i =0; i < 26 ; i ++){ //cuenta cuanto se repite cada letra dentro de letras y los guarda en cantidad
        for(int j = 0; j < 200 ; j++){
            if(letras[j] == 'A' + i){
                contador++;
            }
        }
        cantidad[i] = contador;
        contador = 0;
    }

    cout << '\n';
    for(int i = 0; i < 26 ; i++){ // imprime cada cuanto se repitiio cada letra del alfabeto en mayuscula
        cout << Letras[i]<< ": " << cantidad[i]<< '\n';
    }
    return 0;
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

    cout << "ingrese una cadena de numeros enteros: ";

        while(true){
            bool verdadero = false;
            int Numero = 0, aux = 0;
            string cadena;
            cin >> cadena;
            vector<char> numeros(cadena.length());

            for(size_t i = 0; i < cadena.length(); i++){
                if(cadena[i] <= 57 &&  cadena[i] >= 48){ //pasa los numeros del string a numeros enteros guardados en un arreglo
                    numeros[i] = cadena[i] - '0';
                    if(i == cadena.length()-1){
                        verdadero = true;
                    }
                }
                else{
                    cout << "la cadena no es de solo numeros \n";//verifica que la cadena ingresada sea de solo numeros
                    break;
                }
            }
            if (verdadero == true){ //si la cadena es de solo numero, se genera el numero entero atravez de la formula "pocision de numeros" * 10^^longitud de cadena -1
                for(size_t i = 0; i < cadena.length(); i++){
                    aux = pow(10, cadena.length()-i-1);
                    Numero = Numero + (numeros[i]*aux); //en cada iteracion se hiran agragando valores a Numero
                }
                cout << "el numero entero es: "<< Numero<<'\n';  //finalmente se retorna el numero entero
                break;
            }
            cout << "ingrese una cadena de solo numeros: ";
        }

        return 0;
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

    string cadena;
    cout << "ingrese una cadena de caracteres que desea convertir: ";
    cin >> cadena;

    vector<char> caracteres(cadena.length());

    for(size_t i = 0; i < cadena.length(); i ++){
        if (cadena[i] >= 97 && cadena[i]<= 122){ //verifica que este en el rango de minusculas en la tabla ascii
            caracteres[i] = cadena[i]- 32; //mediante la tabla se cambian minusculas por mayusculas
        }
        else{
            caracteres[i] = cadena[i]; //si es caracter/numero cualquiera se agrega sin cambios
        }
    }
    cout << "cadena convertida:";
    for(size_t i = 0; i < cadena.length(); i ++){
        cout << caracteres[i]; //se imprime la conversion
    }
    return 0;
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

    cout << "ingrese una cadena de caracteres que desea separar Numeros/letras : ";

    string cadena;
    cin >> cadena; // permite la entrada de espacios

    int cont_le = 0;
    int cont_nu = 0;

    int j=0, k=0;

    for(size_t i = 0; i < cadena.length(); i ++){
        if ((cadena[i] <= 90 && cadena[i]>=65)){
            cont_le++; //cantidad de letras en la cadena
        }
        else if ((cadena[i] <= 122 && cadena[i]>=97)){ //verifica que este entre A-Z y a-z
            cont_le++;
        }

        else if (cadena[i] <= 57 && cadena[i]>=48){ //verifica que este entre 0-9
            cont_nu++;
        }
    }


    vector<char> letras(cont_le); // Vectores para almacenar letras y números
    vector<char> numeros(cont_nu);

    for(size_t i = 0; i < cadena.length(); i++){
        if ((cadena[i] <= 90 && cadena[i]>=65) or (cadena[i] <= 122 && cadena[i]>=97)){
            letras[j++] = cadena[i]; //se asignan letras
        }
    }

    for (size_t i = 0; i < cadena.length(); i++){
        if (cadena[i] <= 57 && cadena[i]>=48){
            numeros[k++] = cadena[i]; //se asignan numeros
        }
    }
    cout << "letras: ";
    for(int i = 0; i < cont_le; i++){ //los imprime
        cout << letras[i];
    }
    cout << '\n';
    cout << "numeros: ";
    for(int i = 0; i < cont_nu; i++){
        cout << numeros[i];
    }

    return 0;
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

int valorRomano(char c) {
    switch (c) {
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

int problema_10(){
    cout << "*** PROBLEMA 10 ***" << endl << endl;

    string numeroRomano;
    cout << "Ingrese un numero romano: ";
    cin >> numeroRomano;
    for (size_t i = 0; i < numeroRomano.length(); i++){
            numeroRomano[i] = toupper(numeroRomano[i]);
        }

    int total = 0;
    int prevValor = 0;

    // Recorre el string de derecha a izquierda
    for (int i = numeroRomano.length() - 1; i >= 0; --i) {
        int valor = valorRomano(numeroRomano[i]);
        if (valor < prevValor) {
            total -= valor;
        } else {
            total += valor;
        }
        prevValor = valor;
    }

    cout << numeroRomano << ": " << total << endl;
    return 0;
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

    int tamano, posicion=0;
    int valor, aux =0;
    while(true){
        cout << "Ingrese el tamano de la matriz cuadrada: ";
        cin >> tamano;

        if(cin.fail()){
            cout << "Error, debe ingresar un numero valido \n";
            cin.clear();
            cin.ignore(10000, '\n'); //el bloque while verifica que sea un numero
            continue;
        }
        else{
            break;
        }
    }
    bool verdadero = true;
    int sumas[(2*tamano)+1];
    int matriz[tamano][tamano];

    for(int i = 0; i < tamano; i++){
        for(int j = 0; j < tamano; j++){
            while(true){
                cout << "ingrese el valor de la posicion ["<<i+1<<","<< j+1<<"] \n";  //el bloque for sirve para asignarle el valor a cada posicion de la matriz
                cin >> valor;
                if(cin.fail()){
                    cout << "Error, debe ingresar un numero valido \n";
                    cin.clear();
                    cin.ignore(10000, '\n'); //el bloque while verifica que sea un numero
                    continue;
                }

                else{
                    matriz[i][j] = valor;
                    break;
                }
            }


        }
    }
    cout << "tu matriz cuadrada es: \n";
    for(int i = 0; i < tamano; i++){
        for(int j = 0; j < tamano; j++){ // imprime la matriz en consola
            cout << "|"<<matriz[i][j];
        }
        cout << "| \n";
    }

    for(int i = 0; i < tamano; i++){
        for(int j = 0; j < tamano; j++){ //halla las sumas de las filas
            aux = aux+ matriz[i][j];
        }
        sumas[posicion++] = aux;
        aux = 0;
    }
    for(int j = 0; j < tamano; j++){
        for(int i = 0; i < tamano; i++){ //halla la suma de las columnas
            aux = aux + matriz[i][j];
        }
        sumas[posicion++] = aux;
        aux = 0;
    }

    for(int i = 0; i < tamano; i++){ //halla la suma de la diagonal
        aux = aux + matriz[i][i];
    }
    sumas[posicion++] = aux;
    cout << "sumas de filas, columnas, diagonal principal: ";
    for(int i = 0; i < ((2*tamano)+1); i++){ //imprime todas las sumas
        cout << sumas[i]<< " ";
    }
    cout <<'\n';

    for(int i = 0; i < ((2*tamano)); i++){
        if(sumas[i] == sumas[i+1]){
            verdadero = true; //determina si es un cuadrado magico
        }
        else{
            verdadero = false;
        }
    }

    if (verdadero == true){
        cout << "La matriz es un cuadrado magico \n";
    }
    else{
        cout << "La matriz no es cuadrado magico \n";
    }
    return 0;
}

int problema_13(){
    cout << "*** PROBLEMA 13 ***" << endl << endl;

    // Dimensiones de la matriz
    const int ROWS = 6;
    const int COLS = 8;

    // Matriz que representa la imagen de la galaxia NGC 1300
    int matriz[ROWS][COLS] = {
        { 0,  3,  4,  0,  0,  0,  6,  8},
        { 5, 13,  6,  0,  0,  0,  2,  3},
        { 2,  6,  2,  7,  3,  0, 10,  0},
        { 0,  4, 15,  4,  1,  6,  0,  0},
        { 0,  7, 12,  6,  9, 10,  4,  5},
        { 0,  6, 10,  6,  4,  8,  0,  0}
    };

    int estrellas = 0; // Contador de estrellas

    // Imprimir la matriz de imagen
    cout << "Matriz de la galaxia NGC 1300:" << endl;
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            cout << matriz[i][j] << "\t"; // Imprimir con tabulación para separar los valores
        }
        cout << endl; // Salto de línea después de cada fila
    }

    cout << endl; // Espacio entre la matriz y el resultado

    // Recorrer la matriz excluyendo los bordes
    for (int i = 1; i < ROWS - 1; i++){
        for (int j = 1; j < COLS - 1; j++){
            // Promedio de la posición actual y las adyacentes
            int promedio = (
                        matriz[i][j] +          // a_i,j (centro)
                        matriz[i][j-1] +        // a_i,j-1 (izquierda)
                        matriz[i][j+1] +        // a_i,j+1 (derecha)
                        matriz[i-1][j] +        // a_i-1,j (arriba)
                        matriz[i+1][j]          // a_i+1,j (abajo)
                    ) / 5;

            // Verificar si el promedio es mayor a 6
            if (promedio > 6){
                estrellas++;
            }
        }
    }

    // Imprimir el número de estrellas encontradas
    cout << "Numero de estrellas encontradas: " << estrellas << endl;
    return 0;
}

int problema_14(){
    cout << "*** PROBLEMA 14 ***" << endl << endl;

    int n = 5, contador = 1;
    int matriz[5][5];

    for(int i = 0; i < n; i ++){
        for (int j = 0; j< n; j++){
            matriz[i][j] = contador++;
        }
    }
    cout << "la matriz original: \n";
    for(int i = 0; i < n ; i++){
        for(int j = 0; j<n; j++){
            if(matriz[i][j]<= 9){
                cout << "|0"<<matriz[i][j];
            }
            else{
                cout << "|"<<matriz[i][j];
            }
        }
        cout <<"| \n";
    }

    cout <<"matriz rotada 90 grados: \n";
    for(int j = 0; j < n ; j++){
        for(int i = (n-1); i>= 0; i--){
            if(matriz[i][j]<= 9){
                cout << "|0"<<matriz[i][j];
            }
            else{
                cout << "|"<<matriz[i][j];
            }
        }
        cout <<"| \n";
    }

    cout << "matriz rotada 180 grados: \n";
    for(int i = (n-1); i>=0 ; i--){
        for(int j = (n-1); j>= 0; j--){
            if(matriz[i][j]<= 9){
                cout << "|0"<<matriz[i][j];
            }
            else{
                cout << "|"<<matriz[i][j];
            }
        }
        cout <<"| \n";
    }
    cout << "matriz rotada 270 grados: \n";
    for(int j = 4; j>=0 ; j--){
        for(int i = 0; i<n; i++){
            if(matriz[i][j]<= 9){
                cout << "|0"<<matriz[i][j];
            }
            else{
                cout << "|"<<matriz[i][j];
            }
        }
        cout <<"| \n";
    }


    return 0;
}

int problema_15(){
    cout << "*** PROBLEMA 15 ***" << endl << endl;

    // Definir los dos rectángulos A y B
    int rectA[4], rectB[4], rectC[4]; // A y B son los rectángulos de entrada

    // Ingresar valores para el rectángulo A
    cout << "Ingrese las coordenadas del rectangulo A (x, y, ancho, alto): ";
    cin >> rectA[0] >> rectA[1] >> rectA[2] >> rectA[3]; // Ejemplo: {0, 0, 8, 4}

    // Ingresar valores para el rectángulo B
    cout << "Ingrese las coordenadas del rectangulo B (x, y, ancho, alto): ";
    cin >> rectB[0] >> rectB[1] >> rectB[2] >> rectB[3]; // Ejemplo: {5, 2, 6, 7}
    cout << endl;

    // Imprimir los rectángulos ingresados
    cout << "Rectangulo A: (" << rectA[0] << ", " << rectA[1] << ") - Ancho: " << rectA[2] << ", Alto: " << rectA[3] << endl;
    cout << "Rectangulo B: (" << rectB[0] << ", " << rectB[1] << ") - Ancho: " << rectB[2] << ", Alto: " << rectB[3] << endl << endl ;


    // Calcular las coordenadas de las esquinas inferiores derechas de los rectángulos A y B
    int x2A = rectA[0] + rectA[2];  // Esquina inferior derecha x de A
    int y2A = rectA[1] + rectA[3];  // Esquina inferior derecha y de A
    int x2B = rectB[0] + rectB[2];  // Esquina inferior derecha x de B
    int y2B = rectB[1] + rectB[3];  // Esquina inferior derecha y de B

    // Encontrar la intersección
    int x1C, y1C, x2C, y2C;

    // Cálculo de x1C (mayor valor de x de las esquinas superiores izquierdas)
    if (rectA[0] > rectB[0]) {
        x1C = rectA[0];
    } else {
        x1C = rectB[0];
    }

    // Cálculo de y1C (menor valor de y de las esquinas superiores izquierdas)
    if (rectA[1] > rectB[1]) {
        y1C = rectA[1];
    } else {
        y1C = rectB[1];
    }

    // Cálculo de x2C (menor valor de x de las esquinas inferiores derechas)
    if (x2A < x2B){
        x2C = x2A;
    }
    else{
        x2C = x2B;
    }

    // Cálculo de y2C (mayor valor de y de las esquinas inferiores derechas)
    if (y2A < y2B){
        y2C = y2A;
    }
    else{
        y2C = y2B;
    }

    // Verificar si hay intersección
    if (x1C < x2C && y1C < y2C){
        // Cálculo del rectángulo de intersección
        rectC[0] = x1C;           // Coordenada x de la esquina superior izquierda
        rectC[1] = y1C;           // Coordenada y de la esquina superior izquierda
        rectC[2] = x2C - x1C;     // Ancho
        rectC[3] = y2C - y1C;     // Alto

        // Imprimir el rectángulo de intersección
        cout << "Rectangulo de interseccion C: {";
        for (int i = 0; i < 4; i++) {
            cout << rectC[i];
            if (i < 3) cout << ", ";
        }
        cout << "}" << endl;
    }
    else {
        // Si no hay intersección
        cout << "No hay intersección entre los rectángulos." << endl;
    }
    cout << "Rectangulo de interseccion C: (" << rectC[0] << ", " << rectC[1] << ") - Ancho: " << rectC[2] << ", Alto: " << rectC[3] << endl;
    return 0;
}

int problema_16(){
    cout << "*** PROBLEMA 16 ***" << endl << endl;
}

int problema_17(){
    cout << "*** PROBLEMA 17 ***" << endl << endl;

    int limite;

    // Solicitar el número límite al usuario
    cout << "*** PROBLEMA 17 ***" << endl << endl;
    cout << "Ingrese un numero: ";
    cin >> limite;

    int sumaAmigables = 0;

    // Función interna para calcular la suma de los divisores propios y devolver la lista de divisores
    auto divisores = [](int n){
        vector<int> divisoresList;
        for (int i = 1; i <= n / 2; i++) { // Divisores propios de n son menores o iguales a n/2
            if (n % i == 0){
                divisoresList.push_back(i);
            }
        }
        return divisoresList;
    };

    // Función interna para calcular la suma de los divisores
    auto sumaDivisores = [&](int n){
        vector<int> divs = divisores(n);
        int suma = 0;
        for (int d : divs){
            suma += d;
        }
        return suma;
    };

    // Buscar números amigables menores al límite ingresado
    for (int a = 1; a < limite; a++){
        int b = sumaDivisores(a);  // Suma de los divisores propios de 'a'
        if (b != a && b < limite && sumaDivisores(b) == a && a < b) {  // Comprobar si son amigables y evitar duplicados
            sumaAmigables += a + b;   // Sumar 'a' y 'b' (amigables)

            // Imprimir los valores de a y b con sus divisores
            vector<int> divA = divisores(a);
            vector<int> divB = divisores(b);

            // Imprimir divisores de 'a'
            cout << endl << "Divisores de " << a << ": ";
            for (int d : divA) {
                cout << d << " ";
            }
            cout << "(Suma: " << sumaDivisores(a) << ")\n";

            // Imprimir divisores de 'b'
            cout << "Divisores de " << b << ": ";
            for (int d : divB) {
                cout << d << " ";
            }
            cout << "(Suma: " << sumaDivisores(b) << ")" << endl << endl;
            cout << "----------------------------------" << endl;
        }
    }

    // Imprimir el resultado final
    cout << endl << "El resultado de la suma es: " << sumaAmigables << endl;

    return 0;
}

int problema_18(){
    cout << "*** PROBLEMA 18 ***" << endl << endl;
}


