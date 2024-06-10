#include <stdio.h>

// Función para leer el valor de n desde el usuario
int leerNumero() {
    int num;
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    return num;
}

// Función para calcular el factorial de un número
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Función para calcular y mostrar la serie factorial hasta n
void calcularYMostrarFactoriales(int n) {
    int suma = 0;
    printf("• Ejemplo: Si n = %d, suma = ", n);
    for (int i = 1; i <= n; i++) {
        int fact = factorial(i);
        suma += fact;
        if (i > 1) {
            printf(" + ");
        }
        printf("%d!", i);
    }
    printf(" = %d\n", suma);
}

int main() {
    int n = leerNumero(); // Leer el valor de n
    calcularYMostrarFactoriales(n); // Calcular y mostrar los factoriales
    return 0;
}
