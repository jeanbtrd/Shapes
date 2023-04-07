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
	int length;
	int width;

public:

	Rectangle();
	Rectangle(int w, int l);
	
	~Rectangle();

	
	void SetDim(int w, int l);
	void SetLength(int l);
	void SetWidth(int w);
	
	void GetDim(int &w, int &l);
	int GetLength();
	int GetWidth();
	

};

#endif