// SEMANA7_PROGRA2_2.cpp : main project file.

#include "stdafx.h"

void menu() {

	cout << "1. Helicoptero " << endl;
	cout << "2. Avion " << endl;
	cout << "3. Moto " << endl;

}

int main()
{
	CManejador * objman = new CManejador();
	int opc;
	menu();

	while (1) {

		objman->Mostrar(opc);
		_sleep(50);
		objman->Borrar(opc);
		objman->Mover(opc);

		if (kbhit())
		{
			if (toupper(_getch())=='M')
			{
				Console::Clear();
				menu();
				cout << "Ingrese opcion: ";
				cin >> opc;
			}
		}



	}




    return 0;
}
