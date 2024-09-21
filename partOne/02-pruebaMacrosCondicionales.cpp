#include <iostream>
#include <cstdlib>

using namespace std;

//prueba de directivas condicionales
void enlistar(){
    #ifdef __linux__
        system("ls -al");
    #elif _WIN32
        sytem("echo Accion no permitida")    
    #endif
}

inline int operador( int number1, int number2, char option ){

    char options[4] = { 'S', 'R', 'M', 'D'};

    for( int i = 0; sizeof(options) > i; i++ ){
        if( option == options[i] ){
            //todo
        }
    }
}


int main()
{
    enlistar();

    operador(1,2, 'B');

    return 0;
}
