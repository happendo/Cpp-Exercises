#include <iostream>

int main()
{
    using namespace std;
    double numeros[1];
    int escolha;
    cout << "Escolha entre 1,2,3,4.\n";
    cin >> escolha;
    cout << "Escolha o primeiro número:\n";
    cin >> numeros[0];
    cout << "Escolha o segundo número:\n";
    cin >> numeros[1];
    if (escolha == 1) {
        (numeros[0]+numeros[1])/2;
    } else if (escolha == 2){
        if (numeros[0] > numeros[1]){
            cout << "Seu resultado é de: " << numeros[0]-numeros[1] << ".\n";
        } else {
            cout << "Seu resultado é de: " << numeros[1]-numeros[0] << ".\n";
        }
    } else if (escolha == 3) {
        cout << "Seu resultado é de: " << numeros[0]*numeros[1] << ".\n";
    } else if (escolha == 4) {
        if (numeros[1] == 0) {
            cout << "Por favor, escolha um número diferente de 0 para ser seu segundo número.";
        } else {
            cout << "Seu resultado é de: " << numeros[0]/numeros[1] << ".\n";
        }
    } else {
        cout << "Erro! Por favor digite algum número entre 1 e 4.\n";
    }
    return 0;
}
