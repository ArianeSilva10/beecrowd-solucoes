#include <stdio.h>

int main(){
    int vector[100], maior = 0, posicao = 1;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &vector[i]);
    }

    maior = vector[0];
    for (int i = 1; i < 100; i++)
    {
        if (maior < vector[i])
        {
            maior = vector[i];
            posicao = i + 1;
        } 
    }
    printf("%d\n%d\n", maior, posicao);
}