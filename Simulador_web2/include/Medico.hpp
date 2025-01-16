#ifndef MEDICO_HPP
#define MEDICO_HPP

#include <string>
#include <vector>

class Medico {
private:
    std::string id;
    std::string nombre;
    std::string especialidad;
    int edad;

public:
    Medico(const std::string&id, const std::string& nombre, const std::string& especialidad, int edad);

    std::string getId() const;
    std::string getNombre() const;
    std::string& getEspecialidad() const;
    int getEdad() const;

    void setNombre(const std::string& nuevoNombre);
    void setEspecialidad(const std::string& nuevaEspecialidad);
    void setEdad(int nuevaEdad);

    void mostrarInformacion() const;

    bool esIgual(const std::string& idBuscado) const;

    void eliminarMedicoPorId(std::vector<Medico>& medicos, const std::string& idBuscado);
    void buscarMedicoPorId(const std::vector<Medico>& medicos, const std::string& idBuscado);
};



#endif
