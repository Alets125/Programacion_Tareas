#include <stdio.h>

int main(void) {
    int num1, num2;

    // Solicitamos los números al usuario
    printf("Ingresa el primer número hasta donde multiplique: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo número que hará las multiplicaciones: ");
    scanf("%d", &num2);

    // Imprimimos la tabla de multiplicar
    for (int contador = 1; contador <= num1; contador++) {
        int resultado = contador * num2;
        printf("%d x %d = %d\n", contador, num2, resultado);
    }
}
