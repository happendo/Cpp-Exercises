#include <iostream>
int main()
{
    char armazeno1Byte = '1';                                // 1 letra ou número, representado por 1 byte
    char armazeno26Bytes[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // definindo um array no char pode-se utilizar mais bytes.
    int armazenoNumerosInteiros = 1;                         // 2,3,4,5,6,7...
    double armazenoNumerosPrecisos = 2.39431;                 // 2.291...
    float armazenoNumerosAproximados = 2.39431;              // viraria 2.5, 2.1 seria 2 e por aí vai
    bool armazenoBooleanos = true;                           // ou false, essas palavras podem ser traduzidas para 0 e 1.
    std::cout << "Digite a variável aqui.";
}