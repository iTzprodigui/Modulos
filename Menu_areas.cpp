/*
Elaborar un algoritmo que ofresca un menu de opcciones,mediante el cual se pueda escoger calcular el area de 
figuras geometricas: Triangulo,Cuadrado,Rectangulo y un circulo. Una vez seleccionada la opccion, utilizar un modulo
que permita solicitar los datos necesarios, hacer el calculo correspondiente y mostrarlo en pantalla.
Codigo realizado por: Roman Santini, Deyvi Cetzal, Carlos Castillo, Rudy Garcia.
*/
#include <iostream>
using namespace std;

// Modulo del triangulo
double at(double h, double b){
 double atri;
atri=(b*h)/2;
return atri;
}

// Modulo del cuadrado
double ac(double l){
double acu;
acu=(l*l);
return acu;
}

// Modulo del rectangulo
double ar(double ba, double ha){
	double arec;
arec=(ba*ha);
return arec;
}

// Modulo del circulo
double acir(double r){
double acirc;
acirc=3.1416*(r*r);
return acirc;
}

int main(){
	int f;
	double h,b,l,ba,ha,r;
	do{
   cout<<"Escoja el numero de la figura Geometrica de la cual desea calclar el area" << endl;
   cout<< "(1) TRIANGULO"  << endl;
   cout<<"(2) CUADRADO"  << endl;
   cout<<"(3) RECTANGULO"  << endl;
   cout<<"(4) CIRCULO"  << endl;
   cout<<"(5) Salir" << endl;
      cin>>f;
   switch(f){
   	// Modulo del triangulo
   	case 1:{
	cout<<"ingrese la base"<<endl;
	cin>>b;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	cout<<"El Area del triangulo es:    "<<endl;
	cout << at(h,b)<<endl;
   	break;
	}
	// Modulo del cuadrado
	case 2:{
	cout<<"ingrese el lado"<<endl;
    cin>>l;
    cout<<"El Area del cuadrado es:    "<<endl;
    cout<<ac(l) << endl;  	
	break;
	}
	// Modulo del circulo
	case 3:{
	cout<<"ingrese la base"<<endl;
	cin>>ba;
	cout<<"ingrese la altura"<<endl;
	cin>>ha;
	cout<<"El Area del rectangulo es:    "<<endl;
	cout<< ar(ba,ha) << endl;	
	break;
	}
	// Modulo del rectangulo
	case 4:{
	cout<<"ingrese el radio"<<endl;
	cin>>r;
	cout<<"El Area del circulo es:    "<<endl;
	cout<< acir(r) << endl;
	break;
	}
	// Error 
    default:
	cout << "Respuesta invalida"<< endl;
	}
	
	}while (f!=5);
	
	system("pause");
return 0;
}
