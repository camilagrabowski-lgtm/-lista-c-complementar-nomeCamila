#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, i, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Valor invalido! Digite um numero maior que zero.\n");
    } else {
        for (i = 1; i <= N; i++) {
            soma += i;
        }

        printf("A soma dos numeros de 1 ate %d eh: %d\n", N, soma);
    }

    system("pause");
    return 0;
}
