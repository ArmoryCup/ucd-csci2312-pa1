## CSCI 2312: Programming Assignment 1

_working with objects_

* * *

2.  The <tt>Point</tt> class was changed to represent points in three dimensions.

3.  New member function <tt>distanceTo</tt> was added to <tt>Point</tt>. It accepts as an argument a <u><tt>Point &</tt></u> (a reference to a <tt>Point</tt>), and it returns a <tt>double</tt> (the distance between the two points).

4.  Created a new source file <tt>pa1.cpp</tt> and implement two functions:

*   <tt>double computeArea(Point &a, Point &b, Point &c)</tt>

The function accepts by reference three <tt>Point</tt> objects as its arguments, computes the area within the triangle defined by these points. It uses Heron's formula to compute semiperimeter and area of a triangle.

*   <tt>int main()</tt>

It calls the function <tt>computeArea</tt> to calculate the area of a triangle of the given points and then displays the result to the screen.
