#include "../include/CitaMedica.hpp"


// Constructor de la clase CitaMedica
CitaMedica::CitaMedica(int idPaciente, const std::string& fecha)
    : idPaciente(idPaciente), fecha(fecha) {
}

// Método que retorna el ID del paciente
int CitaMedica::getIdPaciente() const {
    return idPaciente;
}

// Método que retorna la fecha de la cita
const std::string& CitaMedica::getFecha() const {
    return fecha;
}

// Método que muestra la información de la cita médica
void CitaMedica::mostrarInformacion() const {
    std::cout << "Cita - ID Paciente: " << idPaciente << ", Fecha: " << fecha << std::endl;
}
