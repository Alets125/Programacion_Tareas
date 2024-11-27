#include <stdio.h>

int main(void)
{
    // Primera fila - Cielo con nubes y bandera en el centro
    for (int i = 0; i < 40; i++) printf(" ");
    printf("***");               // Nube izquierda
    for (int i = 0; i < 2; i++) printf(" ");
    printf(" |!> ");               // Bandera (Eso creo xd)
    for (int i = 0; i < 3; i++) printf(" ");
    printf("**");                // Nube derecha
    for (int i = 0; i < 14; i++) printf(" ");
    printf("\n");

    // Segunda fila hasta la cuarta  - Asta de la bandera y un cielo vacío para que se vea mas alta (Aunque no estoy seguro que se vea bonito)
    for (int row = 0; row < 3; row++)
    {
        for (int i = 0; i < 46; i++) printf(" ");
        printf("|\n");
    }

    // quinta fila - Bloques de acción, algunos bloques normales y OTRA asta para alinear
    for (int i = 0; i < 7; i++) printf(" ");
    for (int j = 0; j < 3; j++) printf("|?|");
    for (int i = 0; i < 12; i++) printf(" ");
    printf(" #");
    for (int i = 0; i < 16; i++) printf(" ");
    for (int k = 0; k < 1; k++) printf("|");
    for (int i = 0; i < 16; i++) printf(" ");
    printf("\n");

    // sexta fila - Bloques y plataforma
    for (int i = 0; i < 22; i++) printf(" ");
    printf("     ");
    for (int j = 0; j < 3; j++) printf("#");
    printf("                ");
    for (int k = 0; k < 1; k++) printf("|");
    printf("\n");

    // septimo - Plataforma y tubos
    for (int i = 0; i < 5; i++) printf(" ");
    for (int j = 0; j < 3; j++) printf("#");
    for (int i = 0; i < 2; i++) printf(" ");
    printf("  |o|      ");
    printf("   ######");
    for (int i = 0; i < 16; i++) printf(" ");
    for (int k = 0; k < 1; k++) printf("|");
    printf("\n");

    // octavo - Piso y tubos, con asta de bandera
    for (int i = 0; i < 4; i++) printf(" ");
    printf("  |     | |      #########");
    for (int i = 0; i < 16; i++) printf(" ");
    for (int k = 0; k < 1; k++) printf("|");
    printf("\n");

    // noveno - Piso
    for (int i = 0; i < 64; i++) printf("=");
    printf("\n");

    return 0;
}
