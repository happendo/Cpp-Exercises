#include <iostream>

using namespace std;

class triangle {
public:
double hipot, catetoAdjac, catetoOposto, altura;
triangle(double a, double b, double c, double d) {
    altura = a;
    hipot = b;
    catetoAdjac = c;
    catetoOposto = d;
}
double areaCalc() {
    return (hipot*altura)/2;
}
double perimetroCalc() {
    return hipot+catetoAdjac+catetoOposto;
}};

int main() {
    triangle t(12, 5, 4, 3);
    cout << "A área do triângulo com base 5 e altura 12 é: " << t.areaCalc() << endl;
    cout << "O perímetro do triângulo com base 5, cateto adjacente 4 e cateto oposto 3 é: " << t.perimetroCalc() << endl;
    return 0;
}