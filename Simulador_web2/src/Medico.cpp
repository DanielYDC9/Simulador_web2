#include "../include/Medico.hpp"
#include <iostream>
#include <algorithm>

Medico::Medico(const std::string& id, const std::string& nombre, const std::string& especialidad, int edad)
    : id(id), nombre(nombre), especialidad(especialidad), edad(edad) {
}

std::string Medico::getId() const { return id; }
std::string Medico::getNombre() const { return nombre; }
std::string Medico::getEspecialidad() const { return especialidad; }
int Medico::getEdad() const { return edad; }

void Medico::setNombre(const std::string& nuevoNombre) { nombre = nuevoNombre; }
void Medico::setEspecialidad(const std::string& nuevaEspecialidad) { especialidad = nuevaEspecialidad; }
void Medico::setEdad(int nuevaEdad) { edad = nuevaEdad; }

void Medico::mostrarInformacion() const {
    std::cout << "===============================\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Especialidad: " << especialidad << "\n";
    std::cout << "Edad: " << edad << " años\n";
    std::cout << "===============================\n";
}

bool Medico::esIgual(const std::string& idBuscado) const {
    return id == idBuscado;
}

void eliminarMedicoPorId(std::vector<Medico>& medicos, const std::string& idBuscado) {
    medicos.erase(std::remove_if(medicos.begin(), medicos.end(),
        [&idBuscado](const Medico& medico) { return medico.esIgual(idBuscado); }), medicos.end());
}

void buscarMedicoPorId(const std::vector<Medico>& medicos, const std::string& idBuscado) {
    for (const auto& medico : medicos) {
        if (medico.esIgual(idBuscado)) {
            medico.mostrarInformacion();
            return;
        }
    }
    std::cout << "Médico no encontrado.\n";
}

