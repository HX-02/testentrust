#include <iostream>
using namespace std;

int main() {
    
    int lines = 0; //numero de lineas
    int pages = 0; //numero de paginas
    int chars = 0; //numeros de caracteres
    
    string s;
    string final;
    
    while (cin >> s) {
	    chars += s.size() + 1; //numero de caracteres que hay en una linea
        final += s + ' '; 

        if (chars >= 80) {
            final += '\n';
            ++lines; //cambio de linea

            if (lines == 25) {
                final = final + "**************" + to_string(pages+1) + "**************" + '\n';
                ++pages; //cambio de pagina
                lines = 0; //reinicio la cuenta de lineas
            }
            chars = 0; //reinicio la cuenta de caracteres
        }
    }
    cout << final;
}
