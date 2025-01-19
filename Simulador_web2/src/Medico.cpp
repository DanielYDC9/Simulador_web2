#include "../include/Medico.hpp"
#include <iostream>

Medico::Medico(const std::string& id, const std::string& nombre, const std::string& especialidad, int edad)
    : id(id), nombre(nombre), especialidad(especialidad), edad(edad) {
}

std::string Medico::getId() const { return id; }
std::string Medico::getNombre() const { return nombre; }
std::string Medico::getEspecialidad() const { return especialidad; }
int Medico::getEdad() const { return edad; }

void Medico::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Medico::setEspecialidad(const std::string& nuevaEspecialidad) {
    especialidad = nuevaEspecialidad;
}

void Medico::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

void Medico::mostrarInformacion() const {
    std::cout << "===============================\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Especialidad: " << especialidad << "\n";
    std::cout << "Edad: " << edad << " años\n";
    std::cout << "===============================\n";

bool Medico::esIgual(const std::string& idBuscado) const {
    return id == idBuscado;
}

void eliminarMedicoPorId(std::vector<Medico>& medicos, const std::string& idBuscado) {
    for (int i = 0; i < medicos.size(); i++) {
        if (medicos[i].getId() == idBuscado) {
            medicos.erase(medicos.begin() + i);
            std::cout << "Medico con ID " << idBuscado << " eliminado correctamente.\n";
            return;
        }
    }
    std::cout << "No se encontró ningún médico con el ID especificado.\n";
}

void buscarMedicoPorId(const std::vector<Medico>& medicos, const std::string& idBuscado) {
    bool encontrado = false;
    for (int i = 0; i < medicos.size(); i++) {
        if (medicos[i].getId() == idBuscado) {
            std::cout << "Medico encontrado:\n";
            medicos[i].mostrarInformacion();
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        std::cout << "No se encontró ningún médico con el ID especificado.\n";
    }
}

