#include <stdio.h>

int main()
{
    int ordem[10], i, ordemTemp, passagem;

    for (int numeros = 0; numeros < 10; numeros++)
    {
        printf("Digite o %dº número: ", numeros + 1);
        scanf("%d", &ordem[numeros]);
       
    }
     printf("\nnumeros %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, \n", ordem[0], ordem[1], ordem[2], ordem[3], ordem[4], ordem[5], ordem[6], ordem[7],  ordem[8], ordem[9]);

    for(passagem = 0; passagem < 9; passagem++){
        for (i = 0; i < 9 - passagem; i++)
        {
            if (ordem[i] > ordem[i + 1])
            {
                ordemTemp = ordem[i];
                ordem[i] = ordem[i + 1];
                ordem[i + 1] = ordemTemp;
            }
        }

            printf("\nPassagem %d: %d %d %d %d %d %d %d %d %d %d\n", passagem + 1, ordem[0], ordem[1], ordem[2], ordem[3], ordem[4], ordem[5], ordem[6], ordem[7], ordem[8], ordem[9]);

    }
    return 0;
}