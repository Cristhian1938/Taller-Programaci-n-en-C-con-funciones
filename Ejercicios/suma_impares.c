#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
int sumaImparesHasta(int n);

int main() {
    int n; // Declaración de variable para el valor de n
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    leerNumero(&n); // Llamada a la función para leer el número
    // Calcular la suma de los números impares hasta n
    int suma = sumaImparesHasta(n);
    // Mostrar la suma de los números impares hasta n
    printf("La suma de los números impares hasta %d es %d\n", n, suma);
    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular la suma de los números impares hasta n
int sumaImparesHasta(int n) {
    int suma = 0; // Inicializar la suma total en 0
    int i = 1; // Inicializar el contador en 1
    while (i <= n) { // Bucle while que se ejecuta hasta n
        if (i % 2 != 0) { // Verificar si el número es impar
            suma += i; // Sumar el número impar a la suma total
        }
        i++; // Incrementar el contador para avanzar al siguiente número
    }
    return suma; // Retornar la suma total de los números impares
}
