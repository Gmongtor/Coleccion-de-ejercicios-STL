#include <iostream>
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        return a / b;
    }
    int cuadrado(int a) {
        return a * a;
    }
}
int main() {
    int a,b;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;
    std::cout << "La suma de los numeros es: " << Matematicas::suma(a,b) << std::endl;
    std::cout << "La resta de los numeros es: " << Matematicas::resta(a,b) << std::endl;
    std::cout << "La multiplicacion de los numeros es: " << Matematicas::multiplicacion(a,b) << std::endl;
    std::cout << "La division de los numeros es: " << Matematicas::division(a,b) << std::endl;
    std::cout << "El cuadrado del primer numero es: " << Matematicas::cuadrado(a) << std::endl;
    return 0;
}