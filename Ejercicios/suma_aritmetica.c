#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
int calcularSumaSerie(int num);

int main() {
    int n; // Declaración de variable para el número de términos
    // Solicitar al usuario que ingrese el número de términos 'n' para calcular la suma de la serie aritmética
    printf("Ingrese el numero de terminos n para calcular la suma de la serie aritmetica: ");
    leerNumero(&n); // Llamar a la función para leer el número
    // Calcular la suma de la serie aritmética
    int sum = calcularSumaSerie(n);
    // Imprimir el resultado de la suma de los primeros 'n' términos de una serie aritmética
    printf("La suma de los primeros %d terminos de una serie aritmetica es: %d\n", n, sum);
    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular la suma de la serie aritmética
int calcularSumaSerie(int num) {
    int sum = 0; // Inicializar la suma total en 0
    for (int i = 1; i <= num; i++) { // Bucle for que se ejecuta desde 1 hasta 'num'
        sum += i; // Sumar el contador 'i' a la suma total en cada iteración
    }
    return sum; // Retornar el resultado de la suma
}
