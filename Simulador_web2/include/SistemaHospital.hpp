#ifndef SISTEMAHOSPITAL_HPP
#define SISTEMAHOSPITAL_HPP

#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/CitaMedica.hpp"
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

    // Métodos de acceso
    const std::vector<Paciente>& getPacientes() const;  // Obtener lista de pacientes
    std::vector<Paciente>& getPacientes();              // Obtener lista de pacientes para modificar
    const std::vector<Medico>& getMedicos() const;      // Obtener lista de médicos
    std::vector<Medico>& getMedicos();                  // Obtener lista de médicos para modificar

    // Método para mostrar todos los datos registrados
    void mostrarDatos() const;
};

#endif
