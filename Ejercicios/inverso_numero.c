#include <stdio.h> // Incluir la biblioteca estándar de entrada/salida

// Declaración de funciones
int leerNumero();
int invertirNumero(int num);

int main() {
    int numwhile; // Variable para el número
    int inverwhile; // Variable para el inverso
    // Solicita un número al usuario
    printf("Inverso de un numero con bucle While\n");
    numwhile = leerNumero(); // Llamada a la función para leer el número
    // Llamada a la función para invertir el número
    inverwhile = invertirNumero(numwhile);
    // Mostrar el número invertido
    printf("El inverso del numero es: %d\n", inverwhile);

    return 0;
}

// Definición de la función para leer el número
int leerNumero() {
    int num;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    return num;
}

// Definición de la función para invertir el número
int invertirNumero(int num) {
    int inverso = 0;
    while (num > 0) { // Condición
        // Multiplicar inverso por 10 y sumar el último dígito de num
        inverso = (inverso * 10) + num % 10;
        // Eliminar el último dígito de num
        num /= 10; // Actualización
    }
    return inverso;
}
