///	\file rhombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.

#include <iostream>
#include <cmath>

#include "rhombus.h"

///@{ Constructors

///	@brief default constructor
Rhombus::Rhombus()
{
	cout << "Rhombus - constructor - default" << endl;

	diagH = (float)0;
	diagV = (float)0;
}

///	@brief copy constructor
///	@param r rhombus to copy.
Rhombus::Rhombus(const Rhombus & r)
{
	cout << "Rhombus - constructor - copy" << endl;

    diagH = r.diagH;
    diagV = r.diagV;
}

///	@brief init constructor
///	@param dh horizontal diagonal in pixels
///	@param dv vertical diagonal in pixels
Rhombus::Rhombus(float dh, float dv)
{
	diagH = (float)0;
	diagV = (float)0;

	cout << "Rhombus - constructor" << endl;

	if (dh <= (float)0) cout << "WARNING: Rhombus - constructor: horizontal diagonal should be > 0" << endl;
	else diagH = dh;

	if (dv <= (float)0) cout << "WARNING: Rhombus - constructor: vertical diagonal should be > 0" << endl;
	else diagV = dv;
}

///	@brief destructor
Rhombus::~Rhombus()
{
	cout << "Rhombus - destructor" << endl;
}

//@}

///@{ operators

///	@brief overload of assign operator
///	@param reference to the object on the right height of the operator
///	@return reference to the object on the left height of the operator
Rhombus& Rhombus::operator=(const Rhombus &r)
{
		cout << "Rhombus - operator =" << endl;

		diagH = r.diagH;
		diagV = r.diagV;

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
		return (( r.diagH == diagH && r.diagV == diagV ) ? true : false);
}

//@}

///@{ Functions

///@{ Set functions

///	@brief set horizontal diagonal of the rhombus
///	@param dH
void Rhombus::SetDiagH(float dH)
{
	if (dH < 0)
	{
		cout << "WARNING: Rhombus - SetDiagH: horizontal diagonal should be > 0" << endl;
		return;
	}
	diagH = dH;
}

///	@brief set vertical diagonal of the rhombus
///	@param dV
void Rhombus::SetDiagV(float dV)
{
	if (dV < 0)
	{
		cout << "WARNING: Rhombus - SetDiagV: vertical diagonal should be > 0" << endl;
		return;
	}
	diagV = dV;
}

///	@brief set both diagonals of the rhombus
///	@param dH
///	@param dV
void Rhombus::SetDim(float dH, float dV)
{
	SetDiagH(dH);
	SetDiagV(dV);
}

//@}

///@{ Get functions

///	@brief get both diagonals of the rhombus
///	@param dH diagH in pixels
///	@param dV diagV in pixels
void Rhombus::GetDiagonals(float &dH, float &dV)
{
		dH=diagH;
		dV=diagV;
}

///	@brief get horizontal diagonal of the rhombus
///	@return horizontal diagonal of the rhombus
float Rhombus::GetDiagH()
{
		return diagH;
}

///	@brief get vertical diagonal of the rhombus
///	@return vertical diagonal of the rhombus
float Rhombus::GetDiagV()
{
		return diagV;
}

///	@brief calculate and return the side of the rhombus
///	NB: all 4 sides of a rhombus are equal
///	@return length of the side of the rhombus
float Rhombus::GetSide()
{
		return (float)(sqrt(diagH*diagH+diagV*diagV)/2);
}

///	@brief calculate and return the area of the rhombus
///	@return the area of the rhombus
float Rhombus::GetArea()
{
		return (float)(diagH * diagV)/2;
}

///	@brief calculate and return the perimeter of the rhombus
///	@return the perimeter of the rhombus.
float Rhombus::GetPerimeter()
{
		return (float)4*(GetSide());
}

//@}

//@}
