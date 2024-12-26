#ifndef PACIENTE_HPP
#define PACIENTE_HPP

#include <string>

class Paciente {
private:
    int id;
    std::string nombre;
    std::string historialMedico;

public:
    Paciente(int id, const std::string& nombre, const std:: string& historialMedico = "") ;

    int getId() const;
    std::string getNombre() const;
    std::string getHistorialMedico() const;
    void mostrarInformacion() const;
};

#endif
