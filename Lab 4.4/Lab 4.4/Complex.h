#pragma once
#include "Pair.h"

class Complex
	:public Pair
{
protected:
	double first, second;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	~Complex();
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(double value) { first = value; }
	void SetSecond(double value) { second = value; }
	Complex& operator =(const Complex& r);

	operator string() const;
	friend ostream& operator << (ostream& out, const Complex& r);
	friend istream& operator >> (istream& in, Complex& r);

	virtual Pair* add(Pair*);
	virtual Pair* sub(Pair*);
	virtual Pair* mul(Pair*);
	virtual Pair* div(Pair*);
	virtual bool equ(Pair*);
	virtual Pair* conj();
	
	virtual Complex* operator = (Pair* r);

	virtual Pair* operator - (Pair*);
	virtual Pair* operator + (Pair*);
	virtual Pair* operator * (double);
	virtual Pair* operator / (Pair*);
	virtual Pair* operator / (double);

	virtual bool operator == (const Pair*);
	virtual bool operator != (const Pair*);
	virtual bool operator >= (const Pair*);
	virtual bool operator <= (const Pair*);
	virtual bool operator > (const Pair*);
	virtual bool operator < (const Pair*);
};

