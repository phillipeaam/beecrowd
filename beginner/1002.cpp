/*
 * The formula to calculate the area of a circumference is defined as A = π.R². Considering to this problem that π = 3.14159:
 * 
 * Calculate the area using the formula given in the problem description.
 * 
 * Input
 * The input contains a value of floating point (double precision), that is the variable R.
 * 
 * Output
 * Present the message "A=" followed by the value of the variable, as in the example bellow, with four places after the decimal point.
 * Use all double precision variables.
 * Like all the problems, don't forget to print the end of line after the result, otherwise you will receive "Presentation Error".
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const double Pi = 3.14159;
    const int Precision = 4;
    
    double R;

    cin >> R;

    double A = Pi * pow(R, 2);
    
    cout << "A=" << fixed << setprecision(Precision) << A;
    cout << endl;
    
    return 0;
}