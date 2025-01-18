#include "../include/Paciente.hpp"
#include <iostream>
#include <vector>

Paciente::Paciente(const std::string& id, const std::string& nombre, int edad)
    : id(id), nombre(nombre),edad(edad) ,  {
}

std::string Paciente::getId() const { return id; }
std::string Paciente::getNombre() const { return nombre; }
int Paciente::getEdad() const { return edad; }

void Paciente::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Paciente::mostrarInformacion() const {
    std::cout << "===============================\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Edad: " << edad << " años\n";
    std::cout << "===============================\n";
}

void Paciente::agregarEntradaHistorial(const std::string& entrada) {
    historialClinico.push_back(entrada);
    std::cout << "Entrada agregada al historial clínico.\n";
}

void Paciente::mostrarHistorial() const {
    std::cout << "Historial clínico de " << nombre << " (ID: " << id << "):\n";
    for (int i = 0; i < historialClinico.size(); i++) {
        std::cout << "- " << historialClinico[i] << "\n";
    }
}

void eliminarPacientePorId(std::vector<Paciente>& pacientes, const std::string& idBuscado) {
    for (int i = 0; i < pacientes.size(); i++) {
        if (pacientes[i].getId() == idBuscado) {
            pacientes.erase(pacientes.begin() + i);
            std::cout << "Paciente con ID " << idBuscado << " eliminado correctamente.\n";
            return;
        }
    }
    std::cout << "No se encontró ningún paciente con el ID especificado.\n";
}

void buscarPacientePorId(const std::vector<Paciente>& pacientes, const std::string& idBuscado) {
    bool encontrado = false;
    for (int i = 0; i < pacientes.size(); i++) {
        if (pacientes[i].getId() == idBuscado) {
            std::cout << "Paciente encontrado:\n";
            pacientes[i].mostrarInformacion();
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        std::cout << "No se encontró ningún paciente con el ID especificado.\n";
    }
}
