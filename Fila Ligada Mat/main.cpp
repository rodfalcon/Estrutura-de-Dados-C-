#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "filaligada.h"


using namespace std;

int main()
{

    cout << "Hello Fila Ligada" << endl;
    Fila<int> f;
    int n;
    srand(time(NULL));
    for(int i=1;i<=20;i++){
        n=rand()%100;
        if(!f.insere(n)){
            cout<<"Fila cheia"<<endl;
        }
    }
    //mostra fila
    Node<int> *aux = f.inic;
    while (aux != NULL){
        cout<<aux->info<<" ";
        aux=aux->prox;
    }
    return 0;
}
