#include <iostream>

int main()
{
    using namespace std;
    int i;
    double medidas[2];
    for (i=1; i<3; i++) {
    cout << "Digite a medida dos ângulos: (Digite só graus, ex: 90,81,150)\n";
    cin >> medidas[i];
    }
    cout << "A medida do terceiro ângulo é de: " << 180-(medidas[1]+medidas[2]) << ".\n";
    return 0;
}
