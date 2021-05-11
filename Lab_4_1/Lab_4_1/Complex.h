#pragma once

#include "Abstract.h"
class Complex
	:public Abstract
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


	Abstract* add(Abstract* a);
	virtual Complex* operator = (Abstract* r);
	virtual void PrintName();
	};

