#include <iostream>
int main()
{
    using namespace std;
    double dinheiro;
    cout << "Digite o dinheiro em reais: (Digite só números, ex: 92.3,81,150)\n";
    cin >> dinheiro;
    cout << "A conversão de reais para doláres se dá: " << dinheiro/1.8<< ".\n";
    cout << "A conversão de reais para doláres se dá: " << dinheiro/2 << ".\n";
    cout << "A conversão de reais para doláres se dá: " << dinheiro/3.57 << ".\n";
    return 0;
}
