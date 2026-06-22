#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int *v;
    v =(double *)malloc(n  * sizeof(double));

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }
    
}