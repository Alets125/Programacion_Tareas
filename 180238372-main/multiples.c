#include <stdio.h>
#include <cs50.h>

int main(void) {
    int num;

    // El usuario ingresa un numero entre 1 y 15
    do {
        num = get_int("Dame un Número para multiplicar (entre 1 y 15): ");
    } while (num < 1 || num > 15); // Se repite si el numero no está en el rango indicado

    printf("Tabla del Número %i:\n", num);
    for (int i = 0; i < 10; i++) {
        // Imprimimos la tabla de multiplicar
        printf("%i x %i = %i\n", num, i + 1, num * (i + 1));
    }
}
