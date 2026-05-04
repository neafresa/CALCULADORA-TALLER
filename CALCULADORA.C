#include <stdio.h>
#include <math.h>  

int main() {
    int a, b, i;
    // datos
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese elsegundo numero: ");
    scanf("%d", &b);
    // Operaciones básicas
    printf("\n--- RESULTADOS ---\n");
    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicacion: %d\n", a * b);
    // División 
    if (b != 0) {
        printf("Division: %.2f\n", (float)a / b);
        printf("Cociente (entero): %d\n", a / b);
    } else {
        printf("No se puede dividir entre 0\n");
    }
    // Potencia
    printf("Potencia (a^b): %.2f\n", pow(a, b));
    // Comparación
    if (a > b) {
        printf("%d es mayor que %d\n", a, b);
    } else if (a < b) {
        printf("%d es menor que %d\n", a, b);
    } else {
        printf("%d es igual a %d\n", a, b);
    }
    // Imprimir rango
    printf("\nNumeros entre %d y %d:\n", a, b);
    if (a <= b) {
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}