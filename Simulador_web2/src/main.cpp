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

    cout << "\nMédicos registrados:\n";
    for (const auto& medico : medicos) {
        medico.mostrarMedico();
    }

    cout << "\nCitas programadas:\n";
    for (const auto& cita : citas) {
        cita.mostrarCita();
    }

    return 0;
}

