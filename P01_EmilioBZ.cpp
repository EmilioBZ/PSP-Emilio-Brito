#include <iostream>
#include <string>
using namespace std;

int a,b,res;

int main(){
	cout<<"Ingresa el valor del lado a: ";
	cin>>a;
	cout<<"Ingresa el valor del lado b: ";
	cin>>b;
	
	if (a==0 || b==0){
		cout<<"Ninguno de los valores puede ser 0";
	} else if (a>0 && b> 0 && a==b){
		res = a*b;
		cout<<"El resultado del area es: " << res << " y es un cuadrado.";
	} else {
		res = a*b;
		cout<<"El resultado del area es: " << res;
	}
	
	return 0;
}
