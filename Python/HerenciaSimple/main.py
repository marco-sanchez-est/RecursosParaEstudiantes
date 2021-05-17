#!/usr/bin/python3

#Este programa ejemplifica la herencia simple

#Definicion de superclase Persona
class Persona:
    def __init__(self, Nom, Ed):
        self._Nombre = Nom
        self._Edad = Ed

    def ImprimePersona(self):
        print("Nombre: " + self._Nombre)
        print("Edad: ", self._Edad)
        return None

    #Destructor
    def __del__(self):
        return None

#Definicion de subclase Empleado, es subclase de Persona
class Empleado(Persona):
    def __init__(self, Nom, Ed, Sal):
        #Funcion que permite heredar metodos y atributos.
        super().__init__(Nom, Ed)
        self._Salario = Sal

    def ImprimeEmpleado(self):
        print("Nombre: " + self._Nombre)
        print("Salario: ", self._Salario)

    #Destructor
    def __del__(self):
        return None

def main():
    persona1 = Persona("Carlos", 20)
    persona1.ImprimePersona()
    empleado1 = Empleado("Adriana", 25, 20000)
    empleado1.ImprimeEmpleado()
    #La clase empleado de igual manera hereda el metodo ImprimePersona de la superclase Persona
    empleado1.ImprimePersona()


if __name__ == "__main__":
    main()
