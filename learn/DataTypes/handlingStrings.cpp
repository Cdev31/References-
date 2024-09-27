#include <iostream>

using namespace std;

string validacionNombre ( string name ){
    
    cout << "Su nombre es: " << name << "de tamaño:"  << name.size() << endl;

    if( name.size() > 10  ){

        return "EL nombre no puede ser mayor a 10 caracteres";

    }
    else if( name.size() < 3 ){

        return "El nombre no puede ser menor a 3 caracteres";

    } else return "EL nombre: " + name + " es valido :D";

}

string limpiarCaracterBasura( string apellido ){
    string nuevoApellido = "";

    int counter = 0;

    while( apellido.size() > counter ){

        if( apellido[counter] != '!' &&  
            apellido[counter] != '$' &&  
            apellido[counter] != '@' 
        ){
           
            //1-( numero de veces a incertar el caracter ) 2-(caracter)
            nuevoApellido.append(1 , apellido[counter]);
            //nuevoApellido += apellido[counter]; - otra forma

        }

        counter++;

    }

    return nuevoApellido;

}

string censurarMalasPalabras( string descripcion, string malaPalabra ){

    string nuevaDescripcion = descripcion;
     
    //devuelve la posicion de inicio de la palabra
    size_t indiceInicioMalapalabra = descripcion.find( malaPalabra );
    size_t indiceFinalMalapabra = indiceInicioMalapalabra + malaPalabra.length();

    if( indiceInicioMalapalabra != string::npos ){
    
        nuevaDescripcion.replace( indiceInicioMalapalabra, indiceFinalMalapabra , "@3$32!" );
    }
    
    return nuevaDescripcion;

}

int main (){
     /* METODOS DE MANIPULACION DE TEXTO */
     string nombre, apellido, descripcion = "", email;

    //validacion del nombre no debe ser mayor a 10 caracteres y menor de 3
     cout << "Ingrese su nombre: ";
     cin >> nombre;

     string esNombreValido = validacionNombre( nombre );

     cout << esNombreValido << endl;

    //Limpieza de palabras
    cout << "Ingrese su apellido: ";
    cin >> apellido;

    string nuevoApellido = limpiarCaracterBasura( apellido );

    cout << "Su apellido es: " << nuevoApellido << endl;

    //censurar malas palabras
    cout << "Ingrese una descripcion: ";
    //captura toda la linea
    getline( cin, descripcion );

    string nuevaDescripcion = censurarMalasPalabras( descripcion, "imbecil" );

    cout << "Su nueva descripcion es: " << nuevaDescripcion << endl;

     return 0;
}