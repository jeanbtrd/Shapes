#include<iostream>

#include "rectangle.h"

int main()
{
	/// variables to store and then print length and width.
	/// They're needed by GetDim (indirect addressing).
	int lToPrint, wToPrint; lToPrint = wToPrint = (int)0;

	/// Create Rectangle A giving it specific values.
	/// To do this, the non-default "Rectangle" constructor is called.
	Rectangle objRectA(10,5);

	/// Get Rectangle A dimensions using "Get" functions.
	cout << "\nRectangle A:\n";
	/// test GetWidth:
	cout << "width: " << objRectA.GetWidth() << "\n";
	/// test GetLenght:
	cout << "length: " << objRectA.GetLength() << "\n";
	///
	/// Change Rectangle A width using SetWidth.
	objRectA.SetWidth(4);
	cout << "New width: " << objRectA.GetWidth() << "\n";
	///
	/// test GetDim
	objRectA.GetDim(wToPrint,lToPrint);
	cout << "Width and length: (" << wToPrint << ", " << lToPrint << ")\n\n";

	/// Create Rectangle B using the default "Rectangle" constructor.
	/// It will give it the default width and length values: 0 and 0.
	Rectangle objRectB;
	cout << "\nRectangle B:\n";
	cout << "Default values: " << "(" << objRectB.GetWidth() << ", " << objRectB.GetLength() << ")\n";
	///
	/// Set dimensions for the Rectangle B, overwriting the defaults.
	objRectB.SetDim(3,7);
	cout << "New values: " << "(" << objRectB.GetWidth() << ", " << objRectB.GetLength() << ")\n\n";
}
