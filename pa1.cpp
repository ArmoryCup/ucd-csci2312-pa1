//
// Created by Ivo Georgiev on 8/25/15.
//

#include "Point.h"
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

// This function calculate area of a triangle by using Heron's formula.
double computeArea(Point &a, Point &b, Point &c){
	
	double sideA, sideB, sideC;					// sides of a trinagle
	double semiperimeter;								// semiperimeter of a triangle
	double area;												// to hold area of a triangle

	// calculate the lengths of the triangle
	sideA = a.distanceTo(b);
	sideB = b.distanceTo(c);
	sideC= c.distanceTo(a);

	cout << "SideA: " << sideA << endl;
	cout << "SideB: " << sideB << endl;
	cout << "SideC: " << sideC << endl;

	// calculate semiperimeter and area of the triangle by using
	// Heron's formula
	semiperimeter = (sideA + sideB + sideC)/2;
	area = sqrt(semiperimeter*(semiperimeter - sideA)*(semiperimeter - sideB)*(semiperimeter - sideC));
	return area;

}


int main(void) {
    Point p1(3, 2), p2(4, 2), p3(-8,2);
		
		// Display the area of a triangle in double-precision floating point number
		cout << "Area = ";
		cout << fixed << setprecision(2) << computeArea(p1, p2, p3) << endl;

    return 0;
}
