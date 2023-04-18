/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/

#ifndef RHOMBUS_H
#define RHOMBUS_H

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus
{

private:
	/// the two diagonals exaustively describe a rhombus.
	int diagonal1;
	int diagonal2;

public:

	/// Default constructor
	Rhombus();
	/// Copy constructor
	Rhombus(const Rhombus & R);
	/// Init constructor
	Rhombus(int d1, int d2);
	/// Destructor
	~Rhombus();

	/// Operators
	/// assign
	Rhombus& operator=(const Rhombus &r);
	/// ==
	bool operator==(const Rhombus &r);

	void SetDim(int d1, int d2);
	void SetD1(int d1);
	void SetD2(int d2);

	void GetDim(int &d1, int &d2);
	int GetD1();
	int GetD2();

	int GetArea();
	int GetSide();
	int GetPerimeter();

};

#endif
