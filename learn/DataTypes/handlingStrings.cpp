#include <iostream>
#include <string>

int main() {
    // 1. Crear una string
    std::string str1 = "Hola";
    std::string str2 = "Mundo";
    std::cout << "Concatenado: " << str1 << " " << str2 << std::endl;

    // 2. Obtener la longitud de una string
    std::cout << "Longitud de str1: " << str1.size() << std::endl;
    std::cout << "Longitud de str2: " << str2.length() << std::endl;

    // 3. Concatenar strings
    std::string str3 = str1 + " " + str2;
    std::cout << "Concatenado con +: " << str3 << std::endl;
    
    str1 += " Mundo";
    std::cout << "Concatenado con +=: " << str1 << std::endl;

    // 4. Acceder a caracteres individuales
    std::cout << "Primer carácter de str1: " << str1[0] << std::endl;
    std::cout << "Segundo carácter de str1: " << str1.at(1) << std::endl;

    // 5. Comparar strings
    std::string str4 = "Hola";
    if (str1 == str4) {
        std::cout << "str1 y str4 son iguales" << std::endl;
    } else {
        std::cout << "str1 y str4 son diferentes" << std::endl;
    }

    if (str1.compare(str2) != 0) {
        std::cout << "str1 y str2 son diferentes" << std::endl;
    }

    // 6. Subcadenas
    std::string subStr = str3.substr(5, 5);  // Empieza en el índice 5, extrae 5 caracteres
    std::cout << "Subcadena de str3: " << subStr << std::endl;

    // 7. Buscar en una string
    size_t pos = str3.find("Hola");
    if (pos != std::string::npos) {
        std::cout << "'Hola' encontrado en: " << pos << std::endl;
    }
    
    pos = str3.rfind("Hola");
    if (pos != std::string::npos) {
        std::cout << "'Hola' encontrado por última vez en: " << pos << std::endl;
    }

    // 8. Reemplazar partes de una string
    std::string str5 = "Hola Mundo";
    str5.replace(5, 5, "C++");  // Reemplaza desde el índice 5, 5 caracteres por "C++"
    std::cout << "Reemplazado: " << str5 << std::endl;

    // 9. Insertar una subcadena
    str5.insert(5, "C++ ");  // Inserta "C++ " en el índice 5
    std::cout << "Insertado: " << str5 << std::endl;

    // 10. Eliminar caracteres
    str5.erase(4, 6);  // Elimina desde el índice 4, 6 caracteres
    std::cout << "Después de eliminar: " << str5 << std::endl;

    // 11. Convertir a C-string
    const char* cstr = str5.c_str();
    std::cout << "C-string: " << cstr << std::endl;

    // 12. Limpiar la cadena
    str5.clear();  // Limpia la cadena
    if (str5.empty()) {
        std::cout << "La cadena está vacía" << std::endl;
    }

    return 0;
}
