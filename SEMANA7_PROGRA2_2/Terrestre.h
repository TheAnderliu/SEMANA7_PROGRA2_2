#pragma once
#include "Vehiculo.h"
class CTerrestre :
	public CVehiculo
{
public:
	CTerrestre(int _x, int _y, int _ancho, int _alto);
	~CTerrestre();
};

