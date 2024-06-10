#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
void imprimirFibonacci(int num);

int main() {
    int num; // Declaración de variable para el número de elementos de la serie de Fibonacci

    // Solicitar al usuario que ingrese el número de elementos de la serie de Fibonacci a mostrar
    printf("Ingrese el numero de elementos de la serie de Fibonacci a mostrar: ");
    leerNumero(&num); // Llamar a la función para leer el número

    // Imprimir la serie de Fibonacci
    printf("Serie de Fibonacci:\n");
    imprimirFibonacci(num);

    return 0; 
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para imprimir la serie de Fibonacci
void imprimirFibonacci(int num) {
    int a = 0, b = 1, c; // Inicializar variables para la secuencia de Fibonacci

    for (int i = 0; i < num; i++) { // Bucle for para generar la serie de Fibonacci
        printf("%d, ", a); // Imprimir el valor actual de 'a', que es parte de la serie de Fibonacci
        c = a + b; // Calcular el siguiente valor de la serie sumando los dos últimos números
        a = b; // Actualizar el valor de 'a' al siguiente número en la serie
        b = c; // Actualizar el valor de 'b' al nuevo valor calculado
    }
    printf("\n");
}
