#include "Complex.h"

Complex::Complex()
{
	first = 0;
	second = 0;
}
Complex::Complex(double x, double y)
{
	first = x;
	second = y;
}
Complex::Complex(const Complex& x)
{
	first = x.first;
	second = x.second;
}
Complex::~Complex() {}

Abstract* Complex::add(Abstract* a)
{
	return new Complex(this->first + ((Complex*)a)->first, this->second + ((Complex*)a)->second);
}

ostream& operator << (ostream& out, const Complex& a)
{
	out << (string)a << endl;
	out << endl;
	return out;
}

istream& operator >> (istream& in, Complex& a)
{
	cout << "first:  "; in >> a.first;
	cout << "second: ";in >> a.second;
	return in;
};


Complex& Complex::operator =(const Complex& m)
{
	this->first = m.first;
	this->second = m.second;
	return *this;
}

Complex::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "summa = " <<'('<< GetFirst()<<','<< GetSecond() <<')' << endl;
	return ss.str();
}

 Complex* Complex::operator = (Abstract* r)
{
	 this->first = dynamic_cast<Complex*>(r)->first;
	 this->first = dynamic_cast<Complex*>(r)->second;
	 return this;

}

  void Complex::PrintName()
 {
	 cout << "summa = " << '(' << GetFirst() << ',' << GetSecond() << ')' << endl;
 }