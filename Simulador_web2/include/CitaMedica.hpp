#ifndef CITAMEDICA_HPP
#define CITAMEDICA_HPP

#include <iostream>
#include <string>
using namespace std;

class CitaMedica {
private:
    int idPaciente;
    string fecha;
public:
    CitaMedica(int idPaciente, string fecha);
    void mostrarCita();
    int getIdPaciente();
    string getFecha();
};

#endif
