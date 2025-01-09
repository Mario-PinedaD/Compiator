#include <iostream>
using namespace std;
int main() {
	int a = 5; 
	int b = 2; 
	float c = 3.14; 

string d = "Esta es una cadena bien bonita"; 
	cout << "Escribe un valor entero" << endl; 
	cin >> a; 
	cout << "El valor de a es: " << a << endl; 
	cout << "El valor de b es: " << b << endl; 
	cout << "El valor de c es: " << c << endl; 
	cout << "El valor de d es: " << d << endl; 
	if ((a > 10)) { 
		cout << "a es mayor que 10" << endl; 
	} 
else  { 
	cout << "a no es mayor que 10" << endl; 
	} 
while ((c < 10.0)) {
	cout << "PRUEBA WHILE | Valor de C actualmente: " << c << endl; 
	c = c + 0.1;
}
	cout << "\nPresiona Enter para salir...";
	cin.ignore();
	cin.get();
	return 0;
}