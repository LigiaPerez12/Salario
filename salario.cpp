#include <iostream>

using namespace std;

int main() {
	int sueldo, diaUno, diaDos, diaTres, diaCuatro, diaCinco, horasTrabajadas, valor;
	
	cout <<"Ingresar las horas trabajadas en el Dia1: "<<endl;
	cin>>diaUno;
	cout <<"Ingresar las horas trabajadas en el Dia2: "<<endl;
	cin>>diaDos;
	cout <<"Ingresar las horas trabajadas en el Dia3: "<<endl;
	cin>>diaTres;
	cout <<"Ingresar las horas trabajadas en el Dia4: "<<endl;
	cin>>diaCuatro;
	cout <<"Ingresar las horas trabajadas en el Dia5: "<<endl;
	cin>>diaCinco;
	cout<<"Ingrese el valor monetario por hora: "<<endl;
	cin>>valor;
	if (diaUno<=24 && diaDos<=24 && diaTres<=24 && diaCuatro<=24 && diaCinco<=24 ){
		horasTrabajadas = diaUno + diaDos + diaTres + diaCuatro + diaCinco;
	}
	else {
		cout<<"El rango de horas en el día esta incorrecto y no permite realizar el calculo. "<<endl;
	}
	
	sueldo = horasTrabajadas * valor;
	cout<<"\n"<<endl;
	cout<<"El numero de horas trabajas es: "<< + horasTrabajadas;
	cout<<"\n"<<endl;
	cout<<"Su sueldo es: "<< + sueldo;
	return 0;
}
