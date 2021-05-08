#include <iostream>

class Fecha {
  private:
    int Dia, Mes, Anio;
  public:
    //Constructor con parametros por omision
    Fecha(int D = 0, int M = 0, int A = 0);
    void ImprimeFecha();
};

int main() {

  Fecha fecha1;
  Fecha fecha2(8, 5, 2021);

  //Al no ingresar valor alguno, se utilizan los asignados en el constructor
  fecha1.ImprimeFecha();
  fecha2.ImprimeFecha();

  return 0;

}

Fecha::Fecha(int D, int M, int A) {
  Dia = D;
  Mes = M;
  Anio = A;
}

void Fecha::ImprimeFecha() {
  std::cout << std::to_string(Dia) + "/" + std::to_string(Mes) + "/" + std::to_string(Anio) << std::endl;
}
