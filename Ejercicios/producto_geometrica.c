#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
int calcularProductoSerie(int num);

int main() {
    int n; // Declaración de variable para el número de términos

    // Solicitamos al usuario el número de términos
    printf("Ingresa el numero de terminos: ");
    leerNumero(&n); // Llamada a la función para leer el número

    // Calculamos el producto de la serie
    int producto = calcularProductoSerie(n);

    // Imprimimos el resultado
    printf("El producto de la serie es: %d\n", producto);
    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para calcular el producto de la serie
int calcularProductoSerie(int num) {
    int producto = 1; // Inicializamos el producto como 1 para que no afecte a la multiplicación
    for (int i = 1; i <= num; i++) { // Bucle for que se ejecuta desde 1 hasta 'num'
        producto *= 2; // Multiplicamos el producto por 2 en cada iteración
    }
    return producto; // Retornamos el resultado del producto
}
