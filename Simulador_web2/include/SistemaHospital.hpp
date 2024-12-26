#ifndef SISTEMAHOSPITAL_HPP
#define SISTEMAHOSPITAL_HPP

#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/CitaMedica.hpp"
#include <vector>
#include <string>

class SistemaHospital {
private:
    std::vector<Paciente> pacientes;  
    std::vector<Medico> medicos;      
    std::vector<CitaMedica> citas;

    void cargarPacientes();
    void cargarMedicos();
    void cargarCitas();
    void guardarPacientes() const;
    void guardarMedicos() const;
    void guardarCitas() const;

public:
    SistemaHospital();
    ~SistemaHospital();

    void agregarPaciente();
    void agregarMedico();
    void asignarCita();
    void mostrarPacientes() const;
    void mostrarMedicos() const;
    void mostrarCitas() const;

    void guardarDatos();
    bool existePaciente(int id) const;
    bool existeMedico(int id) const;

};

#endif
