#ifndef FILALIGADA_H_INCLUDED
#define FILALIGADA_H_INCLUDED
template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *prox;
};

template <typename Tipo>
struct Fila{

    Node<Tipo> *inic;
    Node<Tipo> *fim;

    Fila(){
        inic=NULL;
        fim=NULL;
    }
    ~Fila(){

    }
    bool insere(Tipo x){
        bool v=false;
        Node<Tipo> *aux = new Node<Tipo>;
        if(aux != NULL){
            v=true;
            aux->info=x;
            aux->prox=NULL;
            if(inic==NULL){
                inic=aux;
            }
            else{
                fim->prox=aux;
            }
            fim=aux;
        }
        return v;
    }
    Tipo remover(){
        Tipo temp=inic->info;
        Node<Tipo> *aux=inic;
        inic = inic->prox;
        if(inic == NULL){
            fim=NULL;
        }
        delete aux;
        return temp;
    }
    Tipo primeiro(){
        return inic->info;
    }
    bool filavazia(){
        return inic==NULL;
    }
};




#endif // FILALIGADA_H_INCLUDED
