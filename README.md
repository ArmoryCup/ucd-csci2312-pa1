## CSCI 2312: Programming Assignment 1

_working with objects_

* * *

C++ lets us program with _objects_. We describe objects in C++ by declaring and defining _classes_. We _declare_ our class's structure in a header file, just like in C, and _define_ it (that is, write the code that actually does the work) in a corresponding source code file.

Here is a sample header file <tt>Point.h</tt> that describes an object that represents a point in two-dimensional Euclidean space:

```c++
// A 2-dimensional point class!
// Coordinates are double-precision floating point.
class Point {

private:
double x;
double y;

public:
// Constructors
Point();                      // default constructor
Point(double x, double y);    // two-argument constructor

// Destructor
~Point();

// Mutator methods
void setX(double newX);
void setY(double newY);

// Accessor methods
double getX();
double getY();
};
```

We can _instantiate_, or create an instance of, our class anywhere in the rest of our code by calling any of the constructors we have defined:

```c++ 
Point myPoint;            // Calls Point::Point()
Point myOtherPoint(5, 3); // Calls two-argument constructor Point::Point(double, double)
```

### Changes

2.  The <tt>Point</tt> class was changed to represent points in three dimensions.

3.  New member function <tt>distanceTo</tt> was added to <tt>Point</tt>. It accepts as an argument a <u><tt>Point &</tt></u> (a reference to a <tt>Point</tt>), and it returns a <tt>double</tt> that approximates the distance between the two points.

4.  Created a new source file <tt>pa1.cpp</tt> and implement two functions:

*   <tt>double computeArea(Point &a, Point &b, Point &c)</tt>

which takes by reference three <tt>Point</tt> objects, computes the area within the triangle defined by these points. It uses Heron's formula to compute semiperimeter and area of a triangle.

*   <tt>int main()</tt>

which requests three points (nine coordinates) from the user, determines the area inside the triangle described by the three points using the aforementioned function, and displays the result.

<font size="-1">ACKNOWLEDGEMENT: Modelled after CS11 Lab 1 at Caltech.</font>

<font size="-1">Some content Copyright (C) 2004-2010, California Institute of Technology.</font>
