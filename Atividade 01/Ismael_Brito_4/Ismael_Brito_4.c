#include <stdio.h>

int main(void)
{
    float d, m, p, v;

    printf("Digite o preço da mercadoria em (reais): ");
    scanf("%f", &m);
    printf("Digite o percentual de desconto em (%): ");
    scanf("%f", &p);

    d = m*p/100;
    v = m - d;

    printf("O valor do desconto é %.2f \n", d);
    printf("Digite o preço da mercadoria: %.2f", v);

    return 0;
}
