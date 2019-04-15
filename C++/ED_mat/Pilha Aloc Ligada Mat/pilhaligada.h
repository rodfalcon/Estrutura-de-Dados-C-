#ifndef PILHALIGADA_H_INCLUDED
#define PILHALIGADA_H_INCLUDED
template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *prox;
};
template <typename Tipo>
struct Pilha{
    Node<Tipo> *topo;
    Pilha(){
        topo=NULL;
    }
    ~Pilha(){
        Node<Tipo> *aux;
        while(topo !=NULL){
            aux=topo;
            topo = topo->prox;
            delete aux;
        }
    }
    bool empilha(Tipo x){
        bool v=false;
        Node<Tipo> *aux=new Node<Tipo>;
        if(aux!=NULL){
            v=true;
            aux->info=x;
            aux->prox=topo;
            topo=aux;
        }
        return v;
    }
    Tipo desempilha(){
        Tipo temp = topo->info;
        Node<Tipo> *aux = topo;
        topo = topo->prox;
        delete aux;
        return temp;
    }
    Tipo elementodotopo(){
        return topo->info;
    }

    bool pilhavazia(){
        return topo==NULL;
    }
};
#endif // PILHALIGADA_H_INCLUDED
