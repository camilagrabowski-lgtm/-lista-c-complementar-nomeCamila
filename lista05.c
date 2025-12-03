#include <stdio.h>
#include <stdlib.h>

int main() {

    float a1, a2, a3, media;

    printf("Digite a altura da primeira pessoa: ");
    scanf("%f", &a1);

    printf("Digite a altura da segunda pessoa: ");
    scanf("%f", &a2);

    printf("Digite a altura da terceira pessoa: ");
    scanf("%f", &a3);

    media = (a1 + a2 + a3) / 3;

    printf("A media das alturas e: %.2f\n", media);

    system("pause");
    return 0;
}
