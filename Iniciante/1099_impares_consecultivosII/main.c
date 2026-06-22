#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *vec, x, y, soma = 0;
    scanf("%d", &n);

    vec = (int *) malloc(n* sizeof(int));

    for (int i = 0; i < n; i++)
    {
        soma = 0;
        scanf("%d%d", &x,&y);
        if ((x+1) == y || x == y || (x-1) == y)
        {
            vec[i] = 0;
        }else{
            if (x > y)
            {
                for (int j = y+1; j < x; j++)
                {
                    if(j % 2 != 0) soma += j;
                }
                vec[i] = soma;
            }else
            {
                for (int j = x+1; j < y; j++)
                {
                    if(j % 2 != 0) soma += j;
                }
                vec[i] = soma;
            }
               
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vec[i]);
    }
    
    
}