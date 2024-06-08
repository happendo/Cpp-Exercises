#include <iostream>
int main()
{
    using namespace std;
    double execucao = 5, rende;
    for (;;){
    cout << "Digite qual operacao voce deseja:\n1-Poupanca\n2-Poupanca plus\n3-Fundos de renda fixa\n";
    cin >> execucao;
    if (execucao != 0){ 
    cout << "Digite seu rendimento mensal\n";
    cin >> rende;}
    if (execucao == 1)
    {
        cout << "Seu rendimento mensal apos a correcao sera: " << rende - (rende * 0.015) << endl;
    }
    else if (execucao == 2)
    {
        cout << "Seu rendimento mensal apos a correcao sera: " << rende - (rende * 0.02) << endl;
    }
    else if (execucao == 3)
    {
        cout << "Seu rendimento mensal apos a correcao sera: " << rende - (rende * 0.04) << endl;
    }
    else if (execucao <= 0)
    {
        cout << "Encerrando a execucao";
        break;
    }
    }
    return 0;
}