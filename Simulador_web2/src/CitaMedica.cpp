#include "../include/CitaMedica.hpp"
#include <iostream>

CitaMedica::CitaMedica(
CitaMedica::CitaMedica(const std::string& idCita, const std::string& idPaciente, const std::string& idMedico, const std::string& fecha, const std::string& motivo)
    : idCita(idCita),idPaciente(idPaciente), idMedico(idMedico), fecha(fecha), motivo(motivo) {
}

std::string CitaMedica::getIdCita() const { return idCita; }
std::string CitaMedica::getIdPaciente() const { return idPaciente; }
std::string CitaMedica::getIdMedico() const { return idMedico; }
std::string CitaMedica::getFecha() const { return fecha; }
std::string CitaMedica::getMotivo() const { return motivo; }
int CitaMedica::getIdPaciente() const {
    return idPaciente;
}
void CitaMedica::setFecha(const std::string& nuevaFecha) {
    fecha = nuevaFecha;
}
void CitaMedica::setMotivo(const std::string& nuevoMotivo) {
    motivo = nuevoMotivo;
}

