#include <stdio.h>

int main(void)
{
    int a, c, d;
    float t;

    printf("Digite a quantidade de cigarros por dia: ");
    scanf("%d", &c);
    printf("Digite a quantidade de anos fumando: ");
    scanf("%d", &a);

    d = 365*a;
    t = c*d*10;
    t = t/60/24;

    printf("O total em dias é: %.1f", t);

    return 0;
}
