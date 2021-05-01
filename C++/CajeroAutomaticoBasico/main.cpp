#include <iostream>

using namespace std;

//Definicion de la clase Cliente.
class Cliente {
  //Todos los atributos de la clase Cliente son privados.
  private:
    string Nombre, TipoDeCuenta;
    int NoDeCuenta;
    float Saldo;

  //Todos los atributos de la clase Cliente son publicos.
  public:
    //Prototipo de todos los metodos.
    void Registro(string nombre, string tipoDeCuenta, int noDeCuenta, float saldo);
    string Retiro(float monto);
    string Deposito(float monto);
    string ConsultaSaldo();
};

//Funcion main
int main() {

  Cliente cliente1;
  cliente1.Registro("Pedro Gutierrez", "Premier", 1234567890, 1000);
  unsigned short option = 0;
  float monto = 0;

  do{
    monto = 0;

    cout << "\n\t\t**Cajero Autom\u00E1tico**\n\n";
    cout << "1. Realizar un retiro\n";
    cout << "2. Realizar un deposito\n";
    cout << "3. Consultar saldo\n";
    cout << "4. Salir\n\n";
    cin >> option;

    switch(option) {
      case 1:
	cout << "\nIngrese la cantidad que desea retirar: ";
	cin >> monto;
	cout << cliente1.Retiro(monto) << endl;
      break;

      case 2:
	cout << "\nIngrese la cantidad que desea depositar: ";
	cin >> monto;
	cout << cliente1.Deposito(monto) << endl;
      break;

      case 3:
	cout << cliente1.ConsultaSaldo() << endl;
      break;

      case 4:
	return 0;

      default:
	cout << "\nERROR: El valor ingresado no es v\u00E1lido\n";
    }

  }while (option != 4);

  return 0;

}

//Definicion de los metodos de la clase Cliente

void Cliente::Registro(string nombre, string tipoDeCuenta, int noDeCuenta, float saldo) {
  Nombre = nombre;
  TipoDeCuenta = tipoDeCuenta;
  NoDeCuenta = noDeCuenta;
  Saldo = saldo;
}

string Cliente::Retiro(float monto) {
  Saldo = Saldo - monto;
  return ("\nSaldo final: $" + to_string(Saldo));
}

string Cliente::Deposito(float monto) {
  Saldo = Saldo + monto;
  return ("\nSaldo final: $" + to_string(Saldo));
}

string Cliente::ConsultaSaldo() {
  return ("\nSaldo actual: $" + to_string(Saldo));
}
