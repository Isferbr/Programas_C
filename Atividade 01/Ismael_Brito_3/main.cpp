#include <stdio.h>

int main(void)
{
    int d, h, m, s, t;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &d);
    printf("Digite a quantidade de horas: ");
    scanf("%d", &h);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &m);
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &s);

    t = (d*86400)+(h*3600)+(m*60)+s;

    printf("O tempo em segundos: %d", t);

    return 0;
}
