#ifndef SISTEMAHOSPITAL_HPP
#define SISTEMAHOSPITAL_HPP

#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/CitaMedica.hpp"
#include <iostream>
#include <vector>
#include <string>

class SistemaHospital {
public:
    SistemaHospital();
    ~SistemaHospital();
//Gestion Pacientes
    void agregarPaciente(const std::string& id, const std::string& nombre, int edad);
    void eliminarPaciente(const std::string& id);
    void buscarPaciente(const std::string& id) const;
    void mostrarPacientes() const;
//Gestion Medicos
    void agregarMedico(const std::string& id, const std::string& nombre, const std::string& especialidad, int edad);
    void eliminarMedico(const std::string& id);
    void buscarMedico(const std::string& id) const;
    void mostrarMedicos() const;
    // Gestión de citas
    void agregarCita(const std::string& idCita, const std::string& idPaciente, const std::string& idMedico, const std::string& fecha, const std::string& motivo);
    void cancelarCita(const std::string& idCita);
    void mostrarCitas() const;
// Manejo de archivos
    void guardarDatos() const;
    void cargarDatos();
private:
    std::vector<Paciente> pacientes;  
    std::vector<Medico> medicos;      
    std::vector<CitaMedica> citas;


#endif
