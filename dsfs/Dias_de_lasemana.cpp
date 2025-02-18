#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mostrarDias(const vector<string>& dias) {
    for (size_t i = 0; i < dias.size(); ++i) {
        cout << i + 1 << ". " << dias[i] << endl;
    }
}

int obtenerPosicionDia(const vector<string>& dias, const string& dia) {
    for (size_t i = 0; i < dias.size(); ++i) {
        if (dias[i] == dia) {
            return i + 1;
        }
    }
    return -1; // Retorna -1 si el día no se encuentra
}

int main() {
    vector<string> diasSemana = {"Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
    int opcion;
    do {
        cout << "\nMenu:\n1. Mostrar todos los días de la semana\n2. Obtener posición de un día\n3. Salir\nSeleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarDias(diasSemana);
                break;
            case 2: {
                string dia;
                cout << "Ingrese el nombre del día: ";
                cin >> dia;
                int posicion = obtenerPosicionDia(diasSemana, dia);
                if (posicion != -1) {
                    cout << "El día " << dia << " está en la posición " << posicion << " de la semana." << endl;
                } else {
                    cout << "Día no encontrado." << endl;
                }
                break;
            }
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 3);
    return 0;
}
