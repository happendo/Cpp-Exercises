#include <iostream>
int main()
{
    using namespace std;
    int i;
    double idadesMed[2], info[5];
    for (i=0;i<3;i++) {
        cout << "Digite a idade:\n";
        cin >> idadesMed[0];
        cout << "Digite a sua opinião, sendo 1 - regular, 2 - bom, 3- ótimo:\n";
        cin >> info[0];
        if (info[0] == 1) {
            info[1] = info[1]+1;
        } else if (info[0] == 2) {
            info[2] = info[2]+1;
        } else if (info[0] == 3) {
            info[3] = info[3]+idadesMed[0];
            info[4] = info[4]+1;
        } else {
            cout << "Escolhe 1 entre 3 opções de opinião!\n";
            return 0;
        }
    }
    cout << "A média das idades das pessoas que responderam ótimo é de: " << (info[3]/15) << ".\n";
    cout << "A quantidade de pessoas que responderam regular é de: " << info[1] << ".\n";
    cout << "A percentagem de pessoas que responderam bom é de: " << (info[1]+info[2]+info[4])/(info[4]*100) << ".\n";
    return 0;
}
