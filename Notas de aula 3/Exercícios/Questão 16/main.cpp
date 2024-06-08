#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    double cateto1,cateto2;
    cout << "Digite o valor do seu cateto adjacente: (Digite só números, ex: 213.532,21)\n";
    cin >> cateto1;
    cout << "Digite o valor do seu cateto oposto: (Digite só números, ex: 213.532,21)\n";
    cin >> cateto2;
    cout << "A hipotenusa desse triângulo é correspondente a: " << sqrt((pow(cateto1,2)+pow(cateto2,2))) << ".\n";
    return 0;
}
