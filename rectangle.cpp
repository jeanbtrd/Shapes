/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "rectangle.h"

/// @brief default constructor 
Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl;

	width = 0;
	length = 0;

}

/// @brief constructor 
/// @param w width in pixels
/// @param h length in pixels
Rectangle::Rectangle(int w, int l) {

	width = 0;
	length = 0;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0) 
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0) 
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;



}

/// @brief destructor 
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;

}


/// @brief set width of the object
/// @param w width in pixels
void Rectangle::SetWidth(int w) {

	if (w < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;

}

/// @brief set length of the object
/// @param l length in pixels
void Rectangle::SetLength(int l) {

	if (l < 0) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;

}

/// @brief set width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::SetDim(int w, int l) {

	SetWidth(w);
	SetLength(l);
}


/// @brief get width of the object
/// @param w width in pixels
int Rectangle::GetWidth() {

	

}

/// @brief get length of the object
/// @param l length in pixels
int Rectangle::GetLength() {


}

/// @brief get width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::GetDim(int &w, int &l) {

	
}


