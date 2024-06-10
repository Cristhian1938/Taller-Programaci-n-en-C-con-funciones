#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
void calcularSumaCubos(int n, int *suma);
void mostrarSerieCubica(int n);

int main() {
    int n, suma = 0;
    // Solicitar al usuario que ingrese el valor de n
    leerNumero(&n);
    // Calcular la suma de los cubos hasta el término n y mostrar la serie
    mostrarSerieCubica(n);
    calcularSumaCubos(n, &suma);
    // Mostrar la suma de los cubos de los primeros n números
    printf("\nLa suma de los cubos de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    printf("Ingrese el valor de n: ");
    scanf("%d", num);
}

// Definición de la función para calcular la suma de los cubos hasta el término n
void calcularSumaCubos(int n, int *suma) {
    for (int i = 1; i <= n; i++) {
        *suma += i * i * i; // Sumar el cubo del número actual a la suma total
    }
}

// Definición de la función para mostrar la serie de números cúbicos
void mostrarSerieCubica(int n) {
    printf("La serie de numeros cúbicos hasta %d es: ", n);
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" + "); // Agregar el signo más entre los términos de la serie
        }
        printf("%d^3", i); // Mostrar el término actual de la serie
    }
}
