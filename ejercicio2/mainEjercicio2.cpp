//
// Created by Melissa Belalcazar on 13/09/25.
//

#include <iostream>
using namespace std;

int main() {
    int edad,
    total = 0,
    jovenes = 0,
    perfectos = 0;
    float nota,
    suma = 0;

    cout << "por favor ingrese su edad (ponga 0 para terminar): ";
    cin >> edad;

    while (edad != 0) {
        cout << "por favor ingrese su calificacion (entre 1 y 10): ";
        cin >> nota;

        total = total + 1;
        suma = suma + nota;

        if (edad >= 18 && edad <= 25) {
            jovenes = jovenes + 1;
        }
        if (nota == 10) {
            perfectos = perfectos + 1;
        }

        cout << "por favor ingrese su edad (utilice 0 para terminar): ";
        cin >> edad;
    }

    cout << "total encuestados: " << total << endl;
    if (total > 0) {
        cout << "promedio: " << suma / total << endl;
    }
    cout << "total de jovenes entre loz 18 a 25: " << jovenes << endl;
    cout << "total calificaciones perfectas: " << perfectos << endl;

    return 0;
}