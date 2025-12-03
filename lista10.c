#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso1, peso2;

    printf("Digite o peso da primeira pessoa: ");
    scanf("%f", &peso1);

    printf("Digite o peso da segunda pessoa: ");
    scanf("%f", &peso2);

    if (peso1 > peso2) {
        printf("A primeira pessoa eh mais pesada.\n");
    } 
    else if (peso2 > peso1) {
        printf("A segunda pessoa eh mais pesada.\n");
    } 
    else {
        printf("Os pesos sao iguais.\n");
    }

    system("pause");
    return 0;
}
