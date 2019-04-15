#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

using namespace std;

struct Triangulo {
    int a, b, c;

    float area(){
        return sqrt(semi_perimetro*a - semi_perimetro*b - semi_perimetro*c - semi_perimetro);
    }
    int perimetro(){
        return a + b + c;
    }
    float semi_perimetro(){
        return a+b+c/2;
    }
    string classificacao(){
        string r;
        if(a==b && b==c){
        r =  "equilatero";
        }else if(a==b && b==c && c!=a){
        r = "O triangulo é isóceles";
        }else {
        r ="O triangulo é escaleno";
        }
        return r;
    }
    bool isTriangulo(){
        return  a<b+c && b<a+c && c<a+b;
    }

};


#endif // TRIANGULO_H_INCLUDED
