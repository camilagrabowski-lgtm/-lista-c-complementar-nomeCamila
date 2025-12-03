#include <stdio.h>
#include <stdlib.h>

int main() {

    float valor, novoValor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    novoValor = valor + (valor * 0.15);

    printf("O valor com acréscimo de 15%% eh: %.2f\n", novoValor);

    system("pause");
    return 0;
}
