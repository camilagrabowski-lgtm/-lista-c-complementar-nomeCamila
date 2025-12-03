#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nTabuada de subtracao do %d:\n", n);

    for (i = 0; i <= 10; i++) {
        printf("%d - %d = %d\n", n, i, n - i);
    }

    printf("\n");
    system("pause");
    return 0;
}
