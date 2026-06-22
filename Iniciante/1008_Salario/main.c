#include <stdio.h>

int main(){
    int funcionario,horas;
    double valor, salario;
    scanf("%d%d%lf", &funcionario,&horas,&valor);

    salario = horas*valor;
    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2lf\n", salario);
}