/*! \file rectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle
{

private:
	int width;
	int length;

public:

	/// Default constructor
	Rectangle();
	/// Copy constructor
	Rectangle(const Rectangle & R);
	/// Init constructor
	Rectangle(int w, int l);
    /// Destructor
	~Rectangle();

	/// Operators
	/// assign
	Rectangle& operator=(const Rectangle &r);
	/// isequal
	bool operator==(const Rectangle &r);

	void SetDim(int w, int l);
	void SetLength(int l);
	void SetWidth(int w);

	void GetDim(int &w, int &l);
	int GetLength();
	int GetWidth();

	int GetArea();
	int GetPerimeter();

};

#endif
