#include <stdio.h>
#include <stdlib.h>

int main() {
    float p1, p2;

    printf("Digite o peso da primeira pessoa: ");
    scanf("%f", &p1);

    printf("Digite o peso da segunda pessoa: ");
    scanf("%f", &p2);

    if (p1 > p2) {
        printf("A primeira pessoa eh mais pesada.\n");
    } else if (p2 > p1) {
        printf("A segunda pessoa eh mais pesada.\n");
    } else {
        printf("Os dois pesos sao iguais.\n");
    }

    system("pause");
    return 0;
}
