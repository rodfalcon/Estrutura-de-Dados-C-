#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

struct Contador{
    int temperatura;
    bool ligado;

    Contador(){
        temperatura=24;
        ligado=false;
    }
    Contador(int valorInicial){
        ligado=false;
        temperatura=valorInicial;
    }

    void incrementa(){
        temperatura++;
    }
    void decrementa(){
        temperatura--;
    }
    void ligar(){
        ligado=true;
    }
    void desligar(){
        ligado=false;
    }
    int getTemperatura(){
        return temperatura;
    }
    bool getStatus(){
        return ligado;
    }
};

#endif // CONTADOR_H_INCLUDED
