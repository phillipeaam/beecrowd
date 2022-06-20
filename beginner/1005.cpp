/*
 * Tip: Weighted Average
 * 
 * Read two floating points' values of double precision A and B, corresponding to two student's grades.
 * After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5.
 * Each grade can be from zero to ten, always with one digit after the decimal point.
 * Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”.
 * Don’t forget the space before and after the equal sign.
 * 
 * Input
 * The input file contains 2 floating points' values with one digit after the decimal point.
 * 
 * Output
 * Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with 5 digits after the decimal point and with a blank space before and after the equal signal.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double GradeAWeight = 3.5;
	const double GradeBWeight = 7.5;
	const int Precision = 5;
	
	double A, B, Media;

	cin >> A;
	cin >> B;
	
	Media = (A * GradeAWeight  + B * GradeBWeight) / (GradeAWeight + GradeBWeight);
	
	cout << "MEDIA = " << fixed << setprecision(Precision) << Media;
	cout << endl;
	
    return 0;
}