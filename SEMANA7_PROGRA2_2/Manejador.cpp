#include "stdafx.h"



CManejador::CManejador()
{
	objHelicoptero = new CHelicoptero();

}


CManejador::~CManejador()
{
}


void CManejador::Mostrar(int _opc){

	objHelicoptero->mostrar();



}

void CManejador::Borrar(int _opc){
	objHelicoptero->borrar();

}

void CManejador::Mover(int _opc){
	objHelicoptero->mover();

}