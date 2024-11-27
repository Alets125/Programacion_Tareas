#include <stdio.h>

// funcion para verificar si el numero es par
int esPar(int num) {
    return num % 2 == 0;
}

// funcion para ver si es impar
int esImpar(int num) {
    return num % 2 != 0;
}

// esta funcion me permite leer los numeros ingresados por el usuario de tipo entero y me permite sumarlos tanto enteros como impares
void imprimirNumeros(int inicio, int fin, int tipo) {
    int suma = 0;
    if (tipo == 0) {
        printf("Números pares en el rango [%d, %d]:\n", inicio, fin); // Se guardan dentro de una lista para poder almacenarlos temporalmente
        for (int i = inicio; i <= fin; i++) {
            if (esPar(i)) {
                printf("%d ", i);
                suma += i;
            }
        }
        printf("\nSuma de los números pares: %d\n", suma);
    } else {
        printf("Números impares en el rango [%d, %d]:\n", inicio, fin);
        for (int i = inicio; i <= fin; i++) {
            if (esImpar(i)) {
                printf("%d ", i);
                suma += i;
            }
        }
        printf("\nSuma de los números impares: %d\n", suma);
    }
}

int main() {
    int inicio, fin;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        // Con este pedimos el numero inicial
        printf("Ingrese el número de inicio: ");
        scanf("%d", &inicio);

        // Numero final o segundo numero
        printf("Ingrese el número de fin: ");
        scanf("%d", &fin);

        // Verificamos que el segundo o numero final no sea menor al numero inicial
        while (inicio > fin) {
            printf("Rango inválido. El valor inicial debe ser menor o igual al valor final. Intente nuevamente.\n");
            printf("Ingrese el número de inicio: ");
            scanf("%d", &inicio);
            printf("Ingrese el número de fin: ");
            scanf("%d", &fin);
        }

        // Elegimos estas opciones
        printf("Elija una opción:\n");
        printf("1. Mostrar números pares y calcular su suma.\n");
        printf("2. Mostrar números impares y calcular su suma.\n");
        printf("3. Mostrar números pares e impares y sus respectivas sumas.\n");

        int opcion;
        scanf("%d", &opcion);

        // Ejecutar la opción seleccionada y si el usuario ingresa un numero distinto, le mostramos un error
        if (opcion == 1) {
            imprimirNumeros(inicio, fin, 0);
        } else if (opcion == 2) {
            imprimirNumeros(inicio, fin, 1);
        } else if (opcion == 3) {
            imprimirNumeros(inicio, fin, 0);
            imprimirNumeros(inicio, fin, 1);
        } else {
            printf("Opción inválida. Intente nuevamente.\n");
        }

        // Preguntar si desea continuar
        printf("¿Desea realizar otra operación?\nEscribe S ó N: ");
        scanf(" %c", &continuar);
    }

}
