#include <iostream>

using namespace std;

int main() {

    int edad;
    int* pEdad = &edad;

    cout << "Ingrese la edad del usuario: ";
    cin >> *pEdad;

    if (*pEdad >= 18) {
        cout << "\n=== ACCESO APROBADO ===" << endl;
        cout << "Edad registrada: " << *pEdad << endl;
        cout << "Direccion de memoria: " << pEdad << endl;
    }
    else {
        cout << "\n=== ACCESO DENEGADO ===" << endl;
        cout << "El usuario es menor de edad." << endl;
    }

    return 0;
}git