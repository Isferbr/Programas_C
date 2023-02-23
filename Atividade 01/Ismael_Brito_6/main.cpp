#include <stdio.h>

int main(void)
{
    float c, f;

    printf("Digite a temperatura em (Celsius): ");
    scanf("%f", &c);

    f = (9*c+160)/5;

    printf("A temperatura em Fahrenheit é: %.2f", f);

    return 0;
}
