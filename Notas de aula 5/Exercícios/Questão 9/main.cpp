#include <iostream>
int main()
{
    using namespace std;
    double pessoa[8];
    for (int i=0; i=8; i++) {
        cout << "Digite a idade da " << i+1 << "º pessoa.\n";
        cin >> pessoa[i];
    }
    return 0;
}
