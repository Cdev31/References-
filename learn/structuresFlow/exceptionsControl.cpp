#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //ejemplo de error
    int numero1, numero2;
    bool integer[4] ;

    cout << "Ingrese su primer numero: \n";
    cin >> numero1;

    cout << "Ingrese su segundo numero: \n";
    cin >> numero2;

    try
    {
        ( numero2 == 0 ) ? throw runtime_error("Division por cero invalida") : (void)0;

        int result = (numero1 / numero2);

        cout << "Su division es: " << result << "\n";
    }
    catch(const runtime_error e)
    {
        cerr << e.what() << '\n';
    }

   
    

    return 0;
}
