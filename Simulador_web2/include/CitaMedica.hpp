#ifndef CITAMEDICA_HPP
#define CITAMEDICA_HPP

#include <iostream>
#include <string>

class CitaMedica {
private:
    int idPaciente;         // ID del paciente asociado a la cita
    std::string fecha;      // Fecha de la cita

public:
    // Constructor
    CitaMedica(int idPaciente, const std::string& fecha);

    // Métodos de acceso
    int getIdPaciente() const;                  // Retorna el ID del paciente
    const std::string& getFecha() const;        // Retorna la fecha de la cita

    // Método para mostrar la información de la cita
    void mostrarInformacion() const;
};

#endif
