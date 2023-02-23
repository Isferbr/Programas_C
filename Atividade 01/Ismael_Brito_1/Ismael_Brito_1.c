#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    c = a + b;

    printf("A soma é: %d", c);

    return 0;
}
