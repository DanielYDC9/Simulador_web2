#include <iostream>
#include <vector>
#include "../include/CitaMedica.hpp"
#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/SistemaHospital.hpp"

int main() {
    // Crear una instancia del sistema hospitalario
    SistemaHospital sistema;

    // Crear y agregar pacientes
    Paciente paciente1("Juan Perez", 1);
    Paciente paciente2("Maria Lopez", 2);
    sistema.agregarPaciente(paciente1);
    sistema.agregarPaciente(paciente2);

    // Crear y agregar médicos
    Medico medico1("Dr. Gomez", "Cardiología");
    Medico medico2("Dra. Torres", "Pediatría");
    sistema.agregarMedico(medico1);
    sistema.agregarMedico(medico2);

    // Crear y asignar citas
    CitaMedica cita1(1, "2024-11-20");
    CitaMedica cita2(2, "2024-11-21");
    sistema.asignarCita(cita1);
    sistema.asignarCita(cita2);

    // Mostrar la información registrada
    sistema.mostrarDatos();

    return 0;
}


