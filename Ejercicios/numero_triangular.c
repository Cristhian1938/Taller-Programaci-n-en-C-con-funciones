#include <stdio.h>

// Función para leer el valor de n desde el usuario
int leerNumero() {
    int num;
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    return num;
}

// Función para calcular y mostrar la serie de números triangulares hasta n
void calcularYMostrarTriangulares(int n) {
    int numeroTriangular = 0;
    int i = 1; // Inicializar el contador
    
    // Mostrar la serie de números triangulares
    printf("La serie de numeros triangulares hasta %d es: ", n);
    while (i <= n) {
        numeroTriangular += i; // Sumar el número actual al número triangular
        printf("%d", i); // Mostrar el número actual
        if (i < n) {
            printf(" + "); // Agregar el signo más entre los números
        }
        i++; // Incrementar el contador
    }
    printf(" = %d\n", numeroTriangular); // Mostrar el resultado total
}

int main() {
    int n = leerNumero(); // Leer el valor de n
    calcularYMostrarTriangulares(n); // Calcular y mostrar los números triangulares

    return 0;
}
