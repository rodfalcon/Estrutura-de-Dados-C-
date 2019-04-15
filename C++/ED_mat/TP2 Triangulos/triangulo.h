#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include <string>
#include <math.h>

using namespace std;
struct Triangulo{
   int a,b,c;

   double area(int a,int b,int c){
      int s=(a+b+c)/2;
      return sqrt(s*(s-a)*(s-b)*(s-c));
   }
   int perimetro(int a,int b,int c){
        return a+b+c;
   }
   float sp(int a, int b, int c){
       return (a+b+c)/2;
   }
   string classific(int a, int b, int c){
       string r;
       if(a==b && b==c){
          r="equilatero";
       }
       else{
            if(a==b || a==c || b==c){
               r="isosceles";
            }
            else{
                r="escaleno";
            }
       }
      return r;
   }
   bool isTriangulo(int a, int b, int c){
      return a<b+c && b<a+c && c<a+b;
   }

};

#endif // TRIANGULO_H_INCLUDED
