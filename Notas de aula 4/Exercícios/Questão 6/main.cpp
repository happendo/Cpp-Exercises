#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    double numeros[4];
    int i;
    for (i=0; i<3; i++) {
        cout << "Digite o " << i+1 << "º número: \n";
        cin >> numeros[i];
        if (numeros[i] > numeros[4]) {
            numeros[4] = numeros[i];
        }
    }
    cout << "O maior número é: " << numeros[4] << ".\n";
    return 0;
}
