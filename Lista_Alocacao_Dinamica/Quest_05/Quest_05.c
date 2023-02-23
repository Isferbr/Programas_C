#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 34, j;
    int *p; // declara um ponteiro para um inteiro
    p = &i; // um ponteiro para uma variável do tipo inteiro
    printf("O valor da variável i é: %d\n", i);
    *p++;
    j = *p + 33;
    printf("O valor de p é: %p\n", *p);
    printf("Agora, j vale: %d\n", j);
}
