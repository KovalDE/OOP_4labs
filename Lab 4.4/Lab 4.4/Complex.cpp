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

/*Abstract* Complex::add(Abstract* a)
{
	return new Complex(this->first + ((Complex*)a)->first, this->second + ((Complex*)a)->second);
}*/

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
	ss << '(' << GetFirst() << ',' << GetSecond() << ')' << endl;
	return ss.str();
}

Complex* Complex::operator = (Pair* r)
{
	this->first = dynamic_cast<Complex*>(r)->first;
	this->first = dynamic_cast<Complex*>(r)->second;
	return this;

}

Pair* Complex::add(Pair* a)
{
	return new Complex(this->first + ((Complex*)a)->first, this->second + ((Complex*)a)->second);
}
Pair* Complex::sub(Pair* a)
{
	return new Complex(this->first - ((Complex*)a)->first, this->second - ((Complex*)a)->second);
}
Pair* Complex::mul(Pair* a)
{
	return new Complex(this->first* ((Complex*)a)->first- this->second * ((Complex*)a)->second, this->first* ((Complex*)a)->second+ ((Complex*)a)->first * this->second);
}
Pair* Complex::div(Pair* a)
{
	return new Complex(this->first * ((Complex*)a)->first + this->second * ((Complex*)a)->second, ((Complex*)a)->first * this->second-this->first * ((Complex*)a)->second);
}
bool Complex::equ(Pair* a)
{
	if(this->first == ((Complex*)a)->first && this->second == ((Complex*)a)->second)
		return true;
	else false;
}
Pair* Complex::conj()
{
	return new Complex(this->first, this->second*(-1));
}

 Pair* Complex::operator - (Pair* a)
{
	 return new Complex(this->first - ((Complex*)a)->first, this->second - ((Complex*)a)->second);
}
 Pair* Complex::operator + (Pair* a)
{
	 return new Complex(this->first + ((Complex*)a)->first, this->second + ((Complex*)a)->second);
}
 Pair* Complex::operator * (double a)
{
	 return new Complex(this->first * a + this->second * a, a * this->second - this->first * a);
}
 Pair* Complex::operator / (Pair* a)
{
	 return new Complex(this->first * ((Complex*)a)->first + this->second * ((Complex*)a)->second, ((Complex*)a)->first * this->second - this->first * ((Complex*)a)->second);
}
 Pair* Complex::operator / (double a)
{
	 return new Complex(this->first * a + this->second * a, a * this->second - this->first * a);

}
 bool Complex::operator == (const Pair* a)
 {
	 if (this->first == ((Complex*)a)->first && this->second == ((Complex*)a)->second)
		 return true;
	 else return false;
 }
 bool Complex::operator != (const Pair* a)
 {
	 if (this->first != ((Complex*)a)->first && this->second != ((Complex*)a)->second)
		 return true;
	 else return false;
 }
 bool Complex::operator >= (const Pair* a)
 {
	 if (this->first >= ((Complex*)a)->first && this->second >= ((Complex*)a)->second)
		 return true;
	 else return false;
 }
 bool Complex::operator <= (const Pair* a)
 {
	 if (this->first <= ((Complex*)a)->first && this->second <= ((Complex*)a)->second)
		 return true;
	 else return false;
 }
 bool Complex::operator > (const Pair* a)
 {
	 if (this->first > ((Complex*)a)->first && this->second > ((Complex*)a)->second)
		 return true;
	 else return false;
 }
 bool Complex::operator < (const Pair* a)
 {
	 if (this->first < ((Complex*)a)->first && this->second < ((Complex*)a)->second)
		 return true;
	 else return false;
 }