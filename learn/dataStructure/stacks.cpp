#include <iostream>

using namespace std;
//punteros como referencia

struct Nodo {
    int data;
    Nodo *next;
};
//insertar pila
void addStack( Nodo *&stack, int n ){
    Nodo *newNode = new Nodo();
    newNode->data = n;
    newNode->next = stack;
    stack = newNode;
}
//eliminar pila
void deleteStack( Nodo *&stack, int &n ){
    Nodo *aux = stack;
    n= aux->data;
    stack = aux->next;
    delete aux;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
