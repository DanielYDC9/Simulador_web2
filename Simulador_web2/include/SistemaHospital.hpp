#ifndef SISTEMAHOSPITAL_HPP
#define SISTEMAHOSPITAL_HPP

#include "Paciente.hpp"
#include "Medico.hpp"
#include "CitaMedica.hpp"
#include <vector>

class SistemaHospital {
private:
    std::vector<Paciente> pacientes;  // Lista de pacientes registrados
    std::vector<Medico> medicos;      // Lista de médicos registrados
    std::vector<CitaMedica> citas;    // Lista de citas médicas programadas

public:
    // Métodos para gestionar el sistema
    void agregarPaciente(const Paciente& paciente);
    void agregarMedico(const Medico& medico);
    void asignarCita(const CitaMedica& cita);

    // Método para mostrar todos los datos registrados
    void mostrarDatos() const;
};

#endif
