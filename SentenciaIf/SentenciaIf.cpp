#include <iostream>
using namespace std;

// Tipos de operadores
/*
Operadores comunes

+ es para realizar sumas o concatenar una cadena
- es para realizar restas
/ es para realizar diviciones
* es para realizar multiplicaciones
= es para asignar un valor a un variable

Operadores de incremento o decremento

++ es para sumar o incrementar en 1 un numero
-- es para restar o decrementar en 1 un numero

Operadores de comparacion

== es para comparar valores de un mismo tipo
!= es para diferenciar los valores de un mismo tipo
< es para comparar si el valor es menor que
> es para comparar si el valor es mayor que
<= es para comparar si el valor es menor igual que
>= es para comparar si el valor es mayor igual que

Otros operadores

&& es para validar dos proposiciones, y esta se cumple cuando las dos proposiciones son verdaderas
|| es para validar una de dos proposiciones, y esta se cumple cuando una de las dos proposiciones son verdaderas

~ sirve para negar una proposicion

*/
// 

int main() {
	int edad = 0;
	string tipo = "";
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	
	if (edad < 18) {
		tipo = "un menor de edad";
	} else if (edad >= 18 && edad < 30) {
		tipo = "una persona joven";
	} else if (edad >= 30 && edad < 60) {
		tipo = "una persona adulta mayor";
	} else if (edad >= 60 && edad < 80) {
		tipo = "una persona de la tercera edad";
	} else {
		tipo = "una persona vieja";
	}
	
	cout<<"El usuario es "<< tipo <<endl;
	
	return 0;
}
