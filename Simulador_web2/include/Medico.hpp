#ifndef MEDICO_HPP
#define MEDICO_HPP

#include <string>

class Medico {
private:
    std::string nombre;
    std::string especialidad;

public:
    Medico(const std::string& nombre, const std::string& especialidad);
    const std::string& getNombre() const;
    const std::string& getEspecialidad() const;
    void mostrarInformacion() const;
};

#endif