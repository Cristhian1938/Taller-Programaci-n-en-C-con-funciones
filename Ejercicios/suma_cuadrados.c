#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
int sumaCuadradosPrimerosN(int n);

int main() {
    int n; // Declaración de variable para el valor de n
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    leerNumero(&n); // Llamada a la función para leer el número
    // Calcular la suma de los cuadrados de los primeros n números
    int suma = sumaCuadradosPrimerosN(n);
    // Mostrar la suma de los cuadrados de los primeros n números
    printf("La suma de los cuadrados de los primeros %d números es: %d\n", n, suma);
    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular la suma de los cuadrados de los primeros n números
int sumaCuadradosPrimerosN(int n) {
    int suma = 0; // Inicializar la suma total en 0
    int i = 1; // Inicializar el contador en 1
    while (i <= n) { // Bucle while que se ejecuta hasta n
        suma += i * i; // Sumar el cuadrado del número actual a la suma total
        i++; // Incrementar el contador para avanzar al siguiente número
    }
    return suma; // Retornar la suma total de los cuadrados
}
