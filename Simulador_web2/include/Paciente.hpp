#ifndef PACIENTE_HPP
#define PACIENTE_HPP

#include <string>

class Paciente {
private:
    std::string nombre;
    int id;
    std::string historial_clinico;

public:
    Paciente(const std::string& nombre, int id);
    int getId() const;
    const std::string& getNombre() const;
    void mostrarInformacion() const;
};

#endif
