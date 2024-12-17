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

