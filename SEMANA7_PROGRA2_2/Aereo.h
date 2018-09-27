#pragma once
#include "Vehiculo.h"
class CAereo :
	public CVehiculo
{
protected:
	int dy;
public:
	CAereo(int _x, int _y, int _ancho, int _alto, int _dx, int _dy);
	~CAereo();
	void mover();

};

