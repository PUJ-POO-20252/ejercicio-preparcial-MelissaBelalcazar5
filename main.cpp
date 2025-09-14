//
// Created by Melissa Belalcazar on 13/09/25.
//

#include <iostream>
using namespace std;

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();

int main() {
    int opcion;

    do {
        cout << "\n---- MENU PRINCIPAL ----\n";
        cout << "1. ejercicio 1\n";
        cout << "2. ejercicio 2\n";
        cout << "3. ejercicio 3\n";
        cout << "4. ejercicio 4\n";
        cout << "5. ejercicio 5\n";
        cout << "6. ejercicio 6\n";
        cout << "0. salir\n";
        cout << "por favor seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: ejercicio1(); break;
            case 2: ejercicio2(); break;
            case 3: ejercicio3(); break;
            case 4: ejercicio4(); break;
            case 5: ejercicio5(); break;
            case 6: ejercicio6(); break;
            case 0: cout << "saliendo del programa......\n"; break;
            default: cout << "opcion invalida, por favor intentelo de nuevo\n"; break;
        }
    }
    while (opcion != 0);

    return 0;
}
