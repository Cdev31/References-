#include <iostream>

using namespace std;

string onOpenDoor( string key ){

    bool* openDoor = nullptr;
   
    if( key == "kal@#46!" ) openDoor = new bool(true);
    
    if( openDoor == nullptr ) {
        delete openDoor; 
        return "Access denied";
    }

    delete openDoor;
    return "Welcome";
}


int main(int argc, char const *argv[])
{
    int numero1 = 10;
    cout << "Su numero esta en: " 
         << 
         //referencia a donde esta en memoria la variable
         &numero1 
         << endl;

    //pointers 
    int numero2 = 20;
    int* whereNumber2 = &numero2;

    //referencias
    int& ref = numero2;

    cout << "Su puntero es:" << whereNumber2 << endl;
    cout << "Su referencia es: " << &ref << " y " << &numero2 << endl;

    //uso de punteros nulos, delete, new palabras reservadas


    // int* p = nullptr; //codigo de demostracion de error

    // cout << "Ingresa un caracter:" << endl;
    // cin >> *p;
    
    // cout << "P esta en: " << p << "\n";

    //aplicacion de punteros inicializados nulos
    string key;
    cout << "Ingresa tu llave de acceso: \n";
    cin >> key;

    string isOpenDoor = onOpenDoor( key );

    cout << isOpenDoor << "\n";
   
    return 0;
}
