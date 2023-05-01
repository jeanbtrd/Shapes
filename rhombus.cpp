//---------------------------------------------------------
/**
//    @file	rhombus.cpp
//    @brief	Implementation file for class Rhombus
*/
//---------------------------------------------------------

#include "rhombus.h"

//////////////////////////////////////////////////////////////////////////////
// fpi
// memory debug, place after includes

#ifdef DBGMEM_CRT
#undef new
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif // DBGMEM_CRT

/************************** GLOBAL FUNCTIONS AND VARIABLES ******************/

///////////////////////////////////////////////////////////////////////////
// Print operator
ostream & operator << (ostream &o, Rhombus & r)
{
	return o;
}

///////////////////////////////////////////////////////////////////////////
istream & operator >> (istream &i, Rhombus & r)
{
	return i;
}

/************************** MEMBER FUNCTIONS AND VARIABLES ******************/

///////////////////////////////////////////////////////////////////////////
// Default Constructor
Rhombus::Rhombus()
{
	cout << "START:\tRhombus - constructor - default" << endl;
	diagH = (float)0;
	diagV = (float)0;
	cout << "END:\tRhombus - constructor - default" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Copy Constructor
Rhombus::Rhombus( const Rhombus & r)
{
	cout << "START:\tRhombus - constructor - copy" << endl;
	Init(r);
	cout << "END:\tRhombus - constructor - copy" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Destructor
Rhombus::~Rhombus()
{
	cout << "START:\tRhombus - Destructor" << endl;
	Reset();
	cout << "END:\tRhombus - Destructor" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Init default initializer
void Rhombus::Init()
{
	cout << "START:\tRhombus - Init - default" << endl;
	Reset();
	cout << "END:\tRhombus - Init - default" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Init copy initializer
void Rhombus::Init(const Rhombus &r)
{
	cout << "START:\tRhombus - Init - copy" << endl;
	Reset();
    diagH = r.diagH;
    diagV = r.diagV;
	cout << "END:\tRhombus - Init - copy" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Object eraser
void Rhombus::Reset()
{
	cout << "START:\tRhombus - Reset" << endl;
	diagH = (float)0;
	diagV = (float)0;
	cout << "END:\tRhombus - Reset" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Overloading of assignment operator
Rhombus & Rhombus::operator=( const Rhombus & r)
{
	Reset();
	Init(r);
	return *this;
}

///////////////////////////////////////////////////////////////////////////
// Overloading of comparison operator
bool Rhombus::operator ==( const Rhombus & X)
{

	return true;
}

///////////////////////////////////////////////////////////////////////////
// Error messaging routine
void Rhombus::ErrorMessage( const char *string )
{
	printf("%s\n", string);
}

///////////////////////////////////////////////////////////////////////////
// Debug routine
void Rhombus::Dump()
{
	cout << "diagH:\t" << diagH << endl;
	cout << "diagV:\t" << diagV << endl;
}


///////////////////////////////////////////////////////////////////////////
// ACCESS FUNCTIONS
//
/// Get_
void Rhombus::GetDiagonals(float &dH, float &dV)
{
	dH=diagH;
	dV=diagV;
}

float Rhombus::GetDiagH()
{
	return diagH;
}

float Rhombus::GetDiagV()
{
	return diagV;
}

float Rhombus::GetSide()
{
	return (float)(sqrt(diagH*diagH+diagV*diagV)/2);
}

float Rhombus::Area()
{
	return (float)((diagH*diagV)/2);
}


float Rhombus::Perimeter()
{
	return (float)4*(GetSide());
}

/// Set_
void Rhombus::SetDim(float dH, float dV)
{
	SetDiagH(dH);
	SetDiagV(dV);
}

void Rhombus::SetDiagH(float dH)
{
	if (dH < 0)
	{
		cout << "WARNING: Rhombus - SetDiagH: horizontal diagonal should be > 0" << endl;
		return;
	}
	diagH = dH;
}

void Rhombus::SetDiagV(float dV)
{
	if (dV < 0)
	{
		cout << "WARNING: Rhombus - SetDiagH: horizontal diagonal should be > 0" << endl;
		return;
	}
	diagV = dV;
}
