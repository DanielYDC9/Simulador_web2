#include "../include/Medico.hpp"
#include <iostream>

Medico::Medico(const std::string& id, const std::string& nombre, const std::string& especialidad, int edad)
    : id(id), nombre(nombre), especialidad(especialidad), edad(edad) {
}

std::string Medico::getId() const { return id; }
std::string& Medico::getNombre() const { return nombre; }
std::string& Medico::getEspecialidad() const { return especialidad; }
int Medico::getEdad() const { return edad; }
}
void Medico::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Medico::setEspecialidad(const std::string& nuevaEspecialidad) {
    especialidad = nuevaEspecialidad;
}

void Medico::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
void Medico::mostrarInformacion() const {
    std::cout << "===============================\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Especialidad: " << especialidad << "\n";
    std::cout << "Edad: " << edad << " años\n";
    std::cout << "===============================\n";
