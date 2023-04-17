
# Table of Contents

1.  [Main](#org8e33ecd)
    1.  [Doxygen header](#org7ada3f3)
    2.  [Include libraries](#org38178ab)
    3.  [body](#orge10590b)
        1.  [open](#org476542e)
        2.  [Rectangle A](#org9a6655b)
        3.  [Rectangle B](#org3324c43)
        4.  [close](#org0385897)



<a id="org8e33ecd"></a>

# Main


<a id="org7ada3f3"></a>

## Doxygen header

    /*!
      \file main.cpp
      \brief Fiddling with the Rectangle class.
    */


<a id="org38178ab"></a>

## Include libraries

    #include<iostream>
    
    #include "rectangle.h"


<a id="orge10590b"></a>

## body


<a id="org476542e"></a>

### open

    int main()
    {


<a id="org9a6655b"></a>

### Rectangle A

The Rectangle A object, called `objRectA`, is created using the **init constructor** giving it specific values for width and length.  

    /// Create Rectangle A giving it specific values.
    /// To do this, the init constructor is called.
    Rectangle objRectA(10,5);

`GetWidth` and `GetLength` are used to display the Rectangle A dimensions just set.  

    /// Get Rectangle A dimensions using "Get" functions.
    cout << "\nRectangle A:\n";
    /// test GetWidth:
    cout << "width: " << objRectA.GetWidth() << "\n";
    /// test GetLenght:
    cout << "length: " << objRectA.GetLength() << "\n";

`SetWidth` changes the Rectangle A width, which is then displayed using `GetWidth`.  

    /// Change Rectangle A width using SetWidth.
    objRectA.SetWidth(4);
    cout << "New width: " << objRectA.GetWidth() << "\n";


<a id="org3324c43"></a>

### Rectangle B

The Rectangle B object, called `objRectB`, is created using the **default constructor** so with the default values: 0 and 0. These are then displayed using `GetWidth` and `GetLength`.  

    /// Create Rectangle B using the default "Rectangle" constructor.
    /// It will give it the default width and length values: 0 and 0.
    Rectangle objRectB;
    cout << "\nRectangle B:\n";
    cout << "Default values: " << "(" << objRectB.GetWidth() << ", " << objRectB.GetLength() << ")\n";

`SetDim` is used to give Rectangle B new values, which are then displayed using `GetWidth` and `GetLength`.  

    /// Set dimensions for the Rectangle B, overwriting the defaults.
    objRectB.SetDim(3,7);
    cout << "New values: " << "(" << objRectB.GetWidth() << ", " << objRectB.GetLength() << ")\n\n";

`lToPrint` and `wToPrint` integer variables are created and initialized to 0. These are then changed by `GetDim` to the length and width of Rectangle B. Then the variables are sent to `cout`.  

    /// variables to store and then print length and width.
    /// They're needed by GetDim (indirect addressing).
    int wToPrint, lToPrint; wToPrint = lToPrint = (int)0;
    
    /// test GetDim
    objRectA.GetDim(wToPrint,lToPrint);
    cout << "Width and length: (" << wToPrint << ", " << lToPrint << ")\n\n";


<a id="org0385897"></a>

### close

    }

