#include <stdio.h>

int main()
{
    float d, t, v;

    printf("Digite a distância a percorrer de carro em (km): ");
    scanf("%d", &d);
    printf("Digite a velocidade média do carro em (km/h): ");
    scanf("%d", &v);

    t = d/v;

    printf("O tempo de viagem será de: %.2f horas", t);

    return 0;
}
