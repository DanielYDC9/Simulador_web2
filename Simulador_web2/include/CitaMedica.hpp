#ifndef CITAMEDICA_HPP
#define CITAMEDICA_HPP
#include <iostream>
#include <string>

class CitaMedica {
private:
    std::string idCita;
    std::string idPaciente;
    std::string idMedico;
    std::string fecha;     
    std::string motivo;
public:
    CitaMedica(const std::string&idCita,const std::string& idPaciente, const std::string& idMedico, const std::string& fecha, const std::string& motivo);

    std::string getIdCita() const;
    std::string getIdPaciente() const; 
    std::string getIdMedico() const; 
    std::string getFecha() const;        
    std::string getMotivo() const;  

    void setFecha(const std::string& nuevaFecha);
    void setMotivo(const std::string& nuevoMotivo);

    void mostrarInformacion() const;
};
#endif
