#include <iostream>
#include <string>
#include "../include/CitaMedica.hpp"
#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/SistemaHospital.hpp"

using namespace std;

int main() {
    // Lista de pacientes, médicos y citas.
    vector<Paciente> pacientes;
    vector<Medico> medicos;
    vector<CitaMedica> citas;

    // Crear pacientes y médicos de ejemplo.
    pacientes.push_back(Paciente("Juan Perez", 1));
    pacientes.push_back(Paciente("Maria Lopez", 2));

    medicos.push_back(Medico("Dr. Gomez", "Cardiología"));
    medicos.push_back(Medico("Dra. Torres", "Pediatría"));

    // Asignar una cita.
    citas.push_back(CitaMedica(1, "2024-11-20"));

    // Mostrar datos.
    cout << "Pacientes registrados:\n";
    for (const auto& paciente : pacientes) {
        paciente.mostrar_paciente();
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

