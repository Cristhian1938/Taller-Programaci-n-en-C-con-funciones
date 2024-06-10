#include <stdio.h> // Incluir la biblioteca estándar de entrada/salida

// Declaración de funciones
void leerBaseYExponente(int *base, int *exponente);
int calcularPotencia(int base, int exponente);

int main() {
    int base, exponente; // Declarar variables para la base y el exponente
    int resultado; // Variable para almacenar el resultado
    // Solicitar al usuario la base y el exponente
    printf("Potencia mediante sumas sucesivas\n");
    leerBaseYExponente(&base, &exponente); // Llamar a la función para leer los valores
    // Calcular la potencia utilizando la base y el exponente
    resultado = calcularPotencia(base, exponente);
    // Mostrar el resultado
    printf("El resultado de %d elevado a la %d es: %d\n", base, exponente, resultado);
    return 0;
}

// Definición de la función para leer la base y el exponente
void leerBaseYExponente(int *base, int *exponente) {
    printf("Ingrese la base: ");
    scanf("%d", base); // Leer la base de la entrada estándar
    printf("Ingrese el exponente: ");
    scanf("%d", exponente); // Leer el exponente de la entrada estándar
}

// Definición de la función para calcular la potencia
int calcularPotencia(int base, int exponente) {
    int resultado = 1; // Inicializar el resultado a 1
    for (int i = 0; i < exponente; i++) { // Bucle for que se repite tantas veces como el valor del exponente
        resultado *= base; // Multiplicar el resultado por la base en cada iteración
    }
    return resultado; // Retornar el resultado
}
