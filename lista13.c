#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, n3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("O maior valor é: %d\n", n1);
    } 
    else if (n2 >= n1 && n2 >= n3) {
        printf("O maior valor é: %d\n", n2);
    } 
    else {
        printf("O maior valor é: %d\n", n3);
    }

    system("pause");
    return 0;
}
