#include <iostream>
#include <cmath>
#include "pilhasequencial.h"
#include "triangulo.h"

using namespace std;

int main()
{
    Pilha<Triangulo> p(10);
    Triangulo valor;

    int opc, x1, x2;

    cout << "Pilha em alocacao sequencial" << endl;


    do{
        cout<<"1-empilha"<<endl;
        cout<<"2-desempilha"<<endl;
        cout<<"3-elemento do topo"<<endl;
        cout<<"4-exibe a pilha"<<endl;
        cout<<"9- F I M"<<endl;
        cout<<"Selecione:"<<endl;
        cin>>opc;
        switch(opc){
        case 1:
            if(p.pilhacheia()==false){
                cout << "Digite a altura dos lados do triangulo" << endl;
                cout << "LADO A" << endl;
                cin  >>  valor.a;
                cout << "LADO B" << endl;
                cin  >> valor.b;
                cout << "LADO C" << endl;
                cin  >> valor.c;
                p.empilha(valor);
                cout >> "atualizado"<<endl;
                cout<<endl;
                break;
            }
            else{
                cout<<"  Acao Indisponivel"<<endl;
                cout<<endl;
                break;
            }

        break;
        case 2:
            if(p.pilhavazia()==false){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
                p.desempilha();
                cout<<"  Atualizacao Realizada"<<endl;
                cout<<endl;
                break;
            }
        break;
        case 3:
            if(p.pilhavazia()==false){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
                cout<<"Elemento do topo: "<< p.elementodotopo()<<endl;
            }
            break;
        case 4:
            for(int i=0;i<=p.tamanho;i++){
                valor=p.elementodotopo(i);
                cout<<" Triangulo referente a posicao "<<i+1<<endl;
                cout << "O triangulo e..." << valor.classificacao() << endl;
                cout << "O valor do perimetro e..." << valor.perimetro() << endl;
                cout << "O semi-perimetro e..." << valor.semi_perimetro() << endl;
                cout << "O valor da Area e..." << valor.area(valor.a, valor.b, valor.c) << endl;
            }
        cout<<"Atualizacao Realizada"<<endl;
        cout<<endl;
        break;

        case 9:
            cout<<"Fim...."<<endl;
            break;
        default:
            cout<<"opcao invalida...."<<endl;
            break;
        }
    }while(opc !=9);


    return 0;
}
