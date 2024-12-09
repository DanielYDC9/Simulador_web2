# Establecer la versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Definir el nombre del proyecto
project(Simulacion_web2)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluir los directorios de cabeceras
include_directories(include)

# Buscar todos los archivos .cpp en la carpeta src
file(GLOB SOURCES "src/*.cpp")

# Crear el ejecutable del proyecto
add_executable(Simulacion_web2 ${SOURCES})

# Asegurarse de que el directorio de salida esté configurado correctamente
set_target_properties(Simulacion_web2 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
