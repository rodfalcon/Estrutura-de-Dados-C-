#include <iostream>
#include <string.h>
#include "pilhaLigada.h"

using namespace std;

int main()
{
    string expressao;
    unsigned i;
    char s;
    bool valido;
    int opc;

  
    Pilha<char> p;

    do
    {
        cout << "\n1 - Nova expressao\n9 - Fim\nEscolha: ";
        cin >> opc; cout << "\n";

        switch(opc)
        {
            case 1:
                while(!p.pilhaVazia())
                {
                    p.desempilha();
                }
                valido = true;
                cout << "Caracteres de expressao: ()[]{}\nDigite a expressao: ";
                cin.ignore();
                getline(cin, expressao);
                for(i = 0; i < expressao.size(); i++)
                {
                    s = expressao.at(i);
                    if (s == '{' || s == '[' || s == '(')
                    {
                        p.empilha(s);
                    }
                    else
                    {
                        if(s == '}' || s == ']' || s == ')')
                        {
                            if(p.pilhaVazia())
                            {
                                valido = false;
                                break;
                            }
                            else
                            {
                                if(s == '}' && p.retornaTopo() == '{')
                                {
                                    p.desempilha();
                                }
                                else
                                {
                                    if(s == ']' && p.retornaTopo() == '[')
                                    {
                                        p.desempilha();
                                    }
                                    else
                                    {
                                        if(s == ')' && p.retornaTopo() == '(')
                                        {
                                            p.desempilha();
                                        }
                                    }
                                }
                            }
                        }
                    }
                    //cout << s << endl;
                }
                if(p.pilhaVazia() && valido)
                {
                    cout << "A expressao " << expressao << " 'e valida.";
                }
                else
                {
                    cout << "A expressao " << expressao << " NAO 'e valida.";
                }
                break;
            case 9:
                cout << "\nFim da aplicacao.\n";
                break;
            default:
                cout << "Valor invalido! Tente novamente.";
                break;
        }
    } while(opc != 9);

    return 0;
}

/***
    string ayaya = "AYAYA";

    for (int i = 0; i < ayaya.size(); i++)
	{
		std::cout << ayaya.at(i) << endl;
    }

    std::cout << "ss fon trab";

    //cout << "\nHello world!" << endl;
***/
