#!/usr/bin/python

#Simulacion de un cajero automatico.

#Definicion de la clase Cliente.
class Cliente:
    #Constructor
    def __init__(self, Nombre, TipoDeCuenta, NoDeCuenta, Saldo):
        #Todos los atributos de la clase cliente son privados.
        self.__Nombre = Nombre
        self.__TipoDeCuenta = TipoDeCuenta
        self.__NoDeCuenta = NoDeCuenta
        self.__Saldo = Saldo

    def Retiro(self, monto):
        self.__Saldo = self.__Saldo - monto
        return "Saldo final: $" + str(self.__Saldo)

    def Deposito(self, deposito):
        self.__Saldo = self.__Saldo + deposito
        return "Saldo final: $" + str(self.__Saldo)

    def ConsultaSaldo(self):
        return "\nSaldo actual: $" + str(self.__Saldo)

#Definicion de la funcion main.
def main():
    cliente1 = Cliente("Pedro Gutierrez", "Premier", 1234567890, 1000)
    option = 0

    while not(option == 4):
        print("\n\t\t**Cajero Autom\u00E1tico**\n")
        print("1. Realizar un retiro")
        print("2. Realizar un deposito")
        print("3. Consultar saldo")
        print("4. Salir\n")
        option = int(input())

        if option < 1 or option > 4:
            print("\nERROR: El valor ingresado no es v\u00E1lido\n\n")

        elif option == 1:
            monto = float(input("\nIngrese la cantidad que desea retirar: "))
            print("\nUsted ha retirado: $" + str(monto))
            print(cliente1.Retiro(monto))

        elif option == 2:
            deposito = float(input("\nIngrese la cantidad que desea depositar: "))
            print("\nUsted ha depositado: $" + str(deposito))
            print(cliente1.Deposito(deposito))

        elif option == 3:
            print(cliente1.ConsultaSaldo())

#Se llama a la funcion main.
if __name__=="__main__":
    main()
