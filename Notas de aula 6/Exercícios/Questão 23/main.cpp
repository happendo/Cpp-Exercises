#include <iostream>
int main()
{
    using namespace std;
    int i,vetorA[5],vetorB[5], subtrac[3];
    for (i=0; i<5; i++) {
        cout << "Digite o " << i+1 << "º valor do vetor A:";
        cin >> vetorA[i];
        cout << "Digite o " << i+1 << "º valor do vetor B:";
        cin >> vetorB[i];
    }
    subtrac[0] = vetorA[0] - vetorB[4];
    subtrac[1] = vetorA[1] - vetorB[3];
    subtrac[2] = subtrac[0]+subtrac[1];
    cout << "A segunda subtração é igual a: " << subtrac[0] << ".\n";
    cout << "A segunda subtração é igual a: " << subtrac[1] << ".\n";
    cout << "O valor acumulado é igual a: " << subtrac[0]+subtrac[1] << ".\n";
    return 0;
}