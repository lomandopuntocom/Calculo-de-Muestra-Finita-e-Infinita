#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	string respuesta;
	int n;
	double z, p, q, e;
	do{
	cout<<"introduce la poblacion"<<endl;
			cin>>n;
		cout<<"introduce el nivel de confianza"<<endl;
			cin>>z;
		cout<<"introduce la probabilidad de exito"<<endl;
			cin>>p;
		cout<<"introduce la probabilidad de fracaso"<<endl;
			cin>>q;
		cout<<"introduce el nivel de error"<<endl;
			cin>>e;
		double r = ((pow(z,2))*p*q*n)/(pow(e,2)*(n-1)+pow(z,2)*p*q);
		cout<<"el resultado de la ecuacion es "<<endl;
		cout<<r<<endl;
			cout<<"quieres hacer otra ecuacion?"<<endl;
			cin>>respuesta;	
	}
	while(respuesta =="si"||respuesta =="Si"||respuesta=="sI");
	return 0;
}