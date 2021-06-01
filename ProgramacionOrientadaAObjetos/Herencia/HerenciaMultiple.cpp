/*Programa que simula un sistema basico de reservaciones*/

#include <iostream>
#include <cstring>

struct fecha {
  int dia, mes, anio;
};

/*Superclase DatosPersona*/
class DatosPersona {
  protected:
    char Nombre[32], Apellido1[32], Apellido2[32];
  public:
    DatosPersona();
    DatosPersona(char*, char*, char*);
    void Imprime();
};

/*Superclase DatosHotel*/
class DatosHotel {
  protected:
    struct fecha Llegada, Salida;
    int Adultos, Ninios, NoHabitaciones;
  public:
    DatosHotel();
    DatosHotel(struct fecha, struct fecha, int, int, int);
    void Imprime();

};

/*Subclase Reservacion con herencia multiple de las superclases DatosPersona y DatosHotel*/
class Reservacion: public DatosPersona, public DatosHotel {
  protected:
    char Destino[64];
  public:
    Reservacion();
    Reservacion(char*, char*, char*, struct fecha, struct fecha, int, int, int, char*);
    void Imprime();
};

/*Prototipo de la funcion Registro*/
Reservacion Registro();

int main() {

  Reservacion Vacaciones;
  Vacaciones = Registro();
  Vacaciones.Imprime();

  return 0;

}

/*Constructor por omision de la clase DatosPersona*/
DatosPersona::DatosPersona() {

}

/*Constructor con parametros de la clase DatosPersona*/
DatosPersona::DatosPersona(char Nom[], char Ap1[], char Ap2[]) {
  strcpy(Nombre, Nom);
  strcpy(Apellido1, Ap1);
  strcpy(Apellido2, Ap2);
}

/*Metodo Imprime de la clase DatosPersona*/
void DatosPersona::Imprime() {
  std::cout << "\n\nNombre: " << Nombre;
  std::cout << "\nPrimer Apellido: " << Apellido1;
  std::cout << "\nSegundo Apellido: " << Apellido2;
}

/*Constructor por omision de la clase DatosHotel*/
DatosHotel::DatosHotel() {

}

/*Constructor con parametros de la clase DatosPersona*/
DatosHotel::DatosHotel(struct fecha Lleg, struct fecha Sal, int Adul, int Nin, int NoHabs) {
  Llegada = Lleg;
  Salida = Sal;
  Adultos = Adul;
  Ninios = Nin;
  NoHabitaciones = NoHabs;
}

/*Metodo Imprime de la clase DatosHotel*/
void DatosHotel::Imprime() {
  std::cout << "\n\nFecha de llegada: " << Llegada.dia << "/" << Llegada.mes << "/" << Llegada.anio;
  std::cout << "\nFecha de salida: " << Salida.dia << "/" << Salida.mes << "/" << Salida.anio;
  std::cout << "\nN\u00FAmero de personas adultas que se hospedar\u00E1n: " << Adultos;
  std::cout << "\nN\u00FAmero de ni\u00F1os que se hospedar\u00E1n: " << Ninios;
  std::cout << "\nN\u00FAmero de habitaciones reservadas: " << NoHabitaciones << "\n\n";
}

/*Constructor por omision de la clase Reservacion*/
Reservacion::Reservacion() {

}

/*Constructor con parametros de la clase Reservacion*/
Reservacion::Reservacion(char Nombr[], char Ape1[], char Ape2[], struct fecha Ll, struct fecha Sl, int Adu, int Nins, int NoHab, char Des[]): DatosPersona(Nombr, Ape1, Ape2), DatosHotel(Ll, Sl, Adu, Nins, NoHab) {
  strcpy(Destino, Des);
}

/*Metodo Imprime de la clase Reservacion*/
void Reservacion::Imprime() {
  std::cout << "\n\nDestino: " << Destino;
  DatosPersona::Imprime(); /*Uso del metodo Imprime, heredado de la clase DatosPersona, en la clase Reservacion*/
  DatosHotel::Imprime(); /*Uso del metodo Imprime, heredado de la clase DatosHotel, en la clase Reservacion*/
}

/*Definicion de la funcion Registro*/
Reservacion Registro() {

  //Variables Locales
  int Ad, Ni, Habs;
  char Nomb[32], A1[32], A2[32], Dest[64];
  struct fecha L, S;

  std::cout << "\nIngrese su nombre: ";
  std::cin >> Nomb;
  std::cout << "Ingrese su primer apellido: ";
  std::cin >> A1;
  std::cout << "Ingrese su segundo apellido: ";
  std::cin >> A2;
  std::cout << "\nIngrese el destino deseado: ";
  std::cin >> Dest;
  std::cout << "\nFormato de la fecha [d\u00EDa mes a\u00F1o]\n";
  std::cout << "Ingrese la fecha de llegada: ";
  std::cin >> L.dia >> L.mes >> L.anio;
  std::cout << "Ingrese la fecha de salida: ";
  std::cin >> S.dia >> S.mes >> S.anio;
  std::cout << "Ingrese el n\u00FAmero de personas adultas que se hospedar\u00E1n: ";
  std::cin >> Ad;
  std::cout << "Ingrese el n\u00FAmero de ni\u00F1os que se hospedar\u00E1n: ";
  std::cin >> Ni;
  std:: cout << "Ingrese el n\u00FAmero de habitaciones que deesea reservar: ";
  std:: cin >> Habs;
  Reservacion Datos(Nomb, A1, A2, L, S, Ad, Ni, Habs, Dest);

  return Datos;
}
