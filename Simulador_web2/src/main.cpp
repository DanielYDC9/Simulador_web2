#include <iostream>
#include <string>
#include <locale>
#include "../include/CitaMedica.hpp"
#include "../include/Paciente.hpp"
#include "../include/Medico.hpp"
#include "../include/SistemaHospital.hpp"

void mostrarMenuPrincipal() {
    std::cout << "\n=== Sistema de Gestión Hospitalaria ===\n";
    std::cout << "1. Agregar Paciente\n";
    std::cout << "2. Agregar Médico\n";
    std::cout << "3. Asignar Cita\n";
    std::cout << "4. Eliminar Paciente\n";
    std::cout << "5. Eliminar Médico\n";
    std::cout << "6. Cancelar Cita\n";
    std::cout << "7. Buscar Paciente\n";
    std::cout << "8. Buscar Médico\n";
    std::cout << "9. Mostrar Pacientes\n";
    std::cout << "10. Mostrar Médicos\n";
    std::cout << "11. Mostrar Citas\n";
    std::cout << "12. Salir\n";
    std::cout << "Seleccione una opción: ";
}


// Función principal
int main() {
    // Configurar la salida de la consola para UTF-8
    std::setlocale(LC_ALL, "es_ES.UTF-8");

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
            std::cout << "Entrada inválida. Intente de nuevo.\n";
    switch (opcion) {
    case 1: {
        std::string id, nombre;
        int edad;
        std::cin.ignore();
        std::cout << "Ingrese ID del paciente: ";
        std::getline(std::cin, id);
        std::cout << "Ingrese nombre del paciente: ";
        std::getline(std::cin, nombre);
        std::cout << "Ingrese edad del paciente: ";
        std::cin >> edad;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        sistema.agregarPaciente(id, nombre, edad);
        break;
 }
   case 2: {
     std::string id, nombre, especialidad;
     int edad;
     std::cin.ignore();
     std::cout << "Ingrese ID del médico: ";
     std::getline(std::cin, id);
     std::cout << "Ingrese nombre del médico: ";
     std::getline(std::cin, nombre);
     std::cout << "Ingrese especialidad del médico: ";
     std::getline(std::cin, especialidad);
     std::cout << "Ingrese edad del médico: ";
     std::cin >> edad;
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     sistema.agregarMedico(id, nombre, especialidad, edad);
     break;      
}        
 case 3: {
     std::string idCita, idPaciente, idMedico, fecha, motivo;
     std::cin.ignore();
     std::cout << "Ingrese ID de la cita: ";
     std::getline(std::cin, idCita);
     std::cout << "Ingrese ID del paciente: ";
     std::getline(std::cin, idPaciente);
     std::cout << "Ingrese ID del médico: ";
     std::getline(std::cin, idMedico);
     std::cout << "Ingrese fecha de la cita (YYYY-MM-DD): ";
     std::getline(std::cin, fecha);
     std::cout << "Ingrese motivo de la cita: ";
     std::getline(std::cin, motivo);
     sistema.agregarCita(idCita, idPaciente, idMedico, fecha, motivo);
     break;
 }
 case 4: {
     std::string id;
     std::cin.ignore();
     std::cout << "Ingrese ID del paciente a eliminar: ";
     std::getline(std::cin, id);
     sistema.eliminarPaciente(id);
     break;
 }
 case 5: {
     std::string id;
     std::cin.ignore();
     std::cout << "Ingrese ID del médico a eliminar: ";
     std::getline(std::cin, id);
     sistema.eliminarMedico(id);
     break;
 }
  case 6: {
     std::string idCita;
     std::cin.ignore();
     std::cout << "Ingrese ID de la cita a cancelar: ";
     std::getline(std::cin, idCita);
     sistema.cancelarCita(idCita);
     break;
 }
 case 7: {
            std::string id;
            std::cin.ignore();
            std::cout << "Ingrese ID del paciente a buscar: ";
            std::getline(std::cin, id);
            sistema.buscarPaciente(id);
            break;
        }
        case 8: {
            std::string id;
            std::cin.ignore();
            std::cout << "Ingrese ID del médico a buscar: ";
            std::getline(std::cin, id);
            sistema.buscarMedico(id);
            break;
        }
        case 9:
            sistema.mostrarPacientes();
            break;
        case 10:
            sistema.mostrarMedicos();
            break;
        case 11:
            sistema.mostrarCitas();
            break;
        case 12:
            std::cout << "Saliendo del sistema...\n";
            break;
        default:
            std::cout << "Opción inválida. Intente de nuevo.\n";
            break;
        }       

    } while (opcion != 12);

    return 0;
}
    
