/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include <iostream>
#include "rectangle.h"

/// @brief default constructor
Rectangle::Rectangle()
{
	cout << "Rectangle - constructor - default" << endl;

	width = 0;
	length = 0;
}

/// @brief copy constructor
/// @param R rectangle to copy.
Rectangle::Rectangle(const Rectangle & r)
{
	cout << "Rectangle - constructor - copy" << endl;

    width = r.width;
    length = r.length;
}

/// @brief init constructor
/// @param w width in pixels
/// @param h length in pixels
Rectangle::Rectangle(int w, int l)
{
	width = 0;
	length = 0;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0) cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else width = w;

	if (l <= 0) cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else length = l;
}

/// @brief destructor
Rectangle::~Rectangle()
{
	cout << "Rectangle - destructor" << endl;
}

/// ----------------- Operators ---------------------------

/// @brief overload of assign operator
/// @param reference to the object on the right side of the operator
/// @return reference to the object on the left side of the operator
Rectangle& Rectangle::operator=(const Rectangle &r)
{
    cout << "Rectangle - operator =" << endl;

    width = r.width;
    length = r.length;

    /// "this" is the pointer to the current object
    /// (the one who called the function).
    return *this;
}

/// @brief overload of operator ==
/// @param reference to the object on the right side of the operator
/// @return true if the two objects have the same width and the same length, false if not.
bool Rectangle::operator==(const Rectangle &r)
{
    cout << "Rectangle - operator ==" << endl;

    return (( r.width == width && r.length == length ) ? true : false);
    //if( r.width == width && r.length == length ) return true; return false;
}

/// @brief set width of the object
/// @param w width in pixels
void Rectangle::SetWidth(int w)
{
	if (w < 0)
    {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}
	width = w;
}

/// @brief set length of the object
/// @param l length in pixels
void Rectangle::SetLength(int l)
{
	if (l < 0)
    {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}
	length = l;
}

/// @brief set width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::SetDim(int w, int l)
{
	SetWidth(w);
	SetLength(l);
}

/// @brief get width of the object
int Rectangle::GetWidth()
{
    return width;
}

/// @brief get length of the object
int Rectangle::GetLength()
{
    return length;
}

/// @brief get width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::GetDim(int &w, int &l)
{
    w=width;
    l=length;
}

/// @brief calculate and return the area of the rectangle
int Rectangle::GetArea()
{
    return width * length;
}

/// @brief calculate and return the perimeter of the rectangle
int Rectangle::GetPerimeter()
{
    return 2 * ( width + length );
}
