#include "SistemaHospital.hpp"
#include <iostream>

void SistemaHospital::agregarPaciente(const Paciente& paciente) {
    pacientes.push_back(paciente);
}

void SistemaHospital::agregarMedico(const Medico& medico) {
    medicos.push_back(medico);
}

void SistemaHospital::asignarCita(const CitaMedica& cita) {
    citas.push_back(cita);
}

void SistemaHospital::mostrarDatos() const {
    std::cout << "\nPacientes registrados:\n";
    for (const auto& paciente : pacientes) {
        paciente.mostrarInformacion();
    }
    std::cout << "\nMédicos registrados:\n";
    for (const auto& medico : medicos) {
        medico.mostrarInformacion();
    }
    std::cout << "\nCitas programadas:\n";
    for (const auto& cita : citas) {
        cita.mostrarInformacion();
    }
}
