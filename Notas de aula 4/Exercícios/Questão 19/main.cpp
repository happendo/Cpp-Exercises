#include <iostream>
int main()
{
    using namespace std;
    double pessoa[2];
    cout << "Digite a altura da pessoa: \n";
    cin >> pessoa[0];
    cout << "Digite o sexo da pessoa, sendo 1 - Masculino, 2 - Feminino:\n";
    cin >> pessoa[1];
    if (pessoa[1] == 1) {
        cout << "Esse é peso ideal para esse homem: " << (72.7*pessoa[0])-58 << ".\n";
    } else if (pessoa[1] == 2) {
        cout << "Esse é peso ideal para essa mulher: " << (62.1*pessoa[0])-44.7 << ".\n";
    } else {
        cout << "Opção inválida de sexo.\n";
    }
    return 0;
}