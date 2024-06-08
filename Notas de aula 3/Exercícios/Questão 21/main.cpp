#include <iostream>

int main()
{
    using namespace std;
    double salario[3], horasTrab[2], horasExtTrab[2];
    cout << "Qual é o salário mínimo? (Digite só números, ex: 213.532,21)\n";
    cin >> salario[1];
    cout << "Quantas horas foram trabalhadas? (Digite só números, ex: 213.532,21)\n";
    cin >> horasTrab[1];
    cout << "Quantas horas extras foram trabalhadas? (Digite só números, ex: 213.532,21)\n";
    cin >> horasExtTrab[1];
    horasTrab[2] = salario[1] / 8;
    horasExtTrab[2] = salario[1] / 4;
    salario[2] = horasTrab[1] * horasTrab[2];      // salario bruto
    salario[3] = horasExtTrab[1] * horasExtTrab[2]; // quantia extra a receber
    cout << "O salário recebido foi de: " << salario[2] + salario[3] << ".\n";
    return 0;
}