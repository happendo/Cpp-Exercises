#include <iostream>

int main()
{
    using namespace std;
    double decisao, altura, peso; // decisao é referente a opção a ser escolhida
    cout << "O que você deseja calcular é o IMC de alguém? 1 - Sim 2 - Não\n";
    cin >> decisao;
    if (decisao == 1)
    {
        cout << "Qual é a altura? (Digite em metros, ex: 1.80)\n";
        cin >> altura;
        cout << "Qual é o peso? (Digite em quilos, ex: 64)\n";
        cin >> peso;
        cout << "O IMC deste indivíduo é igual a: " << peso / (altura*altura) << ".\n";
    }
    else
    {
        cout << "Encerrando execução.";
    }
    return 0;
}
