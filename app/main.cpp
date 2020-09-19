#include <iostream>
#include <math.h>

void participante();

int main (int argc, char** argv) {
    
    std::cout << std::endl;

    for(int i = 0; i < argc; i++) {
        
        std::cout << "El argumento " << i << " es " << argv[i] << std::endl;
    }
    std::cout << std::endl;
    
    participante();
    return 0;
}

void participante() {
    std::cout << std::endl << " #### ECUACION POLINOMICA ####" << std::endl;
    std::cout << std::endl << "nombre1" << std::endl;
    std::cout << std::endl << "nombre 2" << std::endl;
    std::cout << std::endl << "Sion-Jei Mamani Leon" << std::endl;
}