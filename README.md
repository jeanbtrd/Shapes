
# Table of Contents

1.  [Rectangle](#org1b069f3)
    1.  [rectangle.h](#org12742e8)
        1.  [Setup](#org05c5975)
        2.  [Body](#orga813d32)
        3.  [End](#orgc2dfc4e)
    2.  [rectangle.cpp](#org00b3c59)
        1.  [Doxygen header](#orgf8a6d84)
        2.  [Libraries](#orgd798222)
        3.  [Constructors](#orgceecc46)
        4.  [Operators](#org5e2d7b8)
        5.  [Functions](#org2d62f86)
2.  [Rhombus](#org764c530)
    1.  [rhombus.h](#org6e01f21)
        1.  [Setup](#org26a3be7)
        2.  [Body](#orgb727ee3)
        3.  [End](#orge519e18)
    2.  [rhombus.cpp](#org70876de)
        1.  [Doxygen header](#org979587d)
        2.  [Libraries](#org94a4cb6)
        3.  [Constructors](#org7573467)
        4.  [Operators](#orga31caf9)
        5.  [Functions](#org1c7e4ca)
3.  [Main](#org1b82cce)
    1.  [Doxygen header](#org79cda8e)
    2.  [Include libraries](#org8f7dc1b)
    3.  [body](#org91c6715)
        1.  [open](#org340f1c2)
        2.  [Rectangle A](#org2987517)
        3.  [Rectangle B](#org19d22cf)
        4.  [Rectangle C](#orge2d6b9d)
        5.  [Rectangle D](#org9d86295)
        6.  [close](#orgfae987b)



<a id="org1b069f3"></a>

# Rectangle


<a id="org12742e8"></a>

## rectangle.h


<a id="org05c5975"></a>

### Setup

1.  Doxygen header

        /*! \file rectangle.h
        	\brief Declaration of the class Rectangle
        
        	Details.
        */

2.  open ifndef

        #ifndef RECTANGLE_H
        #define RECTANGLE_H

3.  namespace

        using namespace std;


<a id="orga813d32"></a>

### Body

1.  open

        /// @class Rectangle
        /// @brief to manage an object with the shape of a rectangle
        class Rectangle
        {

2.  private descriptors

        private:
        	int width;
        	int length;

3.  public descriptors

        public:
    
    1.  Constructors
    
            /// Default constructor
            Rectangle();
            /// Copy constructor
            Rectangle(const Rectangle & R);
            /// Init constructor
            Rectangle(int w, int l);
            /// Destructor
            ~Rectangle();
    
    2.  operators
    
            /// Operators
            /// assign
            Rectangle& operator=(const Rectangle &r);
            /// isequal
            bool operator==(const Rectangle &r);
    
    3.  Functions
    
            void SetDim(int w, int l);
            void SetLength(int l);
            void SetWidth(int w);
            
            void GetDim(int &w, int &l);
            int GetLength();
            int GetWidth();
            
            int GetArea();
            int GetPerimeter();


<a id="orgc2dfc4e"></a>

### End

1.  close class

        };

2.  close ifndef (endif)

        #endif


<a id="org00b3c59"></a>

## rectangle.cpp


<a id="orgf8a6d84"></a>

### Doxygen header

    /// \file rectangle.cpp
    ///	\brief class Rectangle: implementation of the functions
    ///
    ///	Details.
    ///


<a id="orgd798222"></a>

### Libraries

    #include <iostream>
    
    #include "rectangle.h"


<a id="orgceecc46"></a>

### Constructors

1.  Default constructor

        /// @brief default constructor
        Rectangle::Rectangle()
        {
        	cout << "Rectangle - constructor - default" << endl;
        
        	width = 0;
        	length = 0;
        }

2.  Copy constructor

        /// @brief copy constructor
        /// @param R rectangle to copy.
        Rectangle::Rectangle(const Rectangle & r)
        {
        	cout << "Rectangle - constructor - copy" << endl;
        
            width = r.width;
            length = r.length;
        }

3.  Init constructor

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

4.  Destructor

        /// @brief destructor
        Rectangle::~Rectangle()
        {
        	cout << "Rectangle - destructor" << endl;
        }


<a id="org5e2d7b8"></a>

### Operators

    /// ----------------- Operators ---------------------------

1.  =

        /// @brief overload of assign operator
        /// @param reference to the object on the right height of the operator
        /// @return reference to the object on the left height of the operator
        Rectangle& Rectangle::operator=(const Rectangle &r)
        {
            cout << "Rectangle - operator =" << endl;
        
            width = r.width;
            length = r.length;
        
            /// "this" is the pointer to the current object
            /// (the one who called the function).
            return *this;
        }

2.  ==

        /// @brief overload of operator ==
        /// @param reference to the object on the right height of the operator
        /// @return true if the two objects have the same width and the same length, false if not.
        bool Rectangle::operator==(const Rectangle &r)
        {
            cout << "Rectangle - operator ==" << endl;
        
            return (( r.width == width && r.length == length ) ? true : false);
            //if( r.width == width && r.length == length ) return true; return false;
        }


<a id="org2d62f86"></a>

### Functions

1.  Set functions

    1.  SetWidth
    
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
    
    2.  SetLength
    
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
    
    3.  SetDim
    
            /// @brief set width and length of the object
            /// @param w width in pixels
            /// @param l length in pixels
            void Rectangle::SetDim(int w, int l)
            {
            	SetWidth(w);
            	SetLength(l);
            }

2.  Get functions

    1.  GetWidth
    
            /// @brief get width of the object
            int Rectangle::GetWidth()
            {
                return width;
            }
    
    2.  GetLength
    
            /// @brief get length of the object
            int Rectangle::GetLength()
            {
                return length;
            }
    
    3.  GetDim
    
            /// @brief get width and length of the object
            /// @param w width in pixels
            /// @param l length in pixels
            void Rectangle::GetDim(int &w, int &l)
            {
                w=width;
                l=length;
            }
    
    4.  GetArea
    
            /// @brief calculate and return the area of the rectangle
            int Rectangle::GetArea()
            {
            		return width * length;
            }
    
    5.  GetPerimeter
    
            /// @brief calculate and return the perimeter of the rectangle
            int Rectangle::GetPerimeter()
            {
            		return 2 * ( width + length );
            }


<a id="org764c530"></a>

# Rhombus


<a id="org6e01f21"></a>

## rhombus.h


<a id="org26a3be7"></a>

### Setup

1.  Doxygen header

        /*! \file rhombus.h
        	\brief Declaration of the class Rhombus
        
        	Details.
        */

2.  open ifndef

        #ifndef RHOMBUS_H
        #define RHOMBUS_H

3.  namespace

        using namespace std;


<a id="orgb727ee3"></a>

### Body

1.  open

        /// @class Rhombus
        /// @brief to manage an object with the shape of a rhombus
        class Rhombus
        {

2.  private descriptors

        private:
        	/// the two diagonals exaustively describe a rhombus.
        	int diagonal1;
        	int diagonal2;

3.  public descriptors

        public:
    
    1.  Constructors
    
            /// Default constructor
            Rhombus();
            /// Copy constructor
            Rhombus(const Rhombus & R);
            /// Init constructor
            Rhombus(int d1, int d2);
            /// Destructor
            ~Rhombus();
    
    2.  operators
    
            /// Operators
            /// assign
            Rhombus& operator=(const Rhombus &r);
            /// ==
            bool operator==(const Rhombus &r);
    
    3.  Functions
    
            void SetDim(int d1, int d2);
            void SetD1(int d1);
            void SetD2(int d2);
            
            void GetDim(int &d1, int &d2);
            int GetD1();
            int GetD2();
            
            int GetArea();
            int GetSide();
            int GetPerimeter();


<a id="orge519e18"></a>

### End

1.  close class

        };

2.  close ifndef (endif)

        #endif


<a id="org70876de"></a>

## rhombus.cpp


<a id="org979587d"></a>

### Doxygen header

    ///	\file rhombus.cpp
    ///	\brief class Rhombus: implementation of the functions
    ///
    ///	Details.


<a id="org94a4cb6"></a>

### Libraries

    #include <iostream>
    #include <cmath>
    
    #include "rhombus.h"


<a id="org7573467"></a>

### Constructors

1.  Default constructor

        ///	@brief default constructor
        Rhombus::Rhombus()
        {
        	cout << "Rhombus - constructor - default" << endl;
        
        	diagonal1 = 0;
        	diagonal2 = 0;
        }

2.  Copy constructor

        ///	@brief copy constructor
        ///	@param r rhombus to copy.
        Rhombus::Rhombus(const Rhombus & r)
        {
        	cout << "Rhombus - constructor - copy" << endl;
        
            diagonal1 = r.diagonal1;
            diagonal2 = r.diagonal2;
        }

3.  Init constructor

        ///	@brief init constructor
        ///	@param d1 diagonal 1 in pixels
        ///	@param d2 diagonal 2 in pixels
        Rhombus::Rhombus(int d1, int d2)
        {
        	diagonal1 = 0;
        	diagonal2 = 0;
        
        	cout << "Rhombus - constructor" << endl;
        
        	if (d1 <= 0) cout << "WARNING: Rhombus - constructor: diagonal 1 should be > 0" << endl;
        	else diagonal1 = d1;
        
        	if (d2 <= 0) cout << "WARNING: Rhombus - constructor: diagonal 2 should be > 0" << endl;
        	else diagonal2 = d2;
        }

4.  Destructor

        ///	@brief destructor
        Rhombus::~Rhombus()
        {
        	cout << "Rhombus - destructor" << endl;
        }


<a id="orga31caf9"></a>

### Operators

    /// ----------------- Operators ---------------------------

1.  =

        ///	@brief overload of assign operator
        ///	@param reference to the object on the right height of the operator
        ///	@return reference to the object on the left height of the operator
        Rhombus& Rhombus::operator=(const Rhombus &r)
        {
        		cout << "Rhombus - operator =" << endl;
        
        		diagonal1 = r.diagonal1;
        		diagonal2 = r.diagonal2;
        
        		/// "this" is the pointer to the current object
        		/// (the one who called the function).
        		return *this;
        }

2.  ==

        ///	@brief overload of operator ==
        ///	@param reference to the object on the right height of the operator
        ///	@return true if the two objects have the same width and the same length, false if not.
        bool Rhombus::operator==(const Rhombus &r)
        {
        		cout << "Rhombus - operator ==" << endl;
        		return (( r.diagonal1 == diagonal1 && r.diagonal2 == diagonal2 ) ? true : false);
        }


<a id="org1c7e4ca"></a>

### Functions

1.  Set functions

    1.  SetD1
    
            ///	@brief set diagonal 1 of the rhombus
            ///	@param D1 in pixels
            void Rhombus::SetD1(int D1)
            {
            	if (D1 < 0)
            	{
            		cout << "WARNING: Rhombus - SetD1: diagonal 1 should be > 0" << endl;
            		return;
            	}
            	diagonal1 = D1;
            }
    
    2.  SetLength
    
            ///	@brief set diagonal 2 of the rhombus
            ///	@param D2 in pixels
            void Rhombus::SetD2(int D2)
            {
            	if (D2 < 0)
            	{
            		cout << "WARNING: Rhombus - SetD2: diagonal 2 should be > 0" << endl;
            		return;
            	}
            	diagonal2 = D2;
            }
    
    3.  SetDim
    
            ///	@brief set both diagonals of the rhombus
            ///	@param D1 in pixels
            ///	@param D2 in pixels
            void Rhombus::SetDim(int D1, int D2)
            {
            	SetD1(D1);
            	SetD2(D2);
            }

2.  Get functions

    1.  GetD1
    
            ///	@brief get diagonal 1 of the rhombus
            int Rhombus::GetD1()
            {
            		return diagonal1;
            }
    
    2.  GetD2
    
            ///	@brief get diagonal 2 of the rhombus
            int Rhombus::GetD2()
            {
            		return diagonal2;
            }
    
    3.  GetDim
    
            ///	@brief get both diagonals of the rhombus
            ///	@param d1 diagonal1 in pixels
            ///	@param d2 diagonal2 in pixels
            void Rhombus::GetDim(int &d1, int &d2)
            {
            		d1=diagonal1;
            		d2=diagonal2;
            }
    
    4.  GetArea
    
            ///	@brief calculate and return the area of the rhombus
            ///	@return the area of the rhombus in square pixels
            int Rhombus::GetArea()
            {
            		return (int)(diagonal1 * diagonal2)/2;
            }
    
    5.  GetSide
    
            ///	@brief calculate and return the side of the rhombus
            ///	NB: all 4 sides of a rhombus are equal
            ///	@return length of the side of the rhombus, in pixels.
            int Rhombus::GetSide()
            {
            		return (int)(sqrt(diagonal1*diagonal1+diagonal2*diagonal2)/2);
            }
    
    6.  GetPerimeter
    
            ///	@brief calculate and return the perimeter of the rhombus
            ///	@return the perimeter of the rhombus in pixels
            int Rhombus::GetPerimeter()
            {
            		return 4*(GetSide());
            }


<a id="org1b82cce"></a>

# Main


<a id="org79cda8e"></a>

## Doxygen header

    /*!
      \file main.cpp
      \brief Fiddling with rectangles and rhombi
    */


<a id="org8f7dc1b"></a>

## Include libraries

    #include <iostream>
    
    #include "rectangle.h"
    #include "rhombus.h"


<a id="org91c6715"></a>

## body


<a id="org340f1c2"></a>

### open

    int main()
    {


<a id="org2987517"></a>

### Rectangle A

The Rectangle A object, called `objRectA`, is created using the **init constructor** giving it specific values for width and length.  

    /// Create Rectangle A giving it specific values.
    /// To do this, the init constructor is called.
    Rectangle objRectA(10,5);

`GetWidth` and `GetLength` are used to extract the Rectangle A dimensions just set, which are then sent to `cout` to be displayed.  

    /// Get Rectangle A dimensions using "Get" functions.
    cout << "\nRectangle A:\n";
    /// test GetWidth:
    cout << "width: " << objRectA.GetWidth() << endl;
    /// test GetLenght:
    cout << "length: " << objRectA.GetLength() << endl;

`SetWidth` changes the Rectangle A width.  

    /// Change Rectangle A width using SetWidth.
    objRectA.SetWidth(4);
    cout << "New width: " << objRectA.GetWidth() << endl;


<a id="org19d22cf"></a>

### Rectangle B

The Rectangle B object, called `objRectB`, is created using the **default constructor** so with the default values: 0 and 0.  

    /// Create Rectangle B using the default "Rectangle" constructor.
    /// It will give it the default width and length values: 0 and 0.
    Rectangle objRectB;
    cout << "\nRectangle B:\n";
    cout << "Default values: " << "(" << objRectB.GetWidth() << ", " << objRectB.GetLength() << ")\n";

`SetDim` is used to give Rectangle B new values.  

    /// Set dimensions for the Rectangle B, overwriting the defaults.
    objRectB.SetDim(3,7);
    cout << "New values: " << "(" << objRectB.GetWidth() << ", " << objRectB.GetLength() << ")\n\n";

-   `lToPrint` and `wToPrint` integer variables are created and initialized to 0.
-   They are then changed by `GetDim` to the length and width of Rectangle B.
-   Finally they&rsquo;re sent to `cout` to be displayed.

    /// variables to store and then print length and width.
    /// They're needed by GetDim (indirect addressing).
    int wToPrint, lToPrint; wToPrint = lToPrint = (int)0;
    
    /// test GetDim
    objRectA.GetDim(wToPrint,lToPrint);
    cout << "Width and length: (" << wToPrint << ", " << lToPrint << ")\n\n";


<a id="orge2d6b9d"></a>

### Rectangle C

`objRectC` is created inheight a pair of brackets `{  }`, which delimit its *scope*.  
When the compiler encounters the closing bracket the destructor is called to get rid of rectangle C, because we&rsquo;re now moving outheight of its scope.  

    /// An object's ending scope causes its destruction
    {
        Rectangle objRectC;
        cout << "Rectangle C is not yet destroyed\n";
    }
    cout << "Rectangle C is now destroyed\n";


<a id="org9d86295"></a>

### Rectangle D

`objRectD` is created as a copy of `objRectB`.  

    /// copy constructor creates Rectangle D as a copy of Rectangle B
    Rectangle objRectD(objRectB);
    cout << "Rectangle D (copy of Rectangle B): " << "(" << objRectD.GetWidth() << ", " << objRectD.GetLength() << ")\n";


<a id="orgfae987b"></a>

### close

    }

