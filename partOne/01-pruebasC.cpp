#include "defines.h"
#include <iostream>

using namespace std;

int main()
{
    int number;
    int potency;

    cout << "Ingrese el numero\n";
    cin >> number;

    cout << "Ingrese la potencia\n";
    cin >> potency;

    int result = POTENCIACION( number, potency );

    cout << "su resultado es:" << result << endl;
    return 0;
}
