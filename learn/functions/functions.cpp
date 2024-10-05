#include <iostream>
#include <functional>

using namespace std;

//forma normal de una funcion
string saludo( string name ){
    return "Hola como estas? " + name + "\n";
}

//funciones sin retorno y sin parametros
void saludo2(){
    cout << "ingresaste y ejecutaste\n";
}

//sobrecarga de funciones
int sumar(int a, int b) {
    return a + b;
}

float sumar(float a, float b) {
    return a + b;
}

//funciones recursivas
int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}


//lambadas como parametros
template<typename myType>
myType Operacion( myType a, myType b, function<myType( myType, myType )> operacion ){ return operacion( a, b) }


int main(int argc, char const *argv[])
{

    cout << saludo( "Juan" );
    saludo2();

    //funciones lambdas
    auto suma = []( int a, int b ) { return a + b; };

    cout << "su suma es:" << suma(2,5) << endl;

    cout << "su resta es:" << Operacion<int>( 16, 7, []( int a, int b ){ return a - b; } ) << endl;

    return 0;
}
