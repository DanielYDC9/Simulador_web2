#ifndef PACIENTE_HPP
#define PACIENTE_HPP

#include <string>
#include <vector>

class Paciente {
private:
    std::string id;
    std::string nombre;
    int edad;
    std::vector<std::string> historialClinico;;

public:
    Paciente(const std::string& id, const std::string& nombre, int edad) ;

    std::string getId() const;
    std::string getNombre() const;
    int getEdad() const;

    void setNombre(const std::string& nuevoNombre);
    void mostrarInformacion() const;
    void agregarEntradaHistorial(const std::string& entrada);
    void mostrarHistorial() const;

    void eliminarPacientePorId(std::vector<Paciente>& pacientes, const std::string& idBuscado);
    void buscarPacientePorId(const std::vector<Paciente>& pacientes, const std::string& idBuscado);
};

#endif
