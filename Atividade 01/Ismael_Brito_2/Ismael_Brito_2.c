#include <stdio.h>

int main(void)
{
    float m, c;

    printf("Digite o valor em metros: ");
    scanf("%f", &m);

    c = m * 1000;

    printf("O valor em milímetro é: %.1f", c);

    return 0;
}
