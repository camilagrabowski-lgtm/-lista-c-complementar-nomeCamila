#include <stdio.h>
#include <stdlib.h>

int quadrado(int n) {
    return n * n;
}

int main() {

    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = quadrado(numero);

    printf("O quadrado de %d eh: %d\n", numero, resultado);

    system("pause");
    return 0;
}
