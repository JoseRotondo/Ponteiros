#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ajuste23(float *, float *);

int main()
{
    setlocale(LC_ALL, "");
    float preco = 0.0, ajustpreco;

    do
    {
        printf("Insira o preço atual (0 para sair): \n");
        scanf("%f", &preco);

        if (preco != 0.0)
        {
            ajuste23(&preco, &ajustpreco);
            printf("O preço novo é: %.2f\n", preco);
            printf("O aumento foi de: %.2f\n", ajustpreco);
        }

    } while (preco != 0.0);

    system("PAUSE");
    return 0;
}

// Reajusta  preço em vinte por cento
void ajuste23(float *preco, float *ajustpreco)
{
    *ajustpreco = *preco * 0.2;
    *preco *= 1.2;
}
