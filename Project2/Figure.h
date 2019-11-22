#ifndef FIGURA
#define FIGURA

const double PI = 3.14;
class Figura {
public:
	virtual double obim() = 0;
};

class Krug :public Figura {
public:
	Krug(double r);
	virtual double obim() override;
private:
	double r;
};
class Trougao :public Figura {
	Trougao(double a,double b,double c);
	virtual double obim() override;
private:
	double a, b, c;
};
class Pravougaonik :public Figura {
public:
	Pravougaonik(double a,double b);
	virtual double obim() override;
private:
	double a, b;
};

#endif// FIGURA
