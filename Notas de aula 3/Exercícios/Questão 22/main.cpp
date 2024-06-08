#include <iostream>
int main()
{
    using namespace std;
    double lados;
    cout << "Quantos lados tem o polígono convexo? (Digite só números, ex: 213.532,21)\n";
    cin >> lados;
    cout << "As diagonais existentes nesse polígono convexo é de: " << lados * (lados - 3) / 2 << ".\n";
    return 0;
}