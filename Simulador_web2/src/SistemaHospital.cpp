#include "../include/SistemaHospital.hpp"
#include <iostream>

// Agregar un paciente al sistema
void SistemaHospital::agregarPaciente(const Paciente& paciente) {
    pacientes.push_back(paciente);
    std::cout << "Paciente agregado: " << paciente.getNombre() << std::endl;
}

// Agregar un médico al sistema
void SistemaHospital::agregarMedico(const Medico& medico) {
    medicos.push_back(medico);
    std::cout << "Médico agregado: " << medico.getNombre() << " - Especialidad: " << medico.getEspecialidad() << std::endl;
}

// Asignar una cita médica al sistema
void SistemaHospital::asignarCita(const CitaMedica& cita) {
    citas.push_back(cita);
    std::cout << "Cita asignada para el paciente ID: " << cita.getIdPaciente() << " en la fecha: " << cita.getFecha() << std::endl;
}

// Mostrar todos los datos registrados en el sistema hospitalario
void SistemaHospital::mostrarDatos() const {
    std::cout << "\n=== Pacientes registrados ===\n";
    for (const auto& paciente : pacientes) {
        paciente.mostrarInformacion();
    }

    std::cout << "\n=== Médicos registrados ===\n";
    for (const auto& medico : medicos) {
        medico.mostrarInformacion();
    }

    std::cout << "\n=== Citas programadas ===\n";
    for (const auto& cita : citas) {
        cita.mostrarInformacion();
    }
}
