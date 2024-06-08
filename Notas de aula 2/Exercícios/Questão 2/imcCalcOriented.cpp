#include <iostream>

using namespace std;

class imc
{
public:
    double altura, peso;
    double imcCalc()
    {
        return peso / (altura*altura);
    }
};

int main()
{
    imc i;
    float decisao; // decisao é referente a opção a ser escolhida
    cout << "O que você deseja calcular é o IMC de alguém? 1 - Sim 2 - Não\n";
    cin >> decisao;
    if (decisao == 1)
    {
        cout << "Qual é a altura? (Digite em metros, ex: 1.80)\n";
        cin >> i.altura;
        cout << "Qual é o peso? (Digite em quilos, ex: 64)\n";
        cin >> i.peso;
        cout << "O IMC deste indivíduo é igual a: " << i.imcCalc() << ".\n";
    }
    else
    {
        cout << "Encerrando execução.";
    }
    return 0;
}
