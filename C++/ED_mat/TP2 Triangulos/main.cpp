#include <iostream>
#include "pilhasequencial.h"
#include "triangulo.h"
using namespace std;

int main()
{
    int tamanho;
    cout<<"Digite o tamanho de sua pilha:";
    cin>>tamanho;
    Pilha<Triangulo> p(tamanho);
    int opc;
    Triangulo t;

    cout << "Pilha em alocacao sequencial" << endl;
    do{
        cout<<"1-empilha"<<endl;
        cout<<"2-desempilha"<<endl;
        cout<<"3-elemento do topo"<<endl;
        cout<<"4-exibe a pilha"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
        case 1:
            if(p.pilhacheia()){
                cout<<"Pilha cheia..."<<endl;
            }
            else{
                cout<<"Digite o lado A:";
                cin>>t.a;
                cout<<"Digite o lado B:";
                cin>>t.b;
                cout<<"Digite o lado C:";
                cin>>t.c;
                if(!t.isTriangulo(t.a,t.b,t.c)){
                    cout<<"Nao eh um triangulo!!!"<<endl;
                }
                else{
                    p.empilha(t);
                }
            }

        break;
        case 2:
            if(p.pilhavazia()){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
               t=p.desempilha();
               cout<<"Desempilhado: "<<endl;
               cout<<"lado A:"<<t.a<<endl;
               cout<<"lado B:"<<t.b<<endl;
               cout<<"lado C:"<<t.c<<endl;
            }
        break;
        case 3:
            if(p.pilhavazia()){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
                t=p.elementodotopo();
               cout<<"Elemento do Top: "<<endl;
               cout<<"lado A:"<<t.a<<endl;
               cout<<"lado B:"<<t.b<<endl;
               cout<<"lado C:"<<t.c<<endl;
            }
            break;
        case 4:
            if(p.pilhavazia()){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
               for(int i=0;i<=p.topo;i++){
                    t=p.v[i];
                    cout<<"Elemento do Top: "<<endl;
                    cout<<"lado A:"<<t.a<<endl;
                    cout<<"lado B:"<<t.b<<endl;
                    cout<<"lado C:"<<t.c<<endl;
                    cout<<"Perimetro:"<<t.perimetro(t.a,t.b,t.c)<<endl;
                    cout<<"Area:"<<t.area(t.a,t.b,t.c)<<endl;
                    cout<<"Classif:"<<t.classific(t.a,t.b,t.c)<<endl;
               }
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
