#include "../include/SistemaHospital.hpp"
#include <fstream>
#include <sstream>
#include <algorithm>

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

void SistemaHospital::guardarDatos() const {
    std::ofstream archivo("datos.txt");
    if (archivo.is_open()) {
        // Guardar pacientes
        archivo << "PACIENTES\n";
        for (const auto& paciente : pacientes) {
            archivo << paciente.getId() << "," << paciente.getNombre() << "," << paciente.getEdad() << "\n";
        }

        // Guardar médicos
        archivo << "MEDICOS\n";
        for (const auto& medico : medicos) {
            archivo << medico.getId() << "," << medico.getNombre() << "," << medico.getEspecialidad() << "," << medico.getEdad() << "\n";
        }

        // Guardar citas
        archivo << "CITAS\n";
        for (const auto& cita : citas) {
            archivo << cita.getIdCita() << "," << cita.getIdPaciente() << "," << cita.getIdMedico() << "," << cita.getFecha() << "," << cita.getMotivo() << "\n";
        }

        archivo.close();
    }
}

void SistemaHospital::cargarDatos() {
    std::ifstream archivo("datos.txt");
    if (archivo.is_open()) {
        std::string linea;
        std::string seccion;


        while (std::getline(archivo, linea)) {
            if (linea == "PACIENTES" || linea == "MEDICOS" || linea == "CITAS") {
                seccion = linea;
            }
            else {
                std::istringstream ss(linea);
                if (seccion == "PACIENTES") {
                    std::string id, nombre;
                    int edad;
                    std::getline(ss, id, ',');
                    std::getline(ss, nombre, ',');
                    ss >> edad;
                    pacientes.emplace_back(id, nombre, edad);
                }
                else if (seccion == "MEDICOS") {
                    std::string id, nombre, especialidad;
                    int edad;
                    std::getline(ss, id, ',');
                    std::getline(ss, nombre, ',');
                    std::getline(ss, especialidad, ',');
                    ss >> edad;
                    medicos.emplace_back(id, nombre, especialidad, edad);
                }
                else if (seccion == "CITAS") {
                    std::string idCita, idPaciente, idMedico, fecha, motivo;
                    std::getline(ss, idCita, ',');
                    std::getline(ss, idPaciente, ',');
                    std::getline(ss, idMedico, ',');
                    std::getline(ss, fecha, ',');
                    std::getline(ss, motivo, ',');
                    citas.emplace_back(idCita, idPaciente, idMedico, fecha, motivo);
                }
            }
        }
        
        archivo.close();
    }
}
