#include "../include/Paciente.hpp"
#include <iostream>
#include <vector>

Paciente::Paciente(const std::string& id, const std::string& nombre, int edad)
    : id(id), nombre(nombre),edad(edad) ,  {
}

int Paciente::getId() const {
    return id;
}

const std::string& Paciente::getNombre() const {
    return nombre;
}

void Paciente::mostrarInformacion() const {
    std::cout << "===============================\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Edad: " << edad << " años\n";
    std::cout << "===============================\n";
}
