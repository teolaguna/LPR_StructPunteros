LPR_StructPunteros

Repositorio de actividades de la materia **Laboratorio de Programación** — 5° año 3° (A-B), EEST N.° 1 "Eduardo Ader", Vicente López.

Tema: **Modelado de datos con estructuras (struct) y punteros, gestión dinámica de memoria, y control de versiones con Git/GitHub.**

Estructura del repositorio

```
LPR_StructPunteros/
├── .gitignore
├── README.md
├── LICENSE
├── Ejemplos/
│   ├── Ejemplo1_Struct_Base/
│   │   └── ModeladoSencillo.cpp
│   └── Ejemplo2_Puntero_Struct/
│       └── OperadorFlecha.cpp
└── Entregas/
    └── SistemaProyecto.cpp
```

Contenido

Ejemplo 1 — ModeladoSencillo.cpp
Declaración e inicialización de una estructura (`struct`) básica con campos de distintos tipos (`int`, `char[]`, `float`), usando el operador punto (`.`) para acceder a sus miembros.

Ejemplo 2 — OperadorFlecha.cpp
Uso de punteros a estructuras y el operador flecha (`->`) para modificar datos directamente en memoria, pasando la dirección de una variable a una función con `&`.

Entregas — SistemaProyecto.cpp
Desafío práctico: modelado de la entidad principal del Proyecto Integrador Anual usando `struct`, carga de datos por puntero (`->`) y visualización de la dirección de memoria en hexadecimal.

Compilación y ejecución

Requiere `g++` (MinGW / UCRT64 en Windows, o build-essential en Linux).

```bash
g++ Ejemplos/Ejemplo1_Struct_Base/ModeladoSencillo.cpp -o ejemplo1
./ejemplo1

g++ Ejemplos/Ejemplo2_Puntero_Struct/OperadorFlecha.cpp -o ejemplo2
./ejemplo2

g++ Entregas/SistemaProyecto.cpp -o sistemaProyecto
./sistemaProyecto
```

Control de versiones

El desarrollo se organiza en dos ramas:

- **main**: versión estable de entrega.
- **development**: rama de trabajo donde se realizan los avances incrementales.

Autor

Materia: Laboratorio de Programación — 5° 3° A-B
Profesor: Mansilla Muñoz York Elías
