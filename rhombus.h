//---------------------------------------------------------
/**
//    @file	rhombus.h
//    @brief	Declaration of the class Rhombus
//
*/
//---------------------------------------------------------

#ifndef Rhombus__DEF
#define Rhombus__DEF

// A Rhombus is a specific type of polygon.
#include "polygon.h"

/**
@class Rhombus
@brief Rhombus is a class describing a polygon with four sides which are parallel in couples.

A rhombus can be completely described by using the length of its diagonals: the segments connecting the two couples of non-adjacent (ie not sharing a rhombus side) vertices.
*/
class Rhombus : public Polygon
{

	///////////////////////////// PRIVATE   Segment
private:
	float diagH;
	float diagV;

	float Side();
	///////////////////////////// PROTECTED Segment
protected:

	///////////////////////////// PUBLIC    Segment
public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{

	/// Default constructor
	Rhombus();

	/// Copy constructor
	Rhombus(const Rhombus &r);

	/// Init constructor
	Rhombus( float w, float l);

	/// Destructor
	~Rhombus();

	//@}

	/// @name OPERATORS
	/// @{

	/// Assignment overloading
	Rhombus& operator=(const Rhombus &r);

	/// Comparison overloading
	bool operator==(const Rhombus &r);

	/// Print operator
	friend ostream & operator << ( ostream &o, Rhombus &r);

	/// Input operator
	friend istream & operator >> ( istream &i, Rhombus &r);

	//@}

	/// @name BASIC HANDLING
	/// @{

	/// Default initialization
	void Init();

	/// Copy initialization
	void Init( const Rhombus &r);

	/// Object erasure
	void Reset();

	/// Outputs internal errors
	void ErrorMessage(const char *string);

	//@}

	// ACCESS FUNCTIONS
	/// Get_
	void GetDiagonals(float &dH, float &dV);
	float GetDiagH();
	float GetDiagV();
	float GetSide();
	// As a class derivated from polygon, Area and Perimeter are mandatory:
	float Area();
	float Perimeter();
	/// Set_
	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);

	/// @name DEBUG and SERIALIZATION
	/// @{

	/// Object printout for diagnostic
	void Dump();

	//@}

};

#endif
