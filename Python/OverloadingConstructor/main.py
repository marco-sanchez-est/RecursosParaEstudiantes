#!/usr/bin/python3

class Fecha:
    #Overloading constructor based on arguments
    def __init__(self, *args):
        if len(args) == 0:
            self.__Dia = 0
            self.__Mes = 0
            self.__Anio = 0

        elif len(args) == 3:
            self.__Dia = args[0] #Set Dia with the value of the first argument
            self.__Mes = args[1] #Set Mes with the value of the second argument
            self.__Anio = args[2] #Set Anio with the value of the third argument

        elif not(len(args) == 0 or len(args) == 3):
            print("ERROR: El n\u00FAmero de argumentos no es 0 o 3")

    def ImprimeFecha(self):
        print(str(self.__Dia) + "/" + str(self.__Mes) + "/" + str(self.__Anio))

fecha1 = Fecha() #args = 0
fecha2 = Fecha(5,5,2021) #args = 3
#Print ERROR Message #args is not 0 or 3
fecha3 = Fecha(1)

fecha1.ImprimeFecha()
fecha2.ImprimeFecha()
