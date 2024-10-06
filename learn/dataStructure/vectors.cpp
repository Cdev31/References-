#include <iostream>
#include <cctype>
#include "userDefine.h"

using namespace std;

bool createUser( User* user ){

    int size = Users.size();
    
    Users.push_back( *user );

    delete user;
    
    return ( size == Users.size() ) ? false :  true;

}

void enlistUsers(){
    int counter = 0;
    while( size(Users) > counter ){
        cout << "Informacion de usuarion no." << (counter + 1) << "\n";
        cout << "Nombre: " << Users[counter].name << endl;
        cout << "Email: " << Users[counter].email << endl;
        counter++;
    }
}

void handlingOperation( int option ){
    if( option == 1 ){
        User* newUser = new User;

        cout << "Ingrese el nombre del usuario: \n";
        cin >> newUser->name;

        cout << "Ingrese el email del usuario: \n";
        cin >> newUser->email;

        cout << "Ingrese la contraseña del usuario: \n";
        cin >> newUser->password;

        bool isCreated =  createUser( newUser );

        cout << (( isCreated ) ? "Usuario creado exitosamente": "No se puedo crear el usuario") << "\n";
    }
    else if( option == 2 ){
        enlistUsers();
    }
}

int main(int argc, char const *argv[])
{
    bool exit = false;
    int option;
    char wantToExit;

    while(true){
     cout << "-------Bienvenido------\n";
     cout << "1.Agregar usuario.\n2.Enlistar informacion de usuarios\n";
     cin >> option;

     handlingOperation(option);
     cout << "Desear salir? [s] [n]\n";
     cin >> wantToExit;

     ( tolower(wantToExit) == 's' ) ? exit = true : exit = false; 

     if( exit ) break;

    }
    return 0;
}
