#include <iostream>

using namespace std;

class paralepipedo
{
public:
    double a, b, c;
    double volumeCalc()
    {
        return a * b * c;
    }
};

int main()
{
    paralepipedo p;
    float decisao; // decisao é referente a opção a ser escolhida
    cout << "O que você deseja calcular é um paralepipedo e possuí largura, comprimento e altura? 1 - Sim 2 - Não\n";
    cin >> decisao;
    if (decisao == 1)
    {
        cout << "Qual é a largura?\n";
        cin >> p.a;
        cout << "Qual é o comprimento?\n";
        cin >> p.b;
        cout << "Qual é a altura?\n";
        cin >> p.c;
        cout << "O volume desse paralelogramo com largura " << p.a << ", comprimento " << p.b << " e altura " << p.c << ", é de " << p.volumeCalc() << ".\n";
    }
    else
    {
        cout << "Encerrando execução\n";
    }
    return 0;
}
