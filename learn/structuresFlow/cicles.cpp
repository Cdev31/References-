#include <iostream>

using namespace std;

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


    return 0;
}
