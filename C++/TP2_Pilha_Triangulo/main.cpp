#include <iostream>
#include <cmath>
#include "pilhasequencial.h"
#include "triangulo.h"
using namespace std;

int main()
{
    int opc, t, x, i;
    cout<<"========LISTA DE TRIANGULOS=========="<<endl;
    cout<<"  Digite o tamanho da lista:";
    cin>>t;
    Pilha<Triangulo> pilha1(t);
    Pilha<int>pilha2(t);
    Triangulo square1;



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
            if(pilha1.pilhacheia()==false){
                cout << "Digite a altura dos lados do triangulo" << endl;
                cout << "LADO A" << endl;
                cin  >>  square1.a;
                cout << "LADO B" << endl;
                cin  >> square1.b;
                cout << "LADO C" << endl;
                cin  >> square1.c;
                pilha1.empilha(square1);
                cout << "atualizado"<<endl;
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
            if(pilha1.pilhacheia()==false){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
                pilha1.desempilha();
                cout<<"  Atualizacao Realizada"<<endl;
                cout<<endl;
                break;
            }
        break;
        case 3:
            for(i=t;i>=pilha1.topo;i--){
                square1 = pilha1.elementodotopo();}
                cout<<"Elemento do topo: "<<endl;
                cout<<" Triangulo referente a posicao "<<i+1<<endl;
                cout<<" LADO A vl ="<<square1.a<<" LADO B vl= " << square1.b << " LADO C vl =" <<square1.c<<endl;
                cout << "O triangulo e..." << square1.classificacao() << endl;
                cout << "O valor do perimetro e..." << square1.perimetro() << endl;
                cout << "O semi-perimetro e..." << square1.semi_perimetro() << endl;
                cout << "O valor da Area e..." << square1.area(square1.a, square1.b, square1.c) << endl;
                cout<<"Atualizacao Realizada"<<endl;
                cout<<endl;

            break;
        case 4:
                for(i=t;i<=pilha1.topo;i--){
                square1 = pilha1.elementodotopo();
                cout<<" Triangulo referente a posicao "<<i+1<<endl;
                cout<<" LADO A vl ="<<square1.a<<" LADO B vl= " << square1.b << " LADO C vl =" <<square1.c<<endl;
                cout<<endl;
            }
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
