#include <iostream>
#include <cstdint>
 

int main(int argc, char const *argv[])
{
    typedef int short _my_long; // definicion de tipo o alias

    // litle-edian y big-edian

    // tipos de datos enteros
    int unsigned numero1; //4 bytes = 32 bits = -+2,147,483,647
    int short numero2; // 2 bytes = 16 bits = -+ 32,767
    long numero3; // 4 u 8 bytes = 32 o 64 bits = -+9,223,372,036,854,775,808 o +-2,147,483,647
    long long numero4; // 8 bytes = 64 bits = -+9,223,372,036,854,775,808
    _my_long numero5;
    __int8_t numero6;

    int unsigned other; //solo positivos
    int signed others; // ambos

    //INTENTE DESBORDAR LOS TAMAÑOS MAXIMOS DE DATOS

    //tipo entero
    std::cout << "[1] Ingrese un numero:\n";
    std::cin >> numero1;

    std::cout << "Su numero es:" << numero1 << std::endl;

    //tipo short
    std::cout << "[2] Ingrese un numero:\n";
    std::cin >> numero2;

    std::cout << "Su numero es:" << numero2 << std::endl;

    //tipo long
    std::cout << "[3] Ingrese un numero:\n";
    std::cin >> numero3;

    std::cout << "Su numero es:" << numero3 << std::endl;

    //tipo long long
    std::cout << "[4] Ingrese un numero:\n";
    std::cin >> numero4;

    std::cout << "Su numero es:" << numero4 << std::endl;

    //mi tipo
    std::cout << "[5] Ingrese un numero:\n";
    std::cin >> numero5;

    std::cout << "Su numero es:" << numero5 << std::endl;

    //tipo de un byte
    std::cout << "[6] Ingrese un numero:\n";
    std::cin >> numero1;

    __int8_t numero6_nuevo = static_cast< __int8_t >(numero1);

    std::cout << "Su numero es:" << (int)numero6_nuevo << std::endl;

    //tipo de un byte incorrectamente
    std::cout << "[6.1] Ingrese un numero:\n";
    std::cin >> numero6;

    std::cout << "Su numero es:" << (int)numero6 << std::endl;
    return 0;
}
