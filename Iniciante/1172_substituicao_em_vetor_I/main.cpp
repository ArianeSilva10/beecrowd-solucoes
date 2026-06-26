#include <iostream>
using namespace std;

int main(){
    const int n = 10;
    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] <= 0) x[i] = 1;
        
        cout << "X[" << i << "] = " << x[i] << endl;
    }
    
    
}