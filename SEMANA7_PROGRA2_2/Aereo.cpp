#include "stdafx.h"



CAereo::CAereo(int _x, int _y, int _ancho, int _alto, int _dx, int _dy):CVehiculo(_x, _y, _ancho, _alto, _dx )
{

	dy = _dy;
}


CAereo::~CAereo()
{
}

void CAereo::mover(){

	if (x + dx<10|| x + ancho + dx>79)
	{
		dx *= -1;
	}

	if (y + dy<0 || y + alto + dy>15)
	{
		dx *= -1;
	}


	x += dx;
	y += dy;


}
