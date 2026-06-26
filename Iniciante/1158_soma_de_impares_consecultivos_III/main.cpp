#include <iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int soma = 0, count = 0;
        cin >> x >> y;
        int value = x;
        while (count < y)
        {
            if (value % 2 != 0)
            {
                soma += value;
                count++;
            }
            
            value++;
        }
        
        cout << soma << endl;
    }
    
}