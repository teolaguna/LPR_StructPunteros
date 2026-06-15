#include <iostream>
#include <cstring>
using namespace std;

// 1. DEFINI TU ESTRUCTURA
// Entidad principal del Proyecto Integrador: Robot Seguidor de Linea
// con busqueda de ruta hacia la ubicacion del celular que lo solicita
struct RobotSeguidorLinea {
    int idRobot;            // Identificador unico del robot
    char destino[50];       // Nombre/identificador del celular o punto destino
    float distanciaRuta;    // Distancia estimada hasta el destino (en metros)
};

// 2. FUNCION MODULAR (Usa el operador flecha -> para cargar datos)
void cargarDatos(RobotSeguidorLinea* ptr) {
    cout << "\n--- CARGA DE DATOS ASINCRONICA ---" << endl;
    cout << "Ingrese el ID del Robot (entero): ";
    cin >> ptr->idRobot;

    // Limpieza de buffer para evitar saltos de linea
    cin.ignore();

    cout << "Ingrese el Destino / Celular solicitante (texto): ";
    cin.getline(ptr->destino, 50);

    cout << "Ingrese la Distancia de la Ruta en metros (decimal/float): ";
    cin >> ptr->distanciaRuta;
}

int main() {
    // 3. DECLARAR LA ESTRUCTURA
    RobotSeguidorLinea miRobot;

    cout << "=====================================================" << endl;
    cout << "       DESAFIO DE CONTROL DE MODELADO (LPR 5-3)      " << endl;
    cout << "=====================================================" << endl;

    // 4. INVOCAR LA FUNCION PASANDO LA DIRECCION DE MEMORIA
    cargarDatos(&miRobot);

    // 5. MOSTRAR RESULTADOS Y DIRECCION DE MEMORIA
    cout << "\n=== DATOS VERIFICADOS EN EL SISTEMA ===" << endl;
    cout << "ID del Robot: " << miRobot.idRobot << endl;
    cout << "Destino (Celular): " << miRobot.destino << endl;
    cout << "Distancia de Ruta: " << miRobot.distanciaRuta << " metros" << endl;

    // Imprimimos la direccion fisica de memoria en hexadecimal
    cout << "Direccion de Memoria RAM (Hexadecimal): " << &miRobot << endl;
    cout << "=====================================================" << endl;

    return 0;
}