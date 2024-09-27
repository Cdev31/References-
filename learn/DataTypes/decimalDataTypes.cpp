#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char const *argv[])
{
    float number1; // 4 bytes y 7 digitos decimales significativos aproximadamente
    double number2; // 8 bytes, 15 digitos decimales significativos aproxidamente
    long double number3; // de 8, 10, 12 o 16 bytes, de 18 a 21 decimales aproximadamente
    
    //numero tipo float
    cout << "Ingrese su numero1:\n" ;
    cin >> number1;

    cout << "Su numero 1 es: " << number1 << endl;

    //numero tipo double
    cout << "Ingrese su numero2:\n" ;
    cin >> number2;
    //primera sintaxis
    // fixed;
    setprecision(6);

    cout << "Su numero 2 es: " << number2 << endl;

    //numero tipo de long double
    cout << "Ingrese su numero3:\n" ;
    cin >> number3;

    cout << "Su numero 3 es: " << fixed << setprecision(15) << number3 << endl;

    return 0;
}
