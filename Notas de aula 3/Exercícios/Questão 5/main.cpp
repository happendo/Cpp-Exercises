#include <iostream>
int main()
{
    using namespace std;
    double preco;
    cout << "Digite o preço do produto: (Digite só números, ex: 213.532,21)\n";
    cin >> preco;
    cout << "O novo preço é: " << preco-(preco*0.1) << endl;
    return 0;
}