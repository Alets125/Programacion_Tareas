#include <stdio.h>
#include <string.h>


int main() {
    char nombre[50];
    printf("¿Cuál es tu nombre? ");
    scanf("%49s", nombre);

    char saludo[100] = "Hola, ";
    strcat(saludo, nombre);
    strcat(saludo, "Espero que tengas un buen dia!");

    printf("%s\n", saludo);

    return 0;
}
