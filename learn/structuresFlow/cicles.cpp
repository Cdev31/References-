#include <iostream>
#include <limits>

using namespace std;

//Otros temas: etiquetas en bucles, bucles con rango, foreach, punteros con bucle.
int main(int argc, char const *argv[])
{
    string password, email;
    bool validData = false;

    //ciclo while
    int counter = 0;
    while( 6 > counter ){
        cout << "6 es mayor que:" << counter << "\n";
        counter = counter + 1;
    }

    char letra;

    while( letra != 'x' ){
        cout << "Ingrese una letra" << endl;
        cin >> letra;
    }

    //bucle mas complejo
    cout << "Ingrese un password" << "\n";
    cin >> password;

    cout << "Ingrese un email" << "\n";
    cin >> email;

    while( sizeof(password) > 0 && sizeof(email) > 0 && validData == false ){
        if( email.find("@") != string::npos && email.find(".com") != string::npos ){
            cout << "Bienvenido\n";
            validData = true;
        }else{
            cout << "Ingrese un email correcto" << "\n";
            cin >> email;
        }
    }

   //lo mismo pero con un ciclo for

   for( int counter = 0; 6 > counter; counter++ ){
      cout << "6 es mayor que:" << counter << "\n";
    }

    //segundo bucle

    for( char letra; letra != 'x'; cin >> letra ){
        cout << "Ingrese una letra" << endl;
    }

    //for como bucle mas complejo

    for( bool validData = false; validData == false;  ){
        string password, email;

        cout << "Ingrese un password" << "\n";
        cin >> password;

        cout << "Ingrese un email" << "\n";
        cin >> email;

        if( email.find("@") != string::npos && email.find(".com") != string::npos ){
            
            cout << "Bienvenido\n";
            validData = true;

        }else{
            cout << "Ingrese un email correcto" << "\n";
            cin >> email;
        }
    }

    //uso de break y continue

    cout << "Uso de brack y continue \n";
    char letra2 = 'a';

    while( letra2 != 'x' ){
        cout << "Ingrese una letra" << endl;
        cin >> letra2;
        if( letra2 == 'z' ){
            break;
        }
        else if( typeid(letra2) == typeid(int) ){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue;
        }
    }
    
    //do while y decrementos
    cout << "Uso de do while \n";

    int i = 10;
    do {
        cout << "Valor de i: " << i << endl;
        i--;
    } while (i > 0);

    return 0;
}
