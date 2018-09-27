#include "stdafx.h"



CHelicoptero::CHelicoptero():CAereo()
{
	x = 35;
	y = 2;
	alto = 3;
	ancho = 13;
	dy = 1;
	dx = 1;
}


CHelicoptero::~CHelicoptero()
{
}

void CHelicoptero::mostrar(){

	Console::SetCursorPosition(x, y);
	cout << "  -----|-----" << endl;
	Console::SetCursorPosition(x, y+1);
	cout << "*>=====[_]L) " << endl;
	Console::SetCursorPosition(x, y + 2);
	cout << "    -'-`-    " << endl;

}

void CHelicoptero::borrar(){
	Console::SetCursorPosition(x, y);
	cout << "             " << endl;
	Console::SetCursorPosition(x, y + 1);
	cout << "             " << endl;
	Console::SetCursorPosition(x, y + 2);
	cout << "             " << endl;


}
