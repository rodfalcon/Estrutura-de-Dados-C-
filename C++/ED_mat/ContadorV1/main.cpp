#include <iostream>
#include "contador.h"
using namespace std;
int main()
{
    int opc;
    int valor;
    cout<<"Digite o valor inicial:";
    cin>>valor;
    Contador c(valor);
    do{
        cout<<"Ligado:"<<c.getStatus()<<endl;
        cout<<"Temperatura:"<<c.getTemperatura()<<endl;
        cout << "Contador!" << endl;
        cout<<"1-ligar"<<endl;
        cout<<"2-desligar"<<endl;
        cout<<"3-aumenta"<<endl;
        cout<<"4-diminui"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch (opc){
        case 1:
            c.ligar();
            break;
        case 2:
            c.desligar();
            break;
        case 3:
            c.incrementa();
            break;
        case 4:
            c.decrementa();
            break;
        case 9:
            cout<<"fim...."<<endl;
            break;
        default:
            cout<<"opcao invalida...."<<endl;
            break;
        }
    }while(opc != 9);

    return 0;
}
