#include <stdio.h>

// Declaración de funciones
void leerNumero(int *num);
int contarDigitos(int num);

int main() {
    int numero; // Declaración de variable para el número ingresado por el usuario
    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    leerNumero(&numero); // Llamada a la función para leer el número
    // Contar los dígitos del número
    int contador = contarDigitos(numero);
    // Mostrar el número de dígitos del número ingresado
    printf("El numero %d tiene %d digitos\n", numero, contador);
    return 0;
}

// Definición de la función para leer el número
void leerNumero(int *num) {
    scanf("%d", num); // Leer la entrada del usuario y almacenarla en la variable 'num'
}

// Definición de la función para contar los dígitos del número
int contarDigitos(int num) {
    int contador = 0; // Inicializar el contador de dígitos en 0
    while (num != 0) { // Bucle while para contar los dígitos del número
        contador++; // Incrementar el contador en cada iteración
        num /= 10; // Dividir el número por 10 para eliminar el último dígito
    }
    return contador; // Retornar el número de dígitos
}
