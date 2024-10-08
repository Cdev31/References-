#include <iostream>

using namespace std;

struct Nodo{
    int data;
    Nodo *next;
};

bool isEmptyQueue( Nodo *front){
    return ( front == NULL ) ? true : false;
}

void insertQueue( Nodo *&front, Nodo *&end, int n ){
    Nodo *newNode = new Nodo();

    newNode->data = n;
    newNode->next = NULL;

    if( isEmptyQueue( front ) ){
        front = newNode;
    }
    else {
        end->next = newNode;
    }
    end = newNode;
}



int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
