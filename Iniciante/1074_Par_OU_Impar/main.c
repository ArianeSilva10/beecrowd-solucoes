#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *v;
    scanf("%d", &n);

    v = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            if (v[i] % 2 ==0)
            {
                printf("EVEN POSITIVE\n");
            }else
            {
                printf("ODD POSITIVE\n");
            }
        }else if (v[i] < 0)
        {
            if (v[i] % 2 ==0)
            {
                printf("EVEN NEGATIVE\n");
            }else
            {
                printf("ODD NEGATIVE\n");
            }
        }else
        {
            printf("NULL\n");
        }    
    }
}