#include "../include/CitaMedica.hpp"


CitaMedica::CitaMedica(int idPaciente, const std::string& fecha) {
    : idPaciente(idPaciente), fecha(fecha) {}

int CitaMedica::getIdPaciente() const {
    return idPaciente;
}

const std::string& CitaMedica::getFecha() const {
    return fecha;
}

void CitaMedica::mostrarInformacion() const {
    std::cout << "Cita - ID Paciente: " << idPaciente << ", Fecha: " << fecha << std::endl;
}