#include <iostream>
int main()
{
    using namespace std;
    double infProduto[2];
    cout << "Digite o código do produto comprado:\n";
    cin >> infProduto[1];
    cout << "Digite a quantidade comprada do produto:\n";
    cin >> infProduto[2];
    double tabProd, desconto[2];
    string precTotaNt = "O preço total da nota é de: ";
    if (infProduto[1] <= 10){
        tabProd = infProduto[2] * 10;
        cout << "O preço do produto comprado é de 10 reais.\n";
        cout << precTotaNt << tabProd << ".\n";}
    else if (infProduto[1] >= 11 && infProduto[1] <= 20){
        tabProd = infProduto[2] * 15;
        cout << "O preço do produto comprado é de 15 reais.\n";
        cout << precTotaNt << tabProd << ".\n";}
    else if (infProduto[1] >= 21 && infProduto[1] <= 30){
        tabProd = infProduto[2] * 20;
        cout << "O preço do produto comprado é de 20 reais.\n";
        cout << precTotaNt << tabProd << ".\n";}
    else if (infProduto[1] >= 31 && infProduto[1] <= 40){
        tabProd = infProduto[2] * 30;
        cout << "O preço do produto comprado é de 30 reais.\n";
        cout << precTotaNt << tabProd << ".\n";}
    else {
        cout << "Verifique se esse produto existe.\n";};
    if (tabProd <= 250){
        desconto[1] = (tabProd * 0.05);
        desconto[0] = tabProd - desconto[1];}
    if (tabProd > 250 && tabProd <= 500) {
        desconto[1] = (tabProd * 0.10);
        desconto[0] = tabProd - desconto[1];}
    if (tabProd > 500) {
        desconto[1] = (tabProd * 0.15);
        desconto[0] = tabProd - desconto[1];} 
    if (infProduto[1] <= 10 || infProduto[1] >= 11 && infProduto[1] <= 20 || infProduto[1] >= 21 && infProduto[1] <= 30 || infProduto[1] >= 31 && infProduto[1] <= 40){
        cout << "O valor do desconto foi de: " << desconto[1] << ".\n";
        cout << "O preço final da nota após o desconto foi de: " << desconto[0] << ".\n";}
    return 0;
}
