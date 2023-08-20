#include <iostream>
using namespace std;

int main() {
	int option = 0;
	
	cout<<"Menu de hamburgesas"<< endl
		<<"1. Hamburgesa normal"<< endl
		<<"2. Hamburgesa pequenia"<< endl
		<<"3. Hamburgesa grande"<< endl
		<<"Selecciones la opcion "<< endl
		<<">>>";
	cin>>option;
	
	switch (option) {
	case 1:
		cout<<"La orden de la hamburgesa normal esta lista";
		break;
	case 2:
		cout<<"La orden de la hamburgesa pequenia esta lista";
		break;
	case 3:
		cout<<"La orden de la hamburgesa grande esta lista";
		break;
	default:
		cout<<"La orden esta lista";
		break;
	}
	
	return 0;
}
