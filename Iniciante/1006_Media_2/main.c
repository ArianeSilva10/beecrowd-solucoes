#include <stdio.h>

int main(){
    double a,b,c, media, peso_a, peso_b, peso_c;
    scanf("%lf%lf%lf", &a,&b,&c);
    peso_a = a*2;
    peso_b = b*3;
    peso_c = c*5;

    media = (peso_a+peso_b+peso_c)/10;
    printf("MEDIA = %.1lf\n", media);
}