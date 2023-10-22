#include "RationalNumber.h"
#include <iostream>
using namespace std;

int const RationalNumber::NOD()
{
    int a = num;
    int b = den;
    while (a != 0 && b != 0)
        if (a > b)
            a %= b;
        else
            b %= a;
    return a + b;
}

void RationalNumber::reduce()
{
    int nod = NOD();
    den /= nod;
    num /= nod;
}

RationalNumber::RationalNumber()
{
    num = 0;
    den = 1;
}

RationalNumber::RationalNumber(int num, int den)
{
    this->num = num;
    this->den = den;
}

RationalNumber::RationalNumber(const RationalNumber& other)
{
    num = other.num;
    den = other.den;
}

void RationalNumber::set(int num, int den)
{
    this->num = num;
    this->den = den;
}

int RationalNumber::get_num() const
{
    return num;
}

int RationalNumber::get_den() const
{
    return den;
}



// 1 \\

void RationalNumber::sum(const RationalNumber& other)
{
    num = num * other.den + other.num * den;
    den = den * other.den;
}

RationalNumber RationalNumber::dif(const RationalNumber& other) const
{
    RationalNumber temp;
    temp.num = num * other.den - other.num * den;
    temp.den = den * other.den;
    return temp;
}

RationalNumber RationalNumber::mult(const RationalNumber& other) const
{
    RationalNumber temp;
    temp.num = num * other.num;
    temp.den = den * other.den;
    return temp;
}

RationalNumber RationalNumber::div(const RationalNumber& other) const
{
    RationalNumber temp;
    temp.num = num * other.den;
    temp.den = den * other.num;
    return temp;
}



// 3 \\ 

RationalNumber RationalNumber::operator+(const RationalNumber& other)
{
    RationalNumber temp;
    temp.num = num * other.den + other.num * den;
    temp.den = den * other.den;
    temp.reduce();
    return temp;
}

RationalNumber RationalNumber::operator+(int n)
{
    RationalNumber temp;
    temp.num = num + den * n;
    return RationalNumber();
}

RationalNumber RationalNumber::operator-(const RationalNumber& other)
{
    RationalNumber temp;
    temp.num = num * other.den - other.num * den;
    temp.den = den * other.den;
    return temp;
}

RationalNumber RationalNumber::operator*(const RationalNumber& other)
{
    RationalNumber temp;
    temp.num = num * other.num;
    temp.den = den * other.den;
    return temp;
}

RationalNumber RationalNumber::operator/(const RationalNumber& other)
{
    RationalNumber temp;
    temp.num = num * other.den;
    temp.den = den * other.num;
    return temp;
}

RationalNumber& RationalNumber::operator=(const RationalNumber& other)
{
    num = other.num;
    den = other.den;
    return *this;
}

RationalNumber RationalNumber::operator++()
{
    num += den;
    return *this;
}

RationalNumber RationalNumber::operator++(int)
{
    RationalNumber other(*this);
    num += den;
    return other;
}

void operator+=(RationalNumber& a, const RationalNumber& other)
{
    a.num = a.num * other.den + other.num * a.den;
    a.den *= other.den;
    a.reduce();
}

istream& operator>>(istream& in, RationalNumber& other)
{
    int a, b;
    in >> a >> b;

    other.set(a, b);

    return in;
}

ostream& operator<<(ostream& out, RationalNumber& other)
{
    out << other.get_num() << "/" << other.get_den() << endl;
    other.reduce();
    return out;
}



void RationalNumber::input()
{
    int a = 0, b = 0;

    while (b == 0) {
        cout << "Enter numerator: ";
        cin >> a;
        cout << "Enter denominator: ";
        cin >> b;

        if (b == 0) {
            cout << "Denominator 0, repeat" << endl;
        }
    }
    set(a, b);
    reduce();
}

void RationalNumber::output()
{
    reduce();
    cout << num << '/' << den << endl;
}

RationalNumber::~RationalNumber()
{
}
