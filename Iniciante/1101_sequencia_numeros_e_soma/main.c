#include <stdio.h>
int main(){
    int m, n, soma;

    
    while (1)
    {
        scanf("%d%d", &m, &n);
        if (m <= 0 || n <= 0)
        {
            break;
        }
        
        soma = 0;
        if (m > n) {
            for (int i = n; i <= m; i++)
            {
                printf("%d ", i);
                soma += i;
            }
        } else{
            for (int i = m; i <= n; i++)
            {
                printf("%d ", i);
                soma += i;
            }
            
        }
        printf("Sum=%d\n", soma);
    }
    
}