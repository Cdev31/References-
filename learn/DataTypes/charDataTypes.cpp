#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char caracter1 = 'a', caracterPrueba;
    wchar_t caracter2 = L'θ', caracter1Prueba; // windows 2 bytes , linux 4 bytes 
    char16_t caracter3 = u'⊕', caracter2Prueba; // 2 bytes
    char32_t caracter4 = U'≢', caracter3Prueba; // 4 bytes
    char saludo[20];
    string saludo2;

    // Ω ingrese este caracter
    cout << "Ingrese un caracter:\n";
    cin >> caracterPrueba;

    cout << caracterPrueba << endl;

    // ≢ ingrese este caracter ( el wcout y wcin sirve para trabajar con unicode)
    wcout << L"Ingrese un caracter:\n";
    wcin >> caracter1Prueba;

    wcout << caracter1Prueba << endl;

    // ⊕ ingrese este caracter
    // cout << u"Ingrese un caracter:\n";
    // cin >> caracter2Prueba; // error de sintaxis

    // cout << caracter2Prueba << endl;

    //Ingrese un saludo
    cout << "Ingrese su saludo: ";
    cin >> saludo;

    cout << "Su saludo es:" << saludo << endl;

    //Ingrese su segundo saludo
    cout << "Ingrese su segundo saludo: \n";
    cin >> saludo2;

    cout << "Su saludo es:" << saludo2 << endl;
    return 0;
}
