#include <stdio.h>
#include <stdlib.h>

int main() {

    float horas, minutos;

    printf("Digite a quantidade de horas: ");
    scanf("%f", &horas);

    minutos = horas * 60;

    printf("O tempo em minutos é: %.2f\n", minutos);

    system("pause");
    return 0;
}
