/*!
  \file main.cpp
  \brief Fiddling with rectangles and rhombi
*/

#include <iostream>

#include "rectangle.h"
#include "rhombus.h"

int main()
{

	/// Create Rectangle A giving it specific values.
	/// To do this, the init constructor is called.
	Rectangle objRectA(10,5);

	/// Get Rectangle A dimensions using "Get" functions.
	cout << "\nRectangle A:\n";
	/// test GetWidth:
	cout << "width: " << objRectA.GetWidth() << endl;
	/// test GetLenght:
	cout << "length: " << objRectA.GetLength() << endl;

	/// Change Rectangle A width using SetWidth.
	objRectA.SetWidth(4);
	cout << "New width: " << objRectA.GetWidth() << endl;

	/// Create Rectangle B using the default "Rectangle" constructor.
	/// It will give it the default width and length values: 0 and 0.
	Rectangle objRectB;
	cout << "\nRectangle B:\n";
	cout << "Default values: " << "(" << objRectB.GetWidth() << ", " << objRectB.GetLength() << ")\n";

	/// Set dimensions for the Rectangle B, overwriting the defaults.
	objRectB.SetDim(3,7);
	cout << "New values: " << "(" << objRectB.GetWidth() << ", " << objRectB.GetLength() << ")\n\n";

	/// variables to store and then print length and width.
	/// They're needed by GetDim (indirect addressing).
	int wToPrint, lToPrint; wToPrint = lToPrint = (int)0;

	/// test GetDim
	objRectA.GetDim(wToPrint,lToPrint);
	cout << "Width and length: (" << wToPrint << ", " << lToPrint << ")\n\n";

    /// An object's ending scope causes its destruction
    {
        Rectangle objRectC;
        cout << "Rectangle C is not yet destroyed\n";
    }
    cout << "Rectangle C is now destroyed\n";

    /// copy constructor creates Rectangle D as a copy of Rectangle B
    Rectangle objRectD(objRectB);
    cout << "Rectangle D (copy of Rectangle B): " << "(" << objRectD.GetWidth() << ", " << objRectD.GetLength() << ")\n";

}
