cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Simulador_web2 LANGUAGES CXX)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluir directorios
include_directories(include)

# Añadir los archivos fuente
add_executable(Simulador_web2
    src/main.cpp
    src/CitaMedica.cpp
    src/Paciente.cpp
    src/Medico.cpp
    src/SistemaHospital.cpp
)

# Especificar el compilador
if(MSVC)
    set(CMAKE_CXX_COMPILER "cl.exe")
else()
    set(CMAKE_CXX_COMPILER "g++")
endif()

# Configuración de salida
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

