#ifndef MEDICO_HPP
#define MEDICO_HPP

#include <string>

class Medico {
private:
    int id;
    std::string nombre;
    std::string especialidad;

public:
    Medico(int id, const std::string& nombre, const std::string& especialidad);

    int getId() const;
    std::string getNombre() const;
    std::string& getEspecialidad() const;
    void mostrarInformacion() const;
};

#endif
