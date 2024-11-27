#include <stdio.h>

int main(void)
{
    // Conteo numeros
    int conteo = 10;
    int n = 0;
    while (conteo > 0)
    {
        printf("Numero %d\n", conteo);
        conteo = conteo - 1;
        n = n + 1;
    }
    return 0;
}
