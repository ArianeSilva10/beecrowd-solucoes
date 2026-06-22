#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, count_in = 0, count_out = 0;
    scanf("%d", &n);
    int *x;

    // alocacao dinamica
    // calcula o numero de bytes multiplicando
    // usa malloc para reservar essa quantidade de memória
    // converte o ponteiro void para int
    x = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] >= 10 && x[i] <= 20)
        {
            count_in++;
        }else{
            count_out++;
        }
    }
    
    printf("%d in\n", count_in);
    printf("%d out\n", count_out);

    // libera espaço
    free(x);

    return 0;
}