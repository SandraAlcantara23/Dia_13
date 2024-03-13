#include <stdio.h>

int main() {
    int n, a = 0, b = 1, siguiente;
    
    printf("Ingrese el número de términos de la secuencia de Fibonacci: ");
    scanf("%d", &n);
    
    printf("Secuencia de Fibonacci usando while:\n");
    while (n > 0) {
        printf("%d ", a);
        siguiente = a + b;
        a = b;
        b = siguiente;
        n--;
    }
    printf("\n");
    
    return 0;
}
