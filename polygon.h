//---------------------------------------------------------
/**
//    @file		Polygon.h
//    @brief	Header file for CLASS Polygon
*/
//---------------------------------------------------------

#ifndef Polygon__DEF
#define Polygon__DEF

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
@class Polygon
@brief Polygon is an abstract class describing two-dimensional shapes formed by a closed loop of straight segments.

*/

using namespace std;

class Polygon
{

///////////////////////////// PRIVATE   Segment
private:

///////////////////////////// PROTECTED Segment
protected:
	/// @name virtual describers (interface)
	/// @{
	/// Area
	virtual float Area()=0;
	/// Perimeter
	virtual float Perimeter()=0;
	// @}

///////////////////////////// PUBLIC    Segment
public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{

	/// Default constructor
	Polygon();

	/// Copy constructor
	Polygon( Polygon & p);

	/// Destructor
	virtual ~Polygon();

	//@}

	/// @name OPERATORS
	/// @{

	/// Assignment overloading
	Polygon & operator = (Polygon & p);

	/// Comparison overloading
	bool	 operator ==(Polygon & p);

	/// Print operator
	friend ostream & operator << ( ostream & o, Polygon & p);

	/// Input operator
	friend istream & operator >> ( istream & i, Polygon & p);

	//@}

	/// @name BASIC HANDLING
	/// @{

	/// Default initialization
	void Init();

	/// Copy initialization
	void Init( Polygon & p);

	/// Object erasure
	void Reset();

	/// Outputs internal errors
	void ErrorMessage(const char *string);

	//@}

	// ACCESS FUNCTIONS
	/// Get_
	/// Set_

	/// @name DEBUG and SERIALIZATION
	/// @{

	/// Object printout for diagnostic
	void Dump();

	//@}

};

#endif
