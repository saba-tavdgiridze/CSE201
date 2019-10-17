#include<iostream>
#include<cmath>
#include "Complex.hpp"


Complex::Complex()
{
	real = imaginary = 0.0;
}

Complex::Complex(double real, double imaginary)
{
	this->real = real;
	this->imaginary = imaginary;

}

double Complex::getReal()
{
	return real;
}
double Complex::getImaginary()
{
	return imaginary;
}
void Complex::setReal(double real)
{
	this->real = real;
}
void Complex::setImaginary(double imaginary)
{
	this->imaginary = imaginary;
}
double Complex::magnitude()
{
	return sqrt(pow(real,2.0)+pow(imaginary,2.0));
}
void Complex::normalize()
{
	double length = this->magnitude();
	if(length < eps){
		return ;
	}
	this->real/=length;
	this->imaginary/=length;
}

Complex Complex::operator-()
{
	Complex neg = Complex(this->real,this->imaginary);
	return neg;
}
Complex Complex::operator+(const Complex &other)
{
	Complex res = Complex(this->real + other.real,this->imaginary + other.imaginary);
	return res;
}
Complex Complex::operator-(const Complex &other)
{
	Complex res = (*this)+(-other);
}
Complex Complex::operator*(const Complex &other)
{
	double real = (this->real)*(other.real)-(this->imaginary)*(other.imaginary);
	double imaginary = (this->real)*(other.imaginary)+(this->imaginary)*(other.real);
	Complex res = Complex(real,imaginary);
	return res;
}



















