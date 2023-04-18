///	\file rhombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.

#include <iostream>
#include <cmath>

#include "rhombus.h"

///	@brief default constructor
Rhombus::Rhombus()
{
	cout << "Rhombus - constructor - default" << endl;

	diagonal1 = 0;
	diagonal2 = 0;
}

///	@brief copy constructor
///	@param r rhombus to copy.
Rhombus::Rhombus(const Rhombus & r)
{
	cout << "Rhombus - constructor - copy" << endl;

    diagonal1 = r.diagonal1;
    diagonal2 = r.diagonal2;
}

///	@brief init constructor
///	@param d1 diagonal 1 in pixels
///	@param d2 diagonal 2 in pixels
Rhombus::Rhombus(int d1, int d2)
{
	diagonal1 = 0;
	diagonal2 = 0;

	cout << "Rhombus - constructor" << endl;

	if (d1 <= 0) cout << "WARNING: Rhombus - constructor: diagonal 1 should be > 0" << endl;
	else diagonal1 = d1;

	if (d2 <= 0) cout << "WARNING: Rhombus - constructor: diagonal 2 should be > 0" << endl;
	else diagonal2 = d2;
}

///	@brief destructor
Rhombus::~Rhombus()
{
	cout << "Rhombus - destructor" << endl;
}

/// ----------------- Operators ---------------------------

///	@brief overload of assign operator
///	@param reference to the object on the right height of the operator
///	@return reference to the object on the left height of the operator
Rhombus& Rhombus::operator=(const Rhombus &r)
{
		cout << "Rhombus - operator =" << endl;

		diagonal1 = r.diagonal1;
		diagonal2 = r.diagonal2;

		/// "this" is the pointer to the current object
		/// (the one who called the function).
		return *this;
}

///	@brief overload of operator ==
///	@param reference to the object on the right height of the operator
///	@return true if the two objects have the same width and the same length, false if not.
bool Rhombus::operator==(const Rhombus &r)
{
		cout << "Rhombus - operator ==" << endl;
		return (( r.diagonal1 == diagonal1 && r.diagonal2 == diagonal2 ) ? true : false);
}

///	@brief set diagonal 1 of the rhombus
///	@param D1 in pixels
void Rhombus::SetD1(int D1)
{
	if (D1 < 0)
	{
		cout << "WARNING: Rhombus - SetD1: diagonal 1 should be > 0" << endl;
		return;
	}
	diagonal1 = D1;
}

///	@brief set diagonal 2 of the rhombus
///	@param D2 in pixels
void Rhombus::SetD2(int D2)
{
	if (D2 < 0)
	{
		cout << "WARNING: Rhombus - SetD2: diagonal 2 should be > 0" << endl;
		return;
	}
	diagonal2 = D2;
}

///	@brief set both diagonals of the rhombus
///	@param D1 in pixels
///	@param D2 in pixels
void Rhombus::SetDim(int D1, int D2)
{
	SetD1(D1);
	SetD2(D2);
}

///	@brief get diagonal 1 of the rhombus
int Rhombus::GetD1()
{
		return diagonal1;
}

///	@brief get diagonal 2 of the rhombus
int Rhombus::GetD2()
{
		return diagonal2;
}

///	@brief get both diagonals of the rhombus
///	@param d1 diagonal1 in pixels
///	@param d2 diagonal2 in pixels
void Rhombus::GetDim(int &d1, int &d2)
{
		d1=diagonal1;
		d2=diagonal2;
}

///	@brief calculate and return the area of the rhombus
///	@return the area of the rhombus in square pixels
int Rhombus::GetArea()
{
		return (int)(diagonal1 * diagonal2)/2;
}

///	@brief calculate and return the side of the rhombus
///	NB: all 4 sides of a rhombus are equal
///	@return length of the side of the rhombus, in pixels.
int Rhombus::GetSide()
{
		return (int)(sqrt(diagonal1*diagonal1+diagonal2*diagonal2)/2);
}

///	@brief calculate and return the perimeter of the rhombus
///	@return the perimeter of the rhombus in pixels
int Rhombus::GetPerimeter()
{
		return 4*(GetSide());
}
