//---------------------------------------------------------
/**
//    @file	rectangle.h
//    @brief	Declaration of the class Rectangle
//
*/
//---------------------------------------------------------

#ifndef Rectangle__DEF
#define Rectangle__DEF

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


// A Rectangle is a specific type of polygon.
#include "polygon.h"

/**
@class Rectangle
@brief Rectangle is a class describing a polygon with four rect angles.

The Rectangle having four rect angles implies it has four sides, which are parallel in couples.
*/
class Rectangle : public Polygon
{

	///////////////////////////// PRIVATE   Segment
private:
	float width;
	float length;
	///////////////////////////// PROTECTED Segment
protected:

	///////////////////////////// PUBLIC    Segment
public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{

	/// Default constructor
	Rectangle();

	/// Copy constructor
	Rectangle(const Rectangle & r);

	/// Init constructor
	Rectangle( float w, float l);

	/// Destructor
	~Rectangle();

	//@}

	/// @name OPERATORS
	/// @{

	/// Assignment overloading
	Rectangle& operator=(const Rectangle &r);

	/// Comparison overloading
	bool operator==(const Rectangle &r);

	/// Print operator
	friend ostream & operator << ( ostream &o, Rectangle &r);

	/// Input operator
	friend istream & operator >> ( istream &i, Rectangle &r);

	//@}

	/// @name BASIC HANDLING
	/// @{

	/// Default initialization
	void Init();

	/// Copy initialization
	void Init( const Rectangle &r);

	/// Object erasure
	void Reset();

	/// Outputs internal errors
	void ErrorMessage(const char *string);

	//@}

	// ACCESS FUNCTIONS
	/// Get_
	void GetDim(float &w, float &l);
	float GetLength();
	float GetWidth();

	// As a class derivated from polygon, Area and Perimeter are mandatory.
	float Area();
	float Perimeter();
	/// Set_
	void SetDim(float w, float l);
	void SetLength(float l);
	void SetWidth(float w);

	/// @name DEBUG and SERIALIZATION
	/// @{

	/// Object printout for diagnostic
	void Dump();

	//@}

};

#endif
