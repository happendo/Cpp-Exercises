#include <iostream>
int main()
{
    using namespace std;
    float idade;
    cout << "Digite sua idade\n";
    cin >> idade;
    if (idade >= 18) {
        cout << "pode passa";
    } else {
        cout << "sai daqui moleque";
    }
    return 0;
}
