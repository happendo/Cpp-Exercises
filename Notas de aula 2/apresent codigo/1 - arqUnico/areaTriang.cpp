#include <iostream>

using namespace std;

class triangle {
public:
double hipot, catetoAdjac, catetoOposto, altura;
double areaCalc() {
    return (hipot*altura)/2;
}
double perimetroCalc() {
    return hipot+catetoAdjac+catetoOposto;
}};

int main()
{
    triangle t;
    float decisao;
    string digiteH = "Digite a hipotenusa:\n", digiteCatAd = "Digite o cateto adjacente:\n", digiteCatOp = "Digite o cateto oposto:\n";
    cout << "Deseja calcu o quê? 1 - Área, 2 - Perímetro e 3 - Ambos.\n";
    cin >> decisao;
    if (decisao == 1) {
    cout << digiteH;
    cin >> t.hipot;
    cout << "Digite a altura:\n";
    cin >> t.altura;
    cout << "A área desse triângulo é: " << t.areaCalc() << endl;
    } else if (decisao == 2) {
        cout << digiteH;
        cin >> t.hipot;
        cout << digiteCatAd;
        cin >> t.catetoAdjac;
        cout << digiteCatOp;
        cin >> t.catetoOposto;
        cout << "O perímetro desse triângulo é: " << t.perimetroCalc() << endl;
    } else if (decisao == 3) {
        cout << "Digite a altura:\n";
        cin >> t.altura;
        cout << digiteH;
        cin >> t.hipot;
        cout << digiteCatAd;
        cin >> t.catetoAdjac;
        cout << digiteCatOp;
        cin >> t.catetoOposto;
        cout << "A área desse triângulo é: " << t.areaCalc() << endl;
        cout << "O perímetro desse triângulo é: " << t.perimetroCalc() << endl;
    } else {
        cout << "meu irmao\n";}
    return 0;
}