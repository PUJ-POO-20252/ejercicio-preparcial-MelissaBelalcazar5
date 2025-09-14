//
// Created by Melissa Belalcazar on 13/09/25.
//

#include <iostream>
using namespace std;

void ejercicio4() {
    float precio, total;
    int cantidad;

    cout << "por favor ingrese el precio unitario: ";
    cin >> precio;
    cout << "por favor ingrese la cantidad: ";
    cin >> cantidad;

    total = precio * cantidad;

    if (cantidad >= 11 && cantidad <= 20) {
        total = total * 0.95;
    }

    else if (cantidad >= 21 && cantidad <= 50) {
        total = total * 0.90;
    }

    else if (cantidad > 50) {
        total = total * 0.85;
    }

    cout << "total a pagar: " << total << endl;

    return;
}
