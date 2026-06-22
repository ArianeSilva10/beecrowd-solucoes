#include <stdio.h>


int main(){
    int n, count = 1, potencia = 1;
    scanf("%d", &n);

    while (count <= n)
    {
        if (count % 2 == 0)
        {
            potencia = count * count;
            printf("%d^2 = %d\n", count, potencia);
            count++;
        }
        else{
            count++;
        }
    }
    
}