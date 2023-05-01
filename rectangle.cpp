//---------------------------------------------------------
/**
//    @file	rectangle.cpp
//    @brief	Implementation file for class Rectangle
*/
//---------------------------------------------------------

#include "rectangle.h"

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
ostream & operator << (ostream &o, Rectangle & X)
{

	return o;
}

///////////////////////////////////////////////////////////////////////////
istream & operator >> (istream &i, Rectangle & X)
{

	return i;
}

/************************** MEMBER FUNCTIONS AND VARIABLES ******************/

///////////////////////////////////////////////////////////////////////////
// Default Constructor
Rectangle::Rectangle()
{
	cout << "START:\tRectangle - constructor - default" << endl;
	Init();
	cout << "END:\tRectangle - constructor - default" << endl;

}

///////////////////////////////////////////////////////////////////////////
// Copy Constructor
Rectangle::Rectangle( const Rectangle & r)
{
	cout << "START:\tRectangle - constructor - copy" << endl;
	Init(r);
	cout << "END:\tRectangle - constructor - copy" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Init Constructor
Rectangle::Rectangle(float w, float l)
{
	cout << "START:\tRectangle - constructor - init" << endl;
	Reset();

	if (w <= 0) cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else width = w;

	if (l <= 0) cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else length = l;

	cout << "END:\tRectangle - constructor - init" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Destructor
Rectangle::~Rectangle()
{
	cout << "START:\tRectangle - destructor" << endl;
	Reset();
	cout << "END:\tRectangle - destructor" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Init default initializer
void Rectangle::Init()
{
	cout << "START:\tRectangle - Init - Default" << endl;
	Reset();
	cout << "END:\tRectangle - Init - Default" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Init copy initializer
void Rectangle::Init(const Rectangle &r)
{
	cout << "START:\tRectangle - Init - copy" << endl;

	Reset();

	width = r.width;
	length = r.length;

	cout << "END:\tRectangle - Init - copy" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Object eraser
void Rectangle::Reset()
{
	cout << "START:\tRectangle - Reset" << endl;
	width = 0;
	length = 0;
	cout << "END:\tRectangle - Reset" << endl;
}

///////////////////////////////////////////////////////////////////////////
// Overloading of assignment operator
Rectangle& Rectangle::operator=( const Rectangle & r)
{
	Reset();
	Init(r);
	return *this;
}

///////////////////////////////////////////////////////////////////////////
// Overloading of comparison operator
bool Rectangle::operator==( const Rectangle & r)
{
    return (( r.width == width && r.length == length ) ? true : false);
}

///////////////////////////////////////////////////////////////////////////
// Error messaging routine
void Rectangle::ErrorMessage( const char *string )
{
	printf("%s\n", string);
}

///////////////////////////////////////////////////////////////////////////
// Debug routine
void Rectangle::Dump()
{
	cout << "Lenght: " << length  << endl;
	cout << "Width: " << width  << endl;
}


/// @brief set width of the rectangle
/// @param w width
void Rectangle::SetWidth(float w)
{
	if (w < 0)
    {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}
	width = w;
}

/// @brief set length of the rectangle
/// @param l length
void Rectangle::SetLength(float l)
{
	if (l < 0)
    {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}
	length = l;
}

/// @brief set width and length of the rectangle
/// @param w width
/// @param l length
void Rectangle::SetDim(float w, float l)
{
	SetWidth(w);
	SetLength(l);
}

/// @brief get width of the object
float Rectangle::GetWidth()
{
    return width;
}

/// @brief get length of the object
float Rectangle::GetLength()
{
    return length;
}

/// @brief get width and length of the object
/// @param w width
/// @param l length
void Rectangle::GetDim(float &w, float &l)
{
    w=width;
    l=length;
}

/// @brief calculate and return the area of the rectangle
/// @return area of the rectangle
float Rectangle::Area()
{
	return (float)(width*length);
}

/// @brief calculate and return the perimeter of the rectangle
/// @return perimeter of the rectangle
float Rectangle::Perimeter()
{
	return (float)(2*(width+length));
}
