//
// Created by Melissa Belalcazar on 13/09/25.
//

#include <iostream>
using namespace std; //profe esto lo pongo para cada que tengo que imprimir datos
//o leer datos y imprimir cualquier cosa no tenga que estar poniendo std::cout o std::cin siempre

int main() {
    float nota,
    suma = 0;
    int aprobados = 0,
    reprobados = 0,
    excelentes = 0;

    for (int i = 1; i <= 8; i++) {
        cout << "ingrese la nota del estudiante" << i << ": ";
        cin >> nota;

        suma = suma + nota;

        if (nota >= 3.0) {
            aprobados++;
            if (nota >= 4.5) {
                excelentes++;
            }
        } else {
            reprobados++;
        }
    }

    float promedio = suma / 8;

    cout << "estudiantes aprobados: " << aprobados << endl;
    cout << "estudiantes reprobados: " << reprobados << endl;
    cout << "estudiantes excelentes: " << excelentes << endl;
    cout << "promedio calificaciones del curso: " << promedio << endl;

    return 0;
}
