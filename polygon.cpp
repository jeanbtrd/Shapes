#include "polygon.h"

/// @brief default constructor
Polygon::Polygon()
{
	cout << "Polygon - constructor - default" << endl;

	area = 0.;
	perimeter = 0.;
}

/// @brief copy constructor
/// @param p reference to the polygon that should be copied.
Polygon::Polygon(const Polygon &p)
{
	cout << "Polygon - copy constructor" << endl;
	Init(p);
}

/// @brief destructor
Polygon::~Polygon()
{
	cout << "Polygon - destructor" << endl;
	Reset();
}

/// @brief overload of assign operator.
/// @param p reference to the polygon on the right of the operator
/// @return reference to the object on the left side of the operator
///
/// What does it mean for a polygon to become the same as another? It absolutely depends on the sub-class of the two polygons.\n\n
/// Best bet for now is to make it do nothing.
Polygon& Polygon::operator=(const Polygon &p)
{
	return *this;
}

/// @brief overload of comparison operator.
/// @param p reference to the polygon on the right side of the operator
/// @return always false.
///
/// What does it mean for two polygons to be the same? It absolutely depends on the sub-class of the two polygons.\n\n
/// Best bet for now is to make it return always false.
bool Polygon::operator==(const Polygon &r)
{
	return false;
}


/// @brief default initialization of the polygon.
void Polygon::Init()
{
	Reset();
}


/// @brief Initialization of the polygon as a copy of a polygon.
/// @param p reference to the polygon that should be copied.
///
/// What does it mean for a polygon to be crated as a copy of another? It absolutely depends on the sub-class of the two polygons.\n\n
/// Best bet for now is to make it do nothing.
void Polygon::Init(const Polygon &p)
{

}

/// @brief Total reset of the polygon.
void Polygon::Reset()
{
	perimeter = 0.;
	area = 0.;
}

/// @brief Get the area of the polygon.
/// @return area
///
/// This runs the `Area()` function defined in the sub-class of polygon which specifies the underlying object.\n
/// NB: being a pure virtual describer of the class polygon, it is assured that every possible subclass of polygon has it.
float Polygon::GetArea()
{
	area = Area();
	return area;
}

/// @brief Get the perimeter of the polygon.
/// @return perimeter
///
/// This runs the `Perimeter()` function defined in the sub-class of polygon which specifies the underlying object.\n
/// NB: being a pure virtual describer of the class polygon, it is assured that every possible subclass of polygon has it.
float Polygon::GetPerimeter()
{
	perimeter = Perimeter();
	return perimeter;
}

/// @brief Write an error message.
/// @param string message to be printed.
void Polygon::ErrorMessage(const char *string)
{
	cout << endl << "ERROR -- Polygon --";
	cout << string << endl;
}

/// @brief Write a warning message.
/// @param string message to be printed.
void Polygon::WarningMessage(const char *string)
{
	cout << endl << "WARNING -- Polygon --";
	cout << string << endl;
}


/// @brief For debugging: print all about the polygon.
void Polygon::Dump()
{
	cout << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Area = " << GetArea() << endl;
	cout << endl;
}
