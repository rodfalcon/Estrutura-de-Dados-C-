#ifndef INGRESSO_H_INCLUDED
#define INGRESSO_H_INCLUDED


struct Contador{

    unsigned int contador = 0;
    char teatro[1000][1000];
    char x[1000][1000];
    Contador(int y, int z)
    {
        x[100][100] = x[y][z];
        contador=0;
        for(int i=0;i<y;i++){
            for(int j=0;j<z;j++){
                    teatro [i][j] = ' ';
            }
        }
    }
    void incrementa(int lin, int col){
        teatro [lin][col] = 'X';
        contador++;
    }
    void decrementa(int lin, int col){
        if(contador==0){
            contador=0;
        }
        else{
             teatro [lin][col] = ' ';
             contador--;
        }
    }
    unsigned int  exibe(int lin, int col){
        return contador;
    }
    char mostrateatro(int lin, int col){
        return teatro[lin][col];
    }
};



#endif // INGRESSO_H_INCLUDED
