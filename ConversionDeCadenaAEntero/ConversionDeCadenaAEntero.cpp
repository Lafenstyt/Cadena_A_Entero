#include <iostream>
#include <cstdlib> // Biblioteca necesaria para atoi()
using namespace std;
int main() {
const char* str = "1234"; // Cadena de caracteres que representa un n�mero entero
int num = atoi(str); // Convierte la cadena a un n�mero entero
cout << "La cadena \"" << str << "\" convertida a entero es: " << num << endl;
return 0;
}
