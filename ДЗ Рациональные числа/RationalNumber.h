#pragma once
#include <iostream>
using namespace std;
class RationalNumber
{
private:
	int num;
	int den;

	int const NOD();
	void reduce();

public:
	RationalNumber();
	RationalNumber(int, int);
	RationalNumber(const RationalNumber&);

	void set(int, int);
	int get_num() const;
	int get_den() const;
	


	// 1 \\

	void sum(const RationalNumber&);
	RationalNumber dif(const RationalNumber&) const;
	RationalNumber mult(const RationalNumber&) const;
	RationalNumber div(const RationalNumber&) const;



	// 3 \\ 
		
	RationalNumber operator + (const RationalNumber&);
	RationalNumber operator + (int);
	RationalNumber operator - (const RationalNumber&);
	RationalNumber operator * (const RationalNumber&);
	RationalNumber operator / (const RationalNumber&);
	RationalNumber& operator = (const RationalNumber&);
	RationalNumber operator++();
	RationalNumber operator++(int);

	friend void operator += (RationalNumber&, const RationalNumber&);
	friend istream& operator >> (istream& in, RationalNumber&);
	friend ostream& operator << (ostream& out, RationalNumber&);


	void input();
	void output();
	~RationalNumber();
};

