#include <iostream>
#include <ctime>
using namespace std;

//class Fraction
//{
//public:
//	int numerator; 
//	int denominator;
//	Fraction()
//	{
//		cout << "Введите числитель: ";
//		cin >> numerator;
//		cout << "Введите знаминатель: ";
//		cin >> denominator;
//	}
//	Fraction(int Numerator, int Denominator)
//	{
//		numerator = Numerator;
//		denominator = Denominator;
//	}
//	void Assign(int Numerator, int Denominator)
//	{
//		numerator = Numerator;
//		denominator = Denominator;
//	}
//	void Print()
//	{
//		cout << numerator << "/" << denominator << "\n";
//	}
//	void Mul(Fraction a)
//	{
//		Assign(numerator * a.numerator, denominator * a.denominator);
//	}
//	void Div(Fraction a)
//	{
//		Assign(numerator * a.denominator, denominator * a.numerator);
//	}
//	void Sum(Fraction a)
//	{
//		Assign(numerator * a.denominator + denominator * a.numerator, denominator * a.denominator);
//	}
//	void Sub(Fraction a)
//	{
//		Assign(numerator * a.denominator - denominator * a.numerator, denominator * a.denominator);
//	}
//	Fraction operator +(const Fraction a)
//	{
//		Fraction r(numerator, denominator);
//		r.Sum(a);
//		return r;
//	}
//	Fraction operator -(Fraction a)
//	{
//		Fraction r(numerator, denominator);
//		r.Sub(a);
//		return r;
//	}
//	Fraction operator /(Fraction a)
//	{
//		Fraction r(numerator, denominator);
//		r.Div(a);
//		return r;
//	}
//	Fraction operator *(Fraction a)
//	{
//		Fraction r(numerator, denominator);
//		r.Mul(a);
//		return r;
//	}
//};
//
//int main()
//{
//	Fraction f1;
//	Fraction f2;
//
//	//f1.Print();
//	//f2.Print();
//	//
//	//f1.Mul(f2);
//	//f1.Print();
//	//
//	//f1.Div(f2);
//	//f1.Print();
//	//
//	//f1.Sum(f2);
//	//f1.Print();
//	//
//	//f1.Sub(f2);
//	//f1.Print();
//	f1.Print();
//	f2.Print();
//	Fraction f3 = f1 + f2;
//	f3.Print();
//	f3 = f1 - f2;
//	f3.Print();
//	f3 = f1 / f2;
//	f3.Print();
//	f3 = f1 * f2;
//	f3.Print();
//	
//}


class MyDate
{
	
public:
	int day;
	int month;
	int year;
	MyDate(int year, int month, int day)
	{
		
		this->day = day;
		this->month = month;
		this->year = year;
		

	}
	int operator -(MyDate a)
	{
		int dLeft = year * 365 + (month - 1) * 30 + day - 1;
		int dRight = a.year * 365 + (a.month - 1) * 30 + a.day - 1;
		return dLeft - dRight;
	}
	MyDate operator +(int a)
	{
		int d = year * 365 + (month - 1) * 30 + day - 1 + a;
		MyDate r(d / 365, (d % 365) / 30 + 1, (d % 365) % 30 + 1);
		return r;
	}
	
};

int main()
{
	MyDate d1(2020, 1, 5);
	MyDate d2(2024, 1, 6);
	cout << d2 - d1 << "\n";
	MyDate d3(2020, 10, 30);
	d3 = d3 + 247;
	cout << d3.year << " " << d3.month << " " << d3.day;
	//int year;
	//int d;
	//int month;
	//int day;
	//
	//d = year * 365+ (month - 1) * 30 + day;
	//year = d / 365;
	//month = (d % 365) / 30 + 1;
	//day = (d % 365) % 30 + 1;

}