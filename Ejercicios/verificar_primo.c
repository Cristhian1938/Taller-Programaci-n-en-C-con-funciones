#include <stdio.h>

int main() {
    int numero, i = 2;
    int esPrimo = 1; // 1 representa verdadero, 0 falso
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    // Comprobar si el número es menor o igual a 1
    if (numero <= 1) {
        esPrimo = 0; // 0 y 1 no son primos
    } else {
        // Bucle while para verificar si el número es primo
        while (i <= numero / 2 && esPrimo) {
            if (numero % i == 0) {
                esPrimo = 0; // Si el número es divisible, no es primo
            }
            i++; // Incrementar el contador para probar el siguiente divisor
        }
    }
    
    // Mostrar el resultado según el valor de esPrimo
    if (esPrimo) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }
    
    return 0;
}