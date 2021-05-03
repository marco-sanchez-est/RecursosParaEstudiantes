#!/usr/bin/python3

class Persona:
    #Constructor
    def __init__(self, Nombre, Edad):
        self.__Nombre = Nombre
        self.__Edad = Edad

    #Destructor
    def __del__(self):
        print("Destructor")

    #Metodo publico ImprimeDatos
    def ImprimeDatos(self):
        print("Nombre: " + str(self.__Nombre))
        print("Edad: " + str(self.__Edad))
        return None

persona1 = Persona("Edwin", 21)
print("Los datos de la persona No.1 son:")
persona1.ImprimeDatos()
