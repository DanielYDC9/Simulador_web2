#ifndef CITAMEDICA_HPP
#define CITAMEDICA_HPP
#include <iostream>
#include <string>

class CitaMedica {
private:
    int idPaciente;  
    int idMedico;
    std::string fecha;      // Fecha de la cita
    std::string motivo;
public:
    // Constructor
    CitaMedica(int idPaciente, int idMedico, const std::string& fecha, const std::string& motivo);

    // Métodos de acceso
    int getIdPaciente() const;  // Retorna el ID del paciente
    int getIdMedico() const; // Retorna el ID del Medico
    std::string getFecha() const;        // Retorna la fecha de la cita
    std::string getMotivo() const;  // Devuelve el motivo de cita medica

    // Método para mostrar la información de la cita
    void mostrarInformacion() const;
};

#endif
