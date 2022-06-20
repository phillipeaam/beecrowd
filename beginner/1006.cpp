/*
 * Tip: Weighted Average
 * 
 * Read three values (variables A, B and C), which are the three student's grades.
 * Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5.
 * Consider that each grade can go from 0 to 10.0, always with one decimal place.
 * 
 * Input
 * The input file contains 3 values of floating points (double) with one digit after the decimal point.
 * 
 * Output
 * Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double A, B, C, Average;
	const double GradeAWeight = 2;
	const double GradeBWeight = 3;
	const double GradeCWeight = 5;
	const int Precision = 1;

	cin >> A >> B >> C;

	Average = (A * GradeAWeight + B * GradeBWeight + C * GradeCWeight) / (GradeAWeight + GradeBWeight + GradeCWeight);

	cout << "MEDIA = " << fixed << setprecision(Precision) << Average;
	cout << endl;
	
    return 0;
}