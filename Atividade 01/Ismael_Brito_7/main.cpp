#include <stdio.h>

int main(void)
{
    float c, p;
    int d;

    printf("Digite a quantidade percorrida de carro em (km): ");
    scanf("%f", &c);
    printf("Digite a quantidade de dias com o carro: ");
    scanf("%d", &d);

    p = d*60+c*0.15;

    printf("O preço a pagar será de %.2f \n", p);

    return 0;
}
