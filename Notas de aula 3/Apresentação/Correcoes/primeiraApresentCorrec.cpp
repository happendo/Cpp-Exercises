#include <iostream> // biblioteca a ser usada pelo compilador

int main() // criação da função principal do tipo integer
{
    using namespace std;                       /* especificar funções, classes e objetos a ser usada pelo comando.
                          Exemplo sem usar namespace: "std::cout". Para não ter que especificar use o "using namespace std;"*/
    double multiplicador, multiplicando;       // criação de varíaveis do tipo double(números reais)
    int i, decisao;                            // criação de varíaveis do tipo int(integer, inteiro)
    cout << "Quantas vezes deseja repetir?\n"; // comando simples de saída de dados para ser impresso na tela
    cin >> decisao;                            // comando simples de entrada de dados a ser informado pelo usuário
    int armazenado[decisao];                   // criação de um array do tipo int(integer, inteiro)
    for (i = 0; i < decisao; i++)
    { // criação de um loop utilizando o i de "Contador", sempre adicionando 1.
        cout << i + 1 << "º valor.\n"
             << "Digite A: \n";
        cin >> multiplicador;
        cout << "Digite B: \n";
        cin >> multiplicando;
        armazenado[i] = multiplicador * multiplicando;
    } // fim loop

    if (sizeof(armazenado) == 0)
    { // uso do sizeof para mapear o tamanho do array
        cout << "meu irmao\n";
    }
    else
    {
        cout << "Os resultados foram:\n";
        for (i = 0; i < decisao; i++)
        {
            cout << i + 1 << "º valor é: " << armazenado[i] << endl;
        }
    }
    return 0; // retorno final da função main().
}
