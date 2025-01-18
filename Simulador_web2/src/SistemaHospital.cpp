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

// Agregar un médico al sistema
void SistemaHospital::agregarMedico(const Medico& medico) {
    medicos.push_back(medico);
    std::cout << "Médico agregado: " << medico.getNombre()
        << " - Especialidad: " << medico.getEspecialidad() << "\n";
}

// Asignar una cita médica al sistema
void SistemaHospital::asignarCita(const CitaMedica& cita) {
    citas.push_back(cita);
    std::cout << "Cita asignada para el paciente ID: " << cita.getIdPaciente()
        << " en la fecha: " << cita.getFecha() << "\n";
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
