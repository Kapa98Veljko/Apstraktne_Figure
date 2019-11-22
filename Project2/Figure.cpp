#include "Figure.h"

Krug::Krug(double r)
{
	this->r = r;
}

double Krug::obim()
{
	return 2*r*PI;
}

double Trougao::obim()
{
	return a+b+c;
}

Pravougaonik::Pravougaonik(double a, double b)
{
	this->a = a;
	this->b = b;
}

double Pravougaonik::obim()
{
	return 2*this->a+2*this->b;
}

Trougao::Trougao(double a, double b, double c) {

	this->a = a;
	this->b = b;
	this->c = c;
}