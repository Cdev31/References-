#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //condicional if, else if, else switch y sentencia ternaria

    int number1, number2, number3;
    int opcionDeDia;

    cout << "Ingrese su primer numero: \n";
    cin >> number1;

    cout << "Ingrese su segundo numero: \n";
    cin >> number2;

    cout << "Ingrese su tercer numero: \n";
    cin >> number3;

    if( number1 > number2 && number2 > number3 ){ 
        cout << "el numero 1 es el mayor de todos\n";
    }
    else if ( number1 > number2 && number3 > number1 ){
        cout << "el numero 3 es mayor que todos\n";
    }
    else {
         cout << "el numero 2 es mayor que todos\n";
    }

    //condicionales anidadas

    if( number1 > number2 ){
         if( number3 > number1 ){
            cout << "El numero 3 es mayor que todos\n";
         }
         cout << " El numero 1 es mayor que todos\n";
    }

    cout << "El numero 2 es mayor que todos\n";

    //switch

    cout << "Ingrese numero de dia: \n";
    cin >> opcionDeDia;

    switch (opcionDeDia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Número no válido. Por favor, ingresa un número del 1 al 7." << endl;
    }

   // condicional ternario
   string username;
   cout << "Ingrese su nombre de usuario: \n";
   cin >> username;

   bool isUser = ( username == "Cdev31" ) ? true : false;

   cout << ( isUser == false ? "no eres un usuario\n" : "Bienvenido\n");
   
   cout << "Ingrese su nombre de usuario: \n";
   cin >> username;

   string isUser2 = ( username == "Cdev31" ) ? "Bienvenido" : "No eres un usuario";

   cout << isUser2 << "\n";

    return 0;
}
