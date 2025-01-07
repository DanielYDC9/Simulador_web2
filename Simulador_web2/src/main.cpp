#include <iostream>
#include <string>
#include "../include/CitaMedica.hpp"
#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/SistemaHospital.hpp"

void mostrarMenuPrincipal() {
    std::cout << "\n=== Sistema de Gestión Hospitalaria ===\n";
    std::cout << "1. Agregar Paciente\n";
    std::cout << "2. Agregar Médico\n";
    std::cout << "3. Asignar Cita\n";
    std::cout << "4. Editar Paciente\n";
    std::cout << "5. Editar Médico\n";
    std::cout << "6. Editar Cita\n";
    std::cout << "7. Mostrar Pacientes\n";
    std::cout << "8. Mostrar Médicos\n";
    std::cout << "9. Mostrar Citas\n";
    std::cout << "10. Salir\n";    
    std::cout << "Seleccione una opción: ";
}

void menuPacientes(SistemaHospital& sistema) {
    int opcion;
    do {
        std::cout << "\n=== Gestión de Pacientes ===\n";
        std::cout << "1. Agregar Paciente\n";
        std::cout << "2. Mostrar Todos los Pacientes\n";
        std::cout << "3. Volver al Menú Principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        if (std::cin.fail()) {  
            std::cout << "Entrada inválida. Intente de nuevo.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }            

        switch (opcion) {
        case 1:
            sistema.agregarPaciente();
            break;
        case 2:
            sistema.mostrarPacientes();
            break;
        case 3:
            std::cout << "Volviendo al menú principal...\n";
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente.\n";
            break;
        }
    } while (opcion != 3);
}        
        


void menuMedicos(SistemaHospital& sistema) {
    int opcion;
    do {

        std::cout << "\n=== Gestión de Médicos ===\n";
        std::cout << "1. Agregar Médico\n";
        std::cout << "2. Mostrar Todos los Médicos\n";
        std::cout << "3. Volver al Menú Principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin  >> opcion;

        if (std::cin.fail()) {
        std::cout << "Entrada inválida. Intente de nuevo.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
        }
        switch (opcion) {
        case 1:
            sistema.agregarMedico();
            break;
        case 2:
            sistema.mostrarMedicos();
            break;
        case 3:
            std::cout << "Volviendo al menú principal...\n";
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente.\n";
            break;
        }
    } while (opcion != 3); 
}

void menuCitas(SistemaHospital& sistema) {
    int opcion;
    do {
        std::cout << "\n=== Gestión de Citas ===\n";
        std::cout << "1. Asignar Cita Médica\n";
        std::cout << "2. Mostrar Todas las Citas\n";
        std::cout << "3. Volver al Menú Principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        if (std::cin.fail()) {
            std::cout << "Entrada inválida. Intente de nuevo.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (opcion) {
        case 1:
            sistema.asignarCita();
            break;
        case 2:
            sistema.mostrarCitas();
            break;
        case 3:
            std::cout << "Volviendo al menú principal...\n";
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente.\n";
            break;
        }
    } while (opcion != 3);
}


int main() {
    SistemaHospital sistema;
    int opcion;

    do {
        mostrarMenuPrincipal();
        std::cin >> opcion;

        if (std::cin.fail()) {
            std::cout << "Entrada inválida. Intente de nuevo.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (opcion) {
        case 1: agregarPaciente(sistema); break;
        case 2: agregarMedico(sistema); break;
        case 3: asignarCita(sistema); break;
        case 4: sistema.mostrarDatos(); break;
        case 5: sistema.editarMedico(); break;
        case 6: sistema.editarCita(); break;
        case 7: sistema.mostrarPacientes(); break;
        case 8: sistema.mostrarMedicos(); break;
        case 9: sistema.mostrarCitas(); break;    
        case 10: std::cout << "Saliendo...\n"; break;
        default: std::cout << "Opción no válida. Intentelo de nuevo\n";
        }
    } while (opcion != 10);

    return 0;
}

