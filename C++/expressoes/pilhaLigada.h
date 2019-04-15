#ifndef PILHALIGADA_H_INCLUDED
#define PILHALIGADA_H_INCLUDED

template <typename Tipo>
struct Node
{
    Tipo info;
    Node<Tipo> *prox;
};

template <typename Tipo>
struct Pilha
{
    int cont;

    Node<Tipo> *topo;

    Pilha()
    {
        topo = NULL;
        cont = 0;
    }

    ~Pilha()
    {
        Node<Tipo> *aux;
        while(topo != NULL)
        {
            aux = topo;
            topo = topo -> prox;
            delete aux;
        }
    }

    bool empilha(Tipo x)
    {
        bool v = false;
        Node<Tipo> *aux = new Node<Tipo>;
        if(aux!=NULL)
        {
            v = true;
            aux -> info = x;
            aux -> prox = topo;
            topo = aux;
            cont++;
        }
        return v;
    }

    Tipo desempilha()
    {
        Tipo temp = topo -> info;
        Node<Tipo> *aux = topo;
        topo = topo -> prox;
        delete aux;
        cont--;
        return temp;
    }

    Tipo retornaTopo()
    {
        return topo -> info;
    }

    bool pilhaVazia()
    {
        return topo == NULL;
    }
};
#endif // PILHALIGADA_H_INCLUDED
