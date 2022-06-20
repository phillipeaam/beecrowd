/*
 * Make a program that reads three floating point values: A, B and C. Then, calculate and show:
 * a) the area of the rectangled triangle that has base A and height C.
 * b) the area of the radius's circle C. (pi = 3.14159)
 * c) the area of the trapezium which has A and B by base, and C by height.
 * d) the area of the square that has side B.
 * e) the area of the rectangle that has sides A and B.
 * 
 * Input
 * The input file contains three double values with one digit after the decimal point.
 * 
 * Output
 * The output file must contain 5 lines of data. Each line corresponds to one of the areas described above,
 * always with a corresponding message (in Portuguese) and one space between the two points and the value.
 * The value calculated must be presented with 3 digits after the decimal point.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	constexpr int precision = 3;
	constexpr double pi = 3.14159;
	
    double a, b, c;

	cin >> a >> b >> c;

	cout << "TRIANGULO: " << fixed << setprecision(precision) << a * c / 2 << endl;			// Base * Height / 2
	cout << "CIRCULO: " << fixed << setprecision(precision) << pi * pow(c, 2) << endl;	// Pi * Radius²
	cout << "TRAPEZIO: " << fixed << setprecision(precision) << (a + b) * c / 2 << endl;	// MajorBase + MinorBase * Height / 2 
	cout << "QUADRADO: " << fixed << setprecision(precision) << pow(b, 2) << endl;		// Side²
	cout << "RETANGULO: " << fixed << setprecision(precision) << a * b << endl;				// Base * Height
	
    return 0;
}