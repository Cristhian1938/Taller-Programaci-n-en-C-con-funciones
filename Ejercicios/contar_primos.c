#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int numero) {
    if (numero <= 1) return 0; // 0 y 1 no son primos
    int i = 2;
    while (i * i <= numero) {
        if (numero % i == 0) return 0; // Si el número es divisible por otro número que no sea 1 ni él mismo, no es primo
        i++;
    }
    return 1; // Si no se encontraron divisores, el número es primo
}

// Función para leer el valor de n
void leerNumero(int *num) {
    printf("Ingrese el valor de n: ");
    scanf("%d", num);
}

// Función para contar y mostrar los números primos hasta n
void contarYMostrarPrimos(int n, int *contadorPrimos) {
    printf("Los numeros primos hasta %d son:\n", n);
    for (int i = 1; i <= n; i++) {
        if (esPrimo(i)) {
            (*contadorPrimos)++; // Incrementar el contador de números primos
            printf("%d ", i); // Mostrar el número primo encontrado
        }
    }
    printf("\n"); // Imprimir una nueva línea para mejorar la legibilidad
}

int main() {
    int n, contadorPrimos = 0;
    
    // Leer el valor de n
    leerNumero(&n);

    // Contar y mostrar los números primos hasta n
    contarYMostrarPrimos(n, &contadorPrimos);

    // Mostrar la cantidad de números primos encontrados hasta el número n
    printf("Hay %d numeros primos hasta %d.\n", contadorPrimos, n);
    
    return 0;
}
