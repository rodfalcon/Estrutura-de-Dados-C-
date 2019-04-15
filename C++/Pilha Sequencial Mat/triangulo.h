#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include <cmath>

using namespace std;


struct Triangulo {
    float a, b, c;

    double area(float a, float b, float c){
        double sp = semi_perimetro();
        double Area_Total = sqrt(sp*(sp-a) * (sp-b) * (sp-c));
        return Area_Total;
    }
    int perimetro(){
        return a + b + c;
    }
    float semi_perimetro(){
        return (a+b+c)/2;
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
