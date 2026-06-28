#include <iostream>
using namespace std;

int main(){
    const int size = 1000;
    int t, n[size];
    cin >> t;

    for (int i = 0; i < size; i++)
    {
        n[i] = i % t;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
    
}