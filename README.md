# Sistema de Gestión Hospitalaria

## Descripción:
El proyecto consiste en un sistema de gestión hospitalaria desarrollado en C++ que permite realizar operaciones clave para administrar pacientes, médicos y citas médicas. Este sistema está diseñado para registrar, buscar, modificar y eliminar datos, así como para gestionar citas médicas de manera eficiente.

# Características principales:

## Gestión de Pacientes

- Registrar nuevos pacientes.

- Buscar pacientes por ID.

- Modificar datos personales.

- Eliminar pacientes.

- Registrar y visualizar el historial clínico de los pacientes.

## Gestión de Médicos

- Registrar nuevos médicos con sus especialidades.

- Buscar médicos por ID.

- Modificar datos personales y especialidades.

- Eliminar médicos.

## Gestión de Citas Médicas

- Programar citas entre pacientes y médicos.

- Cancelar o modificar citas.

- Visualizar citas programadas con detalles como fecha, motivo, y médico asignado.

## Manejo de Archivos

- Almacenar datos de pacientes, médicos y citas en archivos para su recuperación futura.

- Funcionalidad automática de guardar y cargar datos al iniciar o cerrar el sistema.

## Estructura del Proyecto

El código está dividido en los siguientes archivos:

- Paciente.hpp** y ****Paciente.cpp**: Manejan la clase Paciente, con atributos como ID, nombre, edad e historial clínico.

- Medico.hpp** y ****Medico.cpp**: Manejan la clase Medico, con atributos como ID, nombre, especialidad y edad.

- CitaMedica.hpp** y ****CitaMedica.cpp**: Manejan la clase CitaMedica, que conecta a pacientes y médicos en citas programadas.

- SistemaHospital.hpp** y ****SistemaHospital.cpp**: Implementan la lógica principal del sistema para gestionar pacientes, médicos y citas.

- main.cpp: Contiene el menú interactivo para que el usuario utilice el sistema.

# Requisitos:

Compilador compatible con C++11 o superior.

Visual Studio 2022 (recomendado).

Sistema operativo Windows, Linux o macOS.

## Uso con CMake:

Asegúrese de tener CMake instalado en su sistema.

Cree un directorio de compilación:

- mkdir build && cd build

Genere los archivos de proyecto con CMake:

- cmake ..

## Compile el proyecto:

- cmake --build .

Ejecute el programa generado.

## Instrucciones para Ejecutar:

1. Clona el repositorio o descarga los archivos fuente.

2. Compila el proyecto utilizando Visual Studio 2022 o un compilador de C++. Ejemplo con g++:

- g++ -o SistemaHospital main.cpp SistemaHospital.cpp Paciente.cpp Medico.cpp CitaMedica.cpp

## Ejecuta el programa:

- ./SistemaHospital

Sigue las instrucciones en el menú principal para utilizar el sistema.

## Fuentes e Inspiración:

El código está inspirado en tutoriales y proyectos encontrados de otras bases de datos similares y tambien el uso de CodeAcademy  
Se utilizó esta referencia como base para diseñar y estructurar el sistema, adaptándolo a las necesidades específicas de este proyecto.

