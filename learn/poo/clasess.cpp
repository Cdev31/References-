#include <iostream>

using namespace std;

class Book{

    // MODIFICADORES DE ACCESO PRIVADO 
    // este modificador le indica a la clase que solo puede usar esas variables en la misma 
    // clase.

    //forma agrupada
    private: 
       int id;
       char referencia;
       void reordenamiento();

    //forma implicita, (toda variable o funcion sin modificador sera privado)
    int referenciaInterna;

    // MODIFICADORES DE ACCESO PUBLICO
    // este modificador indica que cualquier instancia de la clase puede acceder a el
    // o sus subclases derivadas de esta

    //forma agrupada
    public:
       string name;
       string gender;

    //forma no agrupada
    public: void comprar();
    public: void listar();

    // MODIFICADOR STATIC
    // este indica que no es necesario crear una instancia de la clase para acceder
    // a esta variable o meotodo

    // codigo de ejemplo
    static void introduccion();

    //MODIFICADOR PROTECTED
    // este es igual que el private solo que este si permite que las clases derivadas
    // de la clase padre puedan acceder a las variables o metodos de este tipo.

    protected: int referenciaInterna; 
};


