//Programa que muestra el uso de los constructores

#include <iostream>

class Fecha {
  private:
    int Dia, Mes, Anio;
  public:
    //Constructor por omision
    Fecha() {}
    //Cosntructor con parametros
    Fecha(int, int, int);
    //Prototipo metodo publico ImprimeFecha
    void ImprimeFecha();
};

int main() {

  //Crea una instancia a partir del constructor por omision
  Fecha fecha1;
  //Crea una instancia a partir del constructor con parametros
  Fecha fecha2(4, 5, 2021);

  //Valores indeterminados
  fecha1.ImprimeFecha();
  //Valores determinados por los parametros
  fecha2.ImprimeFecha();

  return 0;

}

//Declaracion de constructor por omision
Fecha::Fecha(int d, int m, int a) {
  Dia = d;
  Mes = m;
  Anio = a;
}

//Declaracion del metodo ImprimeFecha
void Fecha::ImprimeFecha() {
  std::cout << Dia << "/" << Mes << "/" << Anio << std::endl;
}
