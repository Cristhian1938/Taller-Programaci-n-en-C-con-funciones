#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
void mostrarSerieYSuma(int n, double *suma);

int main() {
    int n; // Declaración de variable para el valor de n
    double suma = 0.0; // Inicialización de la suma
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    leerNumero(&n); // Llamada a la función para leer el número
    // Calcular la suma de la serie hasta el término n y mostrar la serie
    mostrarSerieYSuma(n, &suma);
    // Mostrar la suma de la serie con precisión de 6 decimales
    printf(" = %.6f\n", suma);
    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular la suma de la serie hasta el término n y mostrar la serie
void mostrarSerieYSuma(int n, double *suma) {
    int i = 1; // Inicializar el contador en 1
    printf("• Ejemplo: Si n = %d, suma = ", n); // Mostrar el encabezado de la serie
    while (i <= n) { // Bucle while que se ejecuta hasta n
        *suma += 1.0 / i; // Agregar el término actual a la suma total
        if (i > 1) {
            printf(" + "); // Agregar el signo más entre los términos de la serie
        }
        printf("1/%d", i); // Mostrar el término actual de la serie
        i++; // Incrementar el contador
    }
}
