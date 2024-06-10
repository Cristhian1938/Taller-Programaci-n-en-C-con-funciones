#include <stdio.h> // Incluir la biblioteca estándar de entrada/salida

// Declaración de funciones
void leerNumero(int *num);
int calcularRaizCubica(int num);
void imprimirResultado(int num, int rawhile);

int main() {
    int num, rawhile; // Declaración de variables para el número y su raíz cúbica
    // Solicitar al usuario que ingrese un número para calcular su raíz cúbica exacta
    printf("Ingrese un numero para calcular su raiz cubica exacta:\n");
    leerNumero(&num); // Llamar a la función para leer el número
    rawhile = calcularRaizCubica(num); // Calcular la raíz cúbica
    // Mostrar el resultado
    imprimirResultado(num, rawhile);
    return 0; 
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular la raíz cúbica
int calcularRaizCubica(int num) {
    int rawhile = 0; // Inicializacion de la suposición de la raíz cúbica a 0
    while (rawhile * rawhile * rawhile < num) { // Condición
        rawhile++; // Incrementar 'rawhile' para encontrar la raíz cúbica // Actualización
    }
    return rawhile;
}

// Definición de la función para imprimir el resultado
void imprimirResultado(int num, int rawhile) {
    // Verificar si el cubo de 'rawhile' es igual a 'num'
    if (rawhile * rawhile * rawhile == num) { 
        // Si es verdadero, 'rawhile' es la raíz cúbica exacta de 'num'
        printf("La raiz cubica exacta es: %d\n", rawhile);
    } else {
        // Si no, 'num' no tiene una raíz cúbica exacta
        printf("El numero %d no tiene una raiz cubica exacta.\n", num);
    }
}
