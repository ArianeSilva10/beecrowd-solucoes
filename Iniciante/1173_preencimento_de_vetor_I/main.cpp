#include <iostream>
using namespace std;

int main(){
    const int size = 10;
    int v, n[size];
    cin >> v;
    n[0] = v;

    for (int i = 1; i < size; i++)
    {
        n[i] = n[i - 1] * 2;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
    

}