//
// Created by Melissa Belalcazar on 13/09/25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "por favor ingrese una palabra: ";
    cin >> palabra;

    bool encontrado = false;

    for (int i = 0; i < palabra.size(); i++) {
        char c = palabra[i];
        int cont = 0;
        for (int j = 0; j < palabra.size(); j++) {
            if (palabra[j] == c) {
                cont++;
            }
        }
        if (cont == 1) {
            cout << "primer caracter no repetido: " << c << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "todos los caracteres se repiten" << endl;
    }

    return 0;
}
