#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
int sumaParesHasta(int n);

int main() {
    int n; // Declaración de variable para el valor de n
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    leerNumero(&n); // Llamada a la función para leer el número
    // Calcular la suma de los números pares hasta n
    int suma = sumaParesHasta(n);
    // Mostrar la suma de los números pares hasta n
    printf("La suma de los numeros pares hasta %d es %d\n", n, suma);
    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular la suma de los números pares hasta n
int sumaParesHasta(int n) {
    int suma = 0; // Inicializar la suma total en 0
    int i = 2; // Inicializar el contador en 2 para seleccionar el primer número par
    while (i <= n) { // Bucle while que se ejecuta hasta n
        suma += i; // Sumar el número par a la suma total
        i += 2; // Incrementar i en 2 para seleccionar el siguiente número par
    }
    return suma; // Retornar la suma total de los números pares
}
