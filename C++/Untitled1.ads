    do{
    cout << "Digite a altura dos lados do triangulo" << endl;
    cout << "LADO A" << endl;
    cin  >>  valor.a;
    cout << "LADO B" << endl;
    cin  >> valor.b;
    cout << "LADO C" << endl;
    cin  >> valor.c;
                                }
    while(valor.isTriangulo() == false);
    if(valor.isTriangulo() == true){
    cout << "O triangulo e..." << valor.classificacao() << endl;
    cout << "O valor do perimetro e..." << valor.perimetro() << endl;
    cout << "O semi-perimetro e..." << valor.semi_perimetro() << endl;
    cout << "O valor da Area e..." << valor.area(valor.a, valor.b, valor.c) << endl;
    }
