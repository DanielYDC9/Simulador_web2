#ifndef SISTEMAHOSPITAL_HPP
#define SISTEMAHOSPITAL_HPP

#include "Paciente.hpp"
#include "Medico.hpp"
#include "CitaMedica.hpp"
#include <vector>

class SistemaHospital {
private:
    std::vector<Paciente> pacientes;
    std::vector<Medico> medicos;
    std::vector<CitaMedica> citas;

public:
    void agregarPaciente(const Paciente& paciente);
    void agregarMedico(const Medico& medico);
    void asignarCita(const CitaMedica& cita);
    void mostrarDatos() const;
};

#endif
