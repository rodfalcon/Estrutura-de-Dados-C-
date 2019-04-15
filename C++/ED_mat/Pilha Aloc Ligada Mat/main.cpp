#include <iostream>
#include "pilhaligada.h"

using namespace std;

int main()
{
    cout << "Analisando uma expressao!!!" << endl;
    Pilha<int> p;
    string expressao;
    char s;
    bool valido;
    int opc;
    unsigned i;



    do{
        cout<<"1-nova expressao"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
            case 1:
                valido = true;
                i=0;
                cout<<"Digite a expressao:"<<endl;
                getline(cin, expressao);

                do{
                    s = expressao.at(i);
                    if(s=='{' || s=='[' || s=='(')
                        p.empilha(s);
                    else if (s=='}' || s==']' || s==')')
                    if(p.pilhavazia() == true){
                        valido = false;
                    } else if (s == '}' && p.elementodotopo()=='}')
                        p.desempilha();
                        else if (s==']' && p.elementodotopo() =='[')
                            p.desempilha();
                        else if (s==')' && p.elementodotopo() == '(')
                            p.desempilha();
                } while(i<expressao.size()+1);
                i++;
                if (p.pilhavazia()==valido){
                    cout<<"Expressao Correta"<<endl;}
                    else
                    cout<<"Expressao incorreta"<<endl;
                            break;
            case 2:
                if(p.pilhavazia()){
                    cout<<"pilha vazia..."<<endl;
                }
                else{
                    cout<<"Desempilhado:"<<p.desempilha()<<endl;
                }
                break;
            case 3:
                if(p.pilhavazia()){
                    cout<<"pilha vazia..."<<endl;
                }
                else{
                    cout<<"Elem.do topo:"<<p.elementodotopo()<<endl;
                }
                break;
            case 4:
                if(p.pilhavazia()){
                    cout<<"pilha vazia..."<<endl;
                }
                else{
                    cout<<"Elementos da Pilha"<<endl;
                    Node<int> *aux=p.topo;
                    while(aux != NULL){
                        cout<<aux->info<<" ";
                        aux=aux->prox;
                    }
                    cout<<endl;
                }
                break;
            case 5:
                if(p.pilhavazia()){
                    cout<<"pilha vazia..."<<endl;
                }
                else{
                    while (!p.pilhavazia()){
                        cout<<p.desempilha()<<endl;
                    }
                }
                break;
            case 9:
                cout<<"fim"<<endl;
                break;
            default:
                cout<<"opcao invalida"<<endl;
                break;
        }
    }while(opc!=9);
    return 0;
}
