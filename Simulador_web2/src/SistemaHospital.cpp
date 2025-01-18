#include "../include/SistemaHospital.hpp"
#include <fstream>
#include <sstream>

SistemaHospital::SistemaHospital() {
    cargarDatos();
}

SistemaHospital::~SistemaHospital() {
    guardarDatos();
}

void SistemaHospital::agregarPaciente(const std::string& id, const std::string& nombre, int edad) {
    pacientes.emplace_back(id, nombre, edad);
}

void SistemaHospital::eliminarPaciente(const std::string& id) {
pacientes.erase(std::remove_if(pacientes.begin(), pacientes.end(),
    [&id](const Paciente& paciente) { return paciente.getId() == id; }), pacientes.end());
}

void SistemaHospital::buscarPaciente(const std::string& id) const {
    for (const auto& paciente : pacientes) {
        if (paciente.getId() == id) {
            paciente.mostrarInformacion();
            return;
        }
    }
    std::cout << "Paciente no encontrado.\n";
}

// Mostrar todos los datos registrados en el sistema hospitalario
void SistemaHospital::mostrarDatos() const {
    // Mostrar pacientes
    std::cout << "\n=== Pacientes Registrados ===\n";
    if (pacientes.empty()) {
        std::cout << "No hay pacientes registrados.\n";
    }
    else {
        for (const auto& paciente : pacientes) {
            paciente.mostrarInformacion();
        }
    }

    // Mostrar médicos
    std::cout << "\n=== Médicos Registrados ===\n";
    if (medicos.empty()) {
        std::cout << "No hay médicos registrados.\n";
    }
    else {
        for (const auto& medico : medicos) {
            medico.mostrarInformacion();
        }
    }

    // Mostrar citas
    std::cout << "\n=== Citas Programadas ===\n";
    if (citas.empty()) {
        std::cout << "No hay citas programadas.\n";
    }
    else {
        for (const auto& cita : citas) {
            cita.mostrarInformacion();
        }
    }
}
