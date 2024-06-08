#include <iostream>
int main()
{
    using namespace std;
    double investimento[2];
    cout << "Digite o tipo de investimento, 1 - Poupança, 2 - Fundos de renda fixa:\n";
    cin >> investimento[0];
    
    if (investimento[0] = 1) {
        cout << "Digite o valor do seu investimento:\n";
        cin >> investimento[1];
        cout << "O seu valor daqui a um mês será corrigido para: " << investimento[1]+(investimento[1]*0.03) << ".\n";
    } else if (investimento[0] = 2){
        cout << "Digite o valor do seu investimento:\n" << investimento[1]+(investimento[1]*0.04) << ".\n";
        cin >> investimento[1];
    } else {
        cout << "Opção inválida!";
    }
    return 0;
}
