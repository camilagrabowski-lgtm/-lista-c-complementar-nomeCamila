#include <stdio.h>
#include <stdlib.h>

int main() {

    float raio, comprimento;
    const float PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    printf("O comprimento da circunferencia e: %.2f\n", comprimento);

    system("pause");
    return 0;
}
