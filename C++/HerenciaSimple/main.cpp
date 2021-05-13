//Este programa ejemplifica la herencia simple
//NOTA: algunos compiladores (como GCC) muestran un mensaje de alerta al momento de compilar
//este mensaje notifica que el programa no cumple con un estandar ISO, sin embargo, este puede
//seguir siendo ejecutado sin problemas (solo ha sido provado en Linux utilizando GCC).

#include <iostream>
#include <cstring>

//Definicion de superclase Persona
class Persona {
  protected:
    char Nombre[30];
    int Edad;
  public:
    Persona(char *Nom, int Ed);
    void ImprimePersona();
};

//Definicion de subclase Empleado, es subclase de Persona
class Empleado: public Persona {
  protected:
    float Salario;
  public:
    Empleado(char *Nom, int Ed, float Sal);
    void ImprimeEmpleado();
    ~Empleado(){}
};

int main() {

  //Se crea objeto de tipo Persona
  Persona *ObjPersona = new Persona("Carlos", 20);
  //Se crea objeto de tipo Empleado, es necesario proporcionar los parametros que hereda de la superclase
  Empleado *ObjEmpleado = new Empleado("Adriana", 25, 20000);

  ObjPersona -> ImprimePersona();
  ObjEmpleado -> ImprimeEmpleado();
  //La clase Empleado de igual manera hereda el metodo ImprimePersona de la superclase Persona
  ObjEmpleado -> ImprimePersona();

  //Elimina los objectos creados para liberar espacio en memoria.
  delete ObjPersona;
  delete ObjEmpleado;

  return 0;

}

//Constructor con parametros de superclase
Persona::Persona(char* Nom, int Ed) {
  strcpy(Nombre, Nom);
  Edad = Ed;
}

void Persona::ImprimePersona() {
  std::cout << "Nombre: " << Nombre << std::endl;
  std::cout << "Edad: " << Edad << std::endl;
}

//Constructor con parametros de subclase, se deben especificar los parametros que pertenecen a la superclase
Empleado::Empleado(char *Nom, int Ed, float Sal): Persona(Nom, Ed) {
  Salario = Sal;
}

void Empleado::ImprimeEmpleado() {
  std::cout << "Nombre: " << Nombre << std::endl;
  std::cout << "Salario: " << Salario << std::endl;
}
