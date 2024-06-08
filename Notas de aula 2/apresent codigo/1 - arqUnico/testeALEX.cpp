#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double cat, dog, hipot;
    int hipottest;

    cout << "Digite o valor do cateto:\n";
    cin >> cat;

    cout << "Digite o valor do outro cateto:\n";
    cin >> dog;

    hipot = sqrt(pow(cat,2)+ pow(dog,2));
    hipottest = hipot;

    if(hipot > 0 && hipot == hipottest){ 
    cout << "O valor da hipotenusa e igual a: " << hipot << endl;
    } else {
    cout<< "A soma do quadrado dos catetos é igual a: " << pow(cat,2)+ pow(dog,2) << endl;
}
}