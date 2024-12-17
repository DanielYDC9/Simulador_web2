#include <iostream>
#include <string>
#include "../include/CitaMedica.hpp"
#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/SistemaHospital.hpp"

using namespace std;

void mostrarMenu() {
    std::cout << "\n=== Sistema Hospitalario ===\n";
    std::cout << "1. Agregar paciente\n";
    std::cout << "2. Agregar médico\n";
    std::cout << "3. Asignar cita médica\n";
    std::cout << "4. Mostrar todos los datos\n";
    std::cout << "5. Salir\n";
    std::cout << "Seleccione una opción: ";
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

    cout << "\nCitas programadas:\n";
    for (const auto& cita : citas) {
        cita.mostrarCita();
    }

    return 0;
}

