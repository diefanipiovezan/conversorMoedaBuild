#include <iomanip>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void menu()
{
    cout << endl
    << " 1 - Converter Moeda.\n"
    << " 2 - Sair.\n"
    << " Digite a opcao desejada e pressione Enter: ";
}

string str_toupper(string s) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}

int main(){

    int opcao;
    string moedaOrigem;
    string moedaDestino;
    bool continuar = true;
    double valorDestino;
    double valor;

    menu();

    cin >> opcao;


    switch (opcao)
    {
        case 1:
            cout << "As moedas disponiveis sao: USD, BRL, ARS,EUR, GBP e BTC. \n";

            cout << "Qual a moeda de origem? \n";
            cin >> moedaOrigem;
            moedaOrigem = str_toupper(moedaOrigem);

            cout << "Qual a moeda de destino? \n";
            cin >> moedaDestino;
            moedaDestino = str_toupper(moedaDestino);

            cout << "Qual o valor a ser convertido? \n";
            cin >> valorDestino;


            if (moedaOrigem == "USD"){

                if (moedaDestino == "BRL"){

                    valor = valorDestino * 5.65;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";
                }else if (moedaDestino == "ARS"){

                    valor = valorDestino * 80.71;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "EUR"){

                    valor = valorDestino * .85;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "GBP"){

                    valor = valorDestino * .78;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "BTC"){

                    valor = valorDestino * 0.00009345794;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";


                }else if (moedaDestino == moedaOrigem){

                    valor = valorDestino;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }

                main();
            }else if (moedaOrigem == "BRL"){

                if (moedaDestino == "USD"){

                    valor = valorDestino * .18;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "ARS"){

                    valor = valorDestino * 14.29;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "EUR"){

                    valor = valorDestino * .15;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }
                else if (moedaDestino == "GBP"){

                    valor = valorDestino * .14;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }
                else if (moedaDestino == "BTC"){

                    valor = valorDestino * .00001654122;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == moedaOrigem){

                    valor = valorDestino;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }

                main();
            }else if (moedaOrigem == "ARS"){

                if (moedaDestino == "USD"){

                    valor = valorDestino * .0123900384;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "BRL"){

                    valor = valorDestino * 0.07;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "EUR"){

                    valor = valorDestino * .00042052144;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }
                else if (moedaDestino == "GBP"){

                    valor = valorDestino * .00966850828;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }
                else if (moedaDestino == "BTC"){

                    valor = valorDestino * .00000115788;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == moedaOrigem){

                    valor = valorDestino;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }

                main();
            }else if (moedaOrigem == "EUR"){

                if (moedaDestino == "USD"){

                    valor = valorDestino * 1.18;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "BRL"){

                    valor = valorDestino * 6.67;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "ARS"){

                    valor = valorDestino * .01049947502;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "GBP"){

                    valor = valorDestino * .92085635359;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "BTC"){

                    valor = valorDestino * .00011028037;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == moedaOrigem){

                    valor = valorDestino;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }

                main();
            }else if (moedaOrigem == "GBP"){

                if (moedaDestino == "USD"){

                    valor = valorDestino * 1.28;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "BRL"){

                    valor = valorDestino * 7.24;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "ARS"){

                    valor = valorDestino * 103.43;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "EUR"){

                    valor = valorDestino * 1.09;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "BTC"){

                    valor = valorDestino * 0.0001196261;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == moedaOrigem){

                    valor = valorDestino;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";
                }

                main();
            }else if (moedaOrigem == "BTC"){

                if (moedaDestino == "USD"){

                    valor = valorDestino * 10700;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "BRL"){

                    valor = valorDestino * 60455;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "ARS"){

                    valor = valorDestino * 863642.86;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "EUR"){

                    valor = valorDestino * 9067.80;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == "GBP"){

                    valor = valorDestino * 8359.38;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }else if (moedaDestino == moedaOrigem){

                    valor = valorDestino;

                    std::cout << std::fixed << std::setprecision(2) << valorDestino << " " << moedaOrigem << " e igual a " << std::setprecision(2) << valor <<  " " << moedaDestino << "\n";

                }

                main();
            }else{

                cout << "Entrada invalida. Verifique a escrita. \n";
                main();

            }
            break;
            case 2:
                cout << "Programa Finalizado.\n";
                return 0;
            break;
            default:
                cout << "Opcao Invalida. \n";
                main();
            break;
    }
}
