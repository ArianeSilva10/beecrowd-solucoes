#include <stdio.h>
int main(){
    int senha = 2002, testes;

    do
    {
        scanf("%d", &testes);
        if (testes == senha) printf("Acesso Permitido\n");
        else printf("Senha Invalida\n");
    } while (senha != testes);
    
}