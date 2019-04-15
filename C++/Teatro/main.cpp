#include <iostream>
#include "ingresso.h"
using namespace std;

int main(){

    cout<<"SUGAR TITS THEATER"<<endl;
    cout<<"THIS APP COUNTS HOW MANY SEATS ARE EMPTY OR OCCUPIED"<<endl;
    int filas = 0;
    int colunas = 0;
    int lin, col, i, j, opc;
    cout<<"Digite o numero de cadeiras na horizontal"<<endl;
    cin>> filas;
    cout<<"Digite o numero de colunas do teatro"<<endl;
    cin>>colunas;
    Contador c1 (filas, colunas);
    do{
            for(int i=0;i<filas;i++){
            for(int j=0;j<colunas;j++){
                    cout<<"["<<c1.mostrateatro(i, j)<<"]";
            }
            cout<<endl;
        }
        cout<<"CHOOSE YOUR DESTINY"<<endl;
        cout<<"1 - PEGAR CADEIRA"<<endl;
        cout<<"2 - DEVOLVER INGRESSO"<<endl;
        cout<<"3 - MOSTRAR TEATRO"<<endl;
        cout<<"4 - FIM"<<endl;
        cout<<" ESCOLHA 1, 2, 3 OR 4:";
        cin>>opc;
        switch(opc){
        case 1:
            cout<<"SELECIONAR CADEIRA"<<endl;
            cout<<"QUAL LINHA DE 0 A "<<filas<<endl;
            cin>>i;
            cout<<"QUAL COLUNA DE 0 A "<<colunas<<endl;
            cin>>j;
            if(c1.mostrateatro(i,j)== 'X'){
                        cout<<"SEAT OCCUPIED"<<endl;}
            else{c1.incrementa(i,j);}
            break;
        case 2:
            cout<<"CHOOSE THE PLACE"<<endl;
            cout<<"QUAL LINHA DE 0 A "<<filas<<endl;
            cin>>i;
            cout<<"QUAL COLUNA DE 0 A "<<colunas<<endl;
            cin>>j;
            if(c1.mostrateatro(i,j)== ' '){
            cout<<"ACENTO VAZIO/NAO VENDIDO"<<endl;}
            else{c1.decrementa(i,j);}
            break;
        case 3:
            cout<<"THE CURRENT STATUS IS..."<<endl;
            c1.mostrateatro(i,j);
            break;
        case 4:
            cout<<"THE END"<<endl;
            break;
        default:
            cout<<"INVALID OPTION, PLEASE CHOOSE A NUMBER FROM 1 TO 4 ONLY..."<<endl;
            break;
        }
    }while (opc!=4);
    return 0;
}
