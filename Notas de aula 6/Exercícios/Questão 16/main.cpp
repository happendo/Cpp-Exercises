#include <iostream>
int main()
{
    using namespace std;
    string nomProduto[5];
    double precProduto[5], infoP[2];
    int i;
    for (i=0;i<5;i++) {
        cout << "Digite o nome do produto:\n";
        cin >> nomProduto[i];
        cout << "Digite o preço do produto:\n";
        cin >> precProduto[i];
        if (precProduto[i] < 50) {
            infoP[0] = infoP[0]+1;
        }
        if (precProduto[i] > 100) {
        infoP[1] = infoP[i]+precProduto[i];
        }
    }
    if (infoP[0] > 0) {
    cout << "A quantidade de produtos com preço inferior a R$50,00 é de: " << infoP[0] << ".\n";
    } else {
        cout << "Não possuem produtos com preço inferior a R$50,00.\n";
    }
    if (precProduto[i] >= 50 && precProduto[i] <= 100) {
    cout << "Esses sãos os produtos com preço entre R$50,00 e R$100,00.\n";
    for (i=0;i<5;i++) {
        if (precProduto[i] >= 50 && precProduto[i] <= 100) {
        cout << nomProduto[i] << ".\n";
        }
    }} else {
        cout << "Não possuem produtos com preço entre R$50,00 e R$100,00.\n";
    }
    if (infoP[1] > 0) {
        cout << "Não possuem produtos com preços superiores a R$100,00.\n";
    } else {
        cout << "A média dos produtos com preço superior a R$100,00 é de: " << infoP[1] << ".\n";
    }
    return 0;
}