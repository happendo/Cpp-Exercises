#include <iostream>
#include <typeinfo>
int main()
{
    using namespace std;
    string  oqueRepet;
    float vezesRepet, i;
    cout << "O quê deseja repetir?\n";
    cin >> oqueRepet;
    cout << "Quantas vezes deseja repetir?\n";
    cin >> vezesRepet;
    cout << typeid(vezesRepet).name << endl ;
    while (vezesRepet != 0) {
        cout << oqueRepet << endl;
        vezesRepet = vezesRepet - 1;
    }
    return 0;
}
