#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int size = 12;
    char O;

    cin >> O;

    double matriz[size][size], media = 0.0, soma = 0.0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 7; i < size; i++)
    {
        for (int j = 12 - i; j <= i-1; j++)
        {
            soma += matriz[i][j];
        }
    }

    if (O == 'S')
    {
        cout << fixed << setprecision(1) << soma << endl;
    }
    else
    {
        media = soma / 40.0;
        cout << fixed << setprecision(1) << media << endl;
    }
}