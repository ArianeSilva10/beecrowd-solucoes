#include <stdio.h>

int main(){
    double a, b, peso1, peso2, media;
    scanf("%lf%lf", &a, &b);
    peso1 = a * 3.5;
    peso2 = b*7.5;

    media = (peso1+peso2)/11;
    printf("MEDIA = %.5lf\n", media);
}