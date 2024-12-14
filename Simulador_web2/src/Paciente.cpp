#include <iostream>
#include "../include/Medico.hpp"
#include "../include/Paciente.hpp"


Paciente::Paciente(const std::string& nombre, int id)
    : nombre(nombre), id(id) {
}

int Paciente::getId() const {
    return id;
}

const std::string& Paciente::getNombre() const {
    return nombre;
}

void Paciente::mostrarInformacion() const {
    std::cout << "Paciente: " << nombre << ", ID: " << id << std::endl;
}
