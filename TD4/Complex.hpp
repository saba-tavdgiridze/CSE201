#include<iostream>


#ifndef COMPLEX_HPP_INCLUDED
#define COMPLEX_HPP_INCLUDED

#define eps 1e-12

class Complex{
	private:
		double real;
		double imaginary;
	public:
		Complex();
		Complex(double real, double imaginary);

		double getReal();
		double getImaginary();
		void setReal(double real);
		void setImaginary(double imaginary);

		double magnitude();
		void normalize();


		Complex operator-();
		Complex operator+(const Complex &other);
		Complex operator-(const Complex &other);
		Complex operator*(const Complex &other);

		bool operator==(const Complex &other);
		bool operator!=(const Complex &other);
};


#endif // COMPLEX_HPP_INCLUDED
