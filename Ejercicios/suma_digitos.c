#include <stdio.h> // Biblioteca estándar de entrada/salida

// Declaraciones de funciones
int leerNumero(); // Función para leer el número del usuario
int sumarDigitos(int numero); // Función para sumar los dígitos de un número

int main() { // Inicio del programa
    int numero; // Variable para el número
    int suma; // Variable para almacenar la suma de los dígitos
    // Solicita un número al usuario
    printf("Suma de los digitos de un numero con For\n");
    numero = leerNumero(); // Llamada a la función para leer el número
    // Llamada a la función para sumar dígitos
    suma = sumarDigitos(numero);
    // Imprime resultado
    printf("La suma de los digitos es: %d\n", suma);
    return 0; 
}

// Definición de la función para leer el número
int leerNumero() {
    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    return numero;
}

// Definición de la función para sumar los dígitos de un número
int sumarDigitos(int numero) {
    int suma; 
    // Bucle para sumar dígitos
    for(suma = 0; numero > 0; numero /= 10) { // Condición; Actualización
        suma += numero % 10; // Suma dígito
    }
    return suma;
}
