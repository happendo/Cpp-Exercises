#include <iostream>

int main()
{
    using namespace std;
    double decisao, a, b, c; // decisao é referente a opção a ser escolhida
    cout << "O que você deseja calcular é um paralepipedo e possuí largura, comprimento e altura? 1 - Sim 2 - Não\n";
    cin >> decisao;
    if (decisao == 1)
    {
        cout << "Qual é a largura?\n";
        cin >> a;
        cout << "Qual é o comprimento?\n";
        cin >> b;
        cout << "Qual é a altura?\n";
        cin >> c;
        cout << "O volume desse paralelogramo com largura " << a << ", comprimento " << b << " e altura " << c << ", é de " << a*b*c << ".\n";
    }
    else
    {
        cout << "Encerrando execução\n";
    }
    return 0;
}
