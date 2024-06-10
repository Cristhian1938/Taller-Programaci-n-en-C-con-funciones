#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
int calcularFactorial(int num);

int main() {
    int num; // Declaración de variable para el número ingresado por el usuario

    // Solicitar al usuario que ingrese un número para calcular su factorial
    printf("Ingrese un numero para calcular su factorial: ");
    leerNumero(&num); // Llamar a la función para leer el número

    // Calcular el factorial
    int factorial = calcularFactorial(num);

    // Imprimir el resultado del factorial
    printf("El factorial de %d es: %d\n", num, factorial);

    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular el factorial
int calcularFactorial(int num) {
    int factorial = 1; // Inicializar el cálculo del factorial en 1
    for (int i = 1; i <= num; i++) { // Bucle for que se ejecuta desde 1 hasta 'num'
        factorial *= i; // Multiplicar el factorial por 'i' en cada iteración para obtener el producto acumulado
    }
    return factorial; // Retornar el resultado del factorial
}
