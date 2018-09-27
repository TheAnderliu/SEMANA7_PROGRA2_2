#pragma once
class CVehiculo
{
protected:
	int x, y, dx, ancho, alto;

public:
	CVehiculo(int _x, int _y, int _ancho, int _alto, int _dx);
	~CVehiculo();
};

