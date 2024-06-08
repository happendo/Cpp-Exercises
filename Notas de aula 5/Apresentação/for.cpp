#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    string  oqueRepet;
    float vezesRepet, i;
    cout << "O quê deseja repetir?\n";
    cin >> oqueRepet;
    cout << "Quantas vezes deseja repetir?\n";
    cin >> vezesRepet;
    if (isfinite(vezesRepet)) {
    for (i=0; i<vezesRepet; i++) {
        cout << oqueRepet << endl;
    }
    } else {
        cout << "Especifique o número!!\n";
    }
    return 0;
}
