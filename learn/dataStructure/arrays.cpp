#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    //forma de arrays
    int numbers[5] ;

    try
    {
          for( int i =0; 7 > i; i++ ){
            ( i > size(numbers) ) ? throw runtime_error("Se ha desbordado la memoria") : (void)0;
            cout << "Ingrese un numer: \n";
            cin >> numbers[i];
           }
    }
    catch(const runtime_error& e)
    {
        cerr << e.what() << '\n';
    }

    //array dinamico con punteros
    int size = 0;
    int* newArray = new int[size];
    int& refSize = size;

    for( int i = 0; true; i++ ){

        int number;
        char option;

        cout << "Ingrese su numero: \n" ;
        cin >> number;
        newArray[i] = number;
        refSize = i + 1;

        cout << "Quieres dejar de ingresar numeros? [s] o [n] \n";
        cin >> option;

        if( tolower(option) == 's' ) break;

        else if( tolower(option) == 'n' ) continue;
        
        else continue; 
    }

    //ver elementos del array

    for( int i = 0; size > i; i++ ){
        cout << "Elemento " << newArray[i] << " posicion " << i;
    }

    delete[] newArray;

    return 0;
}
