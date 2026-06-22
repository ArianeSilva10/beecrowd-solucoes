#include <stdio.h>
int main(){
    int n, x, y;
    scanf("%d", &n);
    float res = 0.0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&x,&y);
        if(y == 0) printf("divisao impossivel\n");
        else {
            res = x / (float)y;
            printf("%.1f\n", res);
        }
    }
    
}