/*
* Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the
 * roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.
 *
 * Input
 * Read 3 floating-point numbers (double) A, B and C.
 * 
 * Output
 * Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.
 */

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float A;
	cin >> A;

	float B;
	cin >> B;

	float C;
	cin >> C;

	// When is it impossible?
	// 1. division by zero ( A == 0 )
	// 2. square root of a negative number ( delta < 0)
	
	const string impossible_to_calculate_message = "Impossivel calcular";

	if (A == 0)
	{
		cout << impossible_to_calculate_message << endl;
		return 0;
	}

	const float delta = B * B - 4 * A * C;
	const float delta_sqrt = sqrt(delta);

	if (delta_sqrt != delta_sqrt || delta_sqrt < 0)
	{
		cout << impossible_to_calculate_message << endl;
		return 0;
	}

	const float x1 = (-B + delta_sqrt) / (2 * A);
	const float x2 = (-B - delta_sqrt) / (2 * A);
	
	cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
	cout << "R2 = " << fixed << setprecision(5) << x2 << endl;	
	
	return 0;
}