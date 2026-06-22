#include <iostream>
using namespace std;

int main(){
    int n, fatorial = 1;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        fatorial *= i;
    }
    cout << fatorial << endl;
    
}