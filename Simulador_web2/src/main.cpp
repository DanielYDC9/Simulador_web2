#include <iostream>
#include <string>
#include "../include/CitaMedica.hpp"
#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/SistemaHospital.hpp"



void mostrarMenu() {
    std::cout << "\n=== Sistema Hospitalario ===\n";
    std::cout << "1. Agregar paciente\n";
    std::cout << "2. Agregar médico\n";
    std::cout << "3. Asignar cita médica\n";
    std::cout << "4. Mostrar todos los datos\n";
    std::cout << "5. Salir\n";
    std::cout << "Seleccione una opción: ";
}

void limpiarBuffer() {
    std::cin.clear();               // Limpiar el estado de error
    std::cin.ignore(1000, '\n');    // Limpiar el buffer residual
}

void agregarPaciente(SistemaHospital& sistema) {
    std::string nombre;
    int id;

    std::cout << "Ingrese nombre del paciente: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    std::cout << "Ingrese ID del paciente: ";
    while (!(std::cin >> id)) {
        std::cout << "ID inválido. Intente nuevamente: ";
        limpiarBuffer();
    }

    sistema.agregarPaciente(Paciente(nombre, id));
    std::cout << "Paciente agregado correctamente.\n";
    limpiarBuffer();
}

void agregarMedico(SistemaHospital& sistema) {
    std::string nombre, especialidad;

    std::cout << "Ingrese nombre del médico: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    std::cout << "Ingrese especialidad del médico: ";
    std::getline(std::cin, especialidad);

    sistema.agregarMedico(Medico(nombre, especialidad));
    std::cout << "Médico agregado correctamente.\n";
}

void asignarCita(SistemaHospital& sistema) {
    int idPaciente;
    std::string fecha;

    // Solicitar ID del paciente con validación
    while (true) {
        std::cout << "Ingrese ID del paciente para la cita: ";
        std::cin >> idPaciente;

        if (std::cin.fail()) {
            std::cout << "ID inválido. Debe ingresar un número entero. Intente de nuevo.\n";
            limpiarBuffer();
        }
        else {
            std::cin.ignore();  // Limpiar buffer antes de getline
            break;
        }
    }

    // Solicitar fecha
    std::cout << "Ingrese fecha de la cita (YYYY-MM-DD): ";
    std::getline(std::cin, fecha);

    // Validar que la fecha no esté vacía
    while (fecha.empty()) {
        std::cout << "La fecha no puede estar vacía. Intente nuevamente: ";
        std::getline(std::cin, fecha);
    }

    sistema.asignarCita(CitaMedica(idPaciente, fecha));
    std::cout << "Cita asignada correctamente.\n";
}

int main() {
    SistemaHospital sistema;
    int opcion;

    do {
        mostrarMenu();
        std::cin >> opcion;

        if (std::cin.fail()) {
            std::cout << "Entrada inválida. Intente nuevamente.\n";
            limpiarBuffer();
            continue;
        }

        switch (opcion) {
        case 1:
            agregarPaciente(sistema);
            break;
        case 2:
            agregarMedico(sistema);
            break;
        case 3:
            asignarCita(sistema);
            break;
        case 4:
            sistema.mostrarDatos();
            break;
        case 5:
            std::cout << "Saliendo del sistema...\n";
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente.\n";
            break;
        }
    } while (opcion != 5);

    return 0;
}


