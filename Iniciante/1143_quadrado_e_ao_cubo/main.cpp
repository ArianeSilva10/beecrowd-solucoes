#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    for(int i = 1;i <= n; i++){
        int quadrado = i*i;
        int cubo = quadrado*i;
        cout << i << " " << quadrado << " " << cubo << endl;
    }

    return 0;
}