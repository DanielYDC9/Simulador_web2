#include <string>
#include <iostream>
#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"

Medico::Medico(const std::string& nombre, const std::string& especialidad)
    : nombre(nombre), especialidad(especialidad) {
}

const std::string& Medico::getNombre() const {
    return nombre;
}

const std::string& Medico::getEspecialidad() const {
    return especialidad;
}

void Medico::mostrarInformacion() const {
    std::cout << "Médico: " << nombre << ", Especialidad: " << especialidad << std::endl;
}
