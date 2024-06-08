#include <iostream>
int main()
{
    using namespace std;
    double salario, vendas;
    cout << "Digite o salário fixo do funcionário: (Digite só números, ex: 213.532,21)\n";
    cin >> salario;
    cout << "Quanto foi o valor total das vendas?: (Digite só números, ex: 213.532,21)\n";
    cin >> vendas;
    cout << "Sua comissão é de: " << vendas*0.04 << ".\n";
    cout << "Seu salário final é: " << salario + (vendas*0.04) << ".\n";
    return 0;
}
