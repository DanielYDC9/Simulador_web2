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


void SistemaHospital::mostrarPacientes() const {
    for (const auto& paciente : pacientes) {
        paciente.mostrarInformacion();
    }
}

void SistemaHospital::agregarMedico(const std::string& id, const std::string& nombre, const std::string& especialidad, int edad) {
    medicos.emplace_back(id, nombre, especialidad, edad);
}

void SistemaHospital::eliminarMedico(const std::string& id) {
    medicos.erase(std::remove_if(medicos.begin(), medicos.end(),
        [&id](const Medico& medico) { return medico.getId() == id; }), medicos.end());
}

   void SistemaHospital::buscarMedico(const std::string& id) const {
    for (const auto& medico : medicos) {
        if (medico.getId() == id) {
            medico.mostrarInformacion();
            return;
        }
    }
    std::cout << "Médico no encontrado.\n";
}

void SistemaHospital::mostrarMedicos() const {
    for (const auto& medico : medicos) {
        medico.mostrarInformacion();
    }
}

void SistemaHospital::agregarCita(const std::string& idCita, const std::string& idPaciente, const std::string& idMedico, const std::string& fecha, const std::string& motivo) {
    citas.emplace_back(idCita, idPaciente, idMedico, fecha, motivo);
}

void SistemaHospital::cancelarCita(const std::string& idCita) {
    citas.erase(std::remove_if(citas.begin(), citas.end(),
        [&idCita](const CitaMedica& cita) { return cita.getIdCita() == idCita; }), citas.end());
}

void SistemaHospital::mostrarCitas() const {
    for (const auto& cita : citas) {
        cita.mostrarInformacion();
    }
}
