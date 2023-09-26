#include <iostream>

using namespace std;

int main() {
    char operatorr;
    double angka1, angka2;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operatorr;

    cout << "Masukkan dua angka: ";
    cin >> angka1 >> angka2;

    switch (operatorr) {
        case '+':
            cout << angka1 << " + " << angka2 << " = " << angka1 + angka2;
            break;
        case '-':
            cout << angka1 << " - " << angka2 << " = " << angka1 - angka2;
            break;
        case '*':
            cout << angka1 << " * " << angka2 << " = " << angka1 * angka2;
            break;
        case '/':
            if (angka2 != 0) {
                cout << angka1 << " / " << angka2 << " = " << angka1 / angka2;
            } else {
                cout << "Tidak dapat membagi dengan nol.";
            }
            break;
        default:
            cout << "Operator tidak valid.";
            break;
    }

    return 0;
}
