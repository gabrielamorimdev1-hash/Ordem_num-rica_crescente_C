#include <stdio.h>

int main()
{
    int ordem[5], i, ordemTemp, passagem;

    for (int numeros = 0; numeros < 5; numeros++)
    {
        printf("Digite o %dº número: ", numeros + 1);
        scanf("%d", &ordem[numeros]);
    }

    for(passagem = 0; passagem < 4; passagem++){
        for (i = 0; i < 4; i++)
        {
            if (ordem[i] > ordem[i + 1])
            {
                ordemTemp = ordem[i];
                ordem[i] = ordem[i + 1];
                ordem[i + 1] = ordemTemp;
            }
        }

        printf("\nPassagem %d: %d %d %d %d %d\n", passagem + 1, ordem[0], ordem[1], ordem[2], ordem[3], ordem[4]);

    }
    return 0;
}