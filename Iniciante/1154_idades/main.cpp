#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int idade = 0, contador = 0;
    double soma = 0.0;

    while (true)
    {
        cin >> idade;
        if (idade < 0)
        {
            break;
        }
        contador++;
        soma += idade;
    }
    
    
    double media = soma / contador;

    cout << fixed << setprecision(2) << media << endl;
    
}