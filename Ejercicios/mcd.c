#include <stdio.h>

// Declaración de funciones
void leerNumeros(int *a, int *b);
int calcularMCD(int a, int b);

int main() {
    int a, b; // Declaración de variables para los números ingresados por el usuario
    // Solicitar al usuario que ingrese dos números
    printf("Ingrese dos numeros: ");
    leerNumeros(&a, &b); // Llamada a la función para leer los números
    // Calcular el MCD utilizando el algoritmo de Euclides
    int mcd = calcularMCD(a, b);
    // Mostrar el resultado del MCD
    printf("El MCD de los numeros ingresados es %d\n", mcd);

    return 0;
}

// Definición de la función para leer los números
void leerNumeros(int *a, int *b) {
    scanf("%d %d", a, b); // Leer la entrada del usuario y almacenarla en las variables 'a' y 'b'
}

// Definición de la función para calcular el MCD utilizando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    int temporal; // Declaración de variable temporal
    while (b != 0) { // Bucle while para aplicar el algoritmo de Euclides
        temporal = b; // Almacenar el valor de 'b' en una variable temporal
        b = a % b; // Actualizar 'b' con el residuo de la división entre 'a' y 'b'
        a = temporal; // Actualizar 'a' con el valor almacenado en la variable temporal
    }
    
    return a; // Retornar el resultado del MCD
}
