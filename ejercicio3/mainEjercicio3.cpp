//
// Created by Melissa Belalcazar on 13/09/25.
//

#include <iostream>
using namespace std;

int main() {
    int n, num, anterior;
    bool ascedente = true;

    cout << "por favor ingrese la cantidad de numeros: ";
    cin >> n;

    if (n > 0) {
        cout << "numero 1: ";
        cin >> anterior;

        for (int i = 2; i <= n; i++) {
            cout << "numero " << i << ": ";
            cin >> num;
            if (num <= anterior) {
               ascedente  = false;
            }
            anterior = num;
        }

        if (ascedente) {
            cout << "la secuencia es ascendente" << endl;
        }

        else {
            cout << "la secuencia NO es ascendente" << endl;
        }
    }

    return 0;
}
