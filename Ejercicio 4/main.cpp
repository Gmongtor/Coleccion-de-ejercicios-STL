#include <iostream>
#include "ciencia.h"
int main() {

    double masa = 10;
    double energia = Ciencia::Fisica::energia(masa);
    std::cout << "Energia: " << energia << std::endl;

    double radio = 5;
    double area = Ciencia::Matematicas::area_circulo(radio);
    std::cout << "Area: " << area << std::endl;

    double crecimiento = Ciencia::Biologia::CalcularCrecimiento(10, 5);
    std::cout << "Crecimiento: " << crecimiento << std::endl;
}