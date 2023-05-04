/*!
@file polygon.h
@brief Declaration of the general class Polygon
*/


#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>

using namespace std;

/// @class Polygon
/// @brief An abstract base class for polygons.
///
/// A polygon is a bidimensional shape constituting of a closed loop of straight lines, called sides.\n
/// Polygon means "multiple angles"; the angles between the sides.\n
/// Obviously the number of angles and sides always correspond.\n
/// Depending on this number and optionally on features of the angles and-or the sides, a polygon can be differentiated as a particular sub-class of the polygon class.\n
/// In fact, it must be. Being an *abstract base class*, no stand-alone object of the class polygon can ever be created.
class Polygon {

protected:

	float perimeter;
	float area;

	/// @name Pure virtual describers.
	/// @brief Mandatory for all classes derived from Polygon.\nThey make Polygon an abstract base class.
	/// @{
	virtual float Area()=0;
	virtual float Perimeter()=0;
	//@}

public:

	/// @name Constructors.
	/// @{
	Polygon();
	Polygon(const Polygon &p);
	virtual ~Polygon();
	/// @}

	/// @name Operators.
	/// @{
	Polygon& operator=(const Polygon &p);
	bool operator==(const Polygon &p);
	/// @}

	/// @name Basic handling.
	/// @{
	void Init();
	void Init(const Polygon &r);
	void Reset();
	/// @}


	/// @name Getters.
	/// @{
	float GetArea();
	float GetPerimeter();
	/// @}

	/// @name Debug and serialization.
	/// @{
	void ErrorMessage(const char *string);
	void WarningMessage(const char *string);
	void Dump();
	/// @}

};

#endif
