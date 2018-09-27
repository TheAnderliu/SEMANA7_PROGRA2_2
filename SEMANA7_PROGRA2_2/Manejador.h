#pragma once
class CManejador
{
private:
	CHelicoptero * objHelicoptero;
	int opc;

public:
	CManejador();
	~CManejador();
	void Mostrar(int _opc);
	void Borrar(int _opc);
	void Mover(int _opc);
};

