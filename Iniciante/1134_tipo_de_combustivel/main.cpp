#include <iostream>
using namespace std;
 
int main() {
 
    int combustivel;
    int gasolina = 0, diesel = 0, alcool = 0;
    
    do{
        cin >> combustivel;
        switch(combustivel){
            case 1: alcool++; break;
            case 2: gasolina++; break;
            case 3: diesel++; break;
        }
    }while(combustivel != 4);
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
 
    return 0;
}