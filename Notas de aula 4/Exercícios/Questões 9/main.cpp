#include <iostream>
int main()
{
    using namespace std;
    double salarioMed;
    cout << "Digite o salário médio desse cliente: ";
    cin >> salarioMed;
    if (salarioMed > 400 ) {
        cout << "Seu salário médio é de: " << salarioMed << ".\nJá seu crédito é de: " << salarioMed*0.3 << ".\n";
    } else if (salarioMed <= 400 && salarioMed >= 300) {
        cout << "Seu salário médio é de: " << salarioMed << ".\nJá seu crédito é de: " << salarioMed*0.25 << ".\n";
    } else if (salarioMed <= 300 && salarioMed >= 200) {
        cout << "Seu salário médio é de: " << salarioMed << ".\nJá seu crédito é de: " << salarioMed*0.2 << ".\n";
    } else if (salarioMed <= 200) {
        cout << "Seu salário médio é de: " << salarioMed << ".\nJá seu crédito é de: " << salarioMed*0.1 << ".\n";
    }
    return 0;
}
