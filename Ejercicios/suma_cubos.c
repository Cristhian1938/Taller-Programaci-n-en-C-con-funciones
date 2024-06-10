#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
int sumaCubosPrimerosN(int n);

int main() {
    int n; // Declaración de variable para el valor de n

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    leerNumero(&n); // Llamada a la función para leer el número

    // Calcular la suma de los cubos de los primeros n números y mostrar la serie
    printf("La serie de numeros cúbicos hasta %d es: ", n);
    int suma = sumaCubosPrimerosN(n);

    // Mostrar la suma de los cubos de los primeros n números
    printf("\nLa suma de los cubos de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular la suma de los cubos de los primeros n números
int sumaCubosPrimerosN(int n) {
    int suma = 0; // Inicializar la suma total en 0
    int i = 1; // Inicializar el contador en 1
    while (i <= n) { // Bucle while que se ejecuta hasta n
        if (i > 1) {
            printf(" + "); // Agregar el signo más entre los términos de la serie
        }
        printf("%d^3", i); // Mostrar el término actual de la serie
        suma += i * i * i; // Agregar el cubo del número actual a la suma total
        i++; // Incrementar el contador
    }
    return suma; // Retornar la suma total de los cubos
}
