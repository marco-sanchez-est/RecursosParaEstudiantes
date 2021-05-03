//Programa que ejemplifica el uso de los metodos constructor y destructor

#include <iostream>

class Persona {
  private:
    std::string Nombre;
    int Edad;
  public:
    //Constructor
    Persona(std::string, int);
    //Destructor
    ~Persona() {
      std::cout << "Destructor\n";
    }
    //Prototipo del metodo ImprimeDatos
    void ImprimeDatos();
};

int main() {

  Persona persona1("Edwin", 21);
  std::cout << "Los datos de la persona No. 1 son: \n";
  persona1.ImprimeDatos();


  return 0;
    
}

//Definicion del constructor
Persona::Persona(std::string nom, int edad) {
  Nombre = nom;
  Edad = edad;
}

//Definicion del metodo ImprimeDatos
void Persona::ImprimeDatos() {
  std::cout << "Nombre: " << Nombre << std::endl;
  std::cout << "Edad: " << Edad << std::endl;
}
