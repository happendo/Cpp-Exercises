#include <iostream>

int main()
{
    using namespace std;
    int i;
    double salario, contas[2]; 
    cout << "Digite o salário de joão: (Digite só números, ex: 213.532,21)\n";
    cin >> salario;
    for (i = 1; i < 3; i++)
    {
        cout << "Digite o valor da " << i+1 <<"º conta: (Digite só números, ex: 213.532,21)\n";
        cin >> contas[i];
        contas[i] = contas[i]+(contas[i]*0.02);
        salario = salario-contas[i];
    }
    cout << "O salário final de João será: " << salario << ".\n";
    return 0;
}
