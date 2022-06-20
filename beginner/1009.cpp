/*
 * Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money).
 * Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.
 * 
 * - Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
 * 
 * - Don’t forget the blank spaces.
 * 
 * Input
 * The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.
 * 
 * Output
 * Print the seller's total salary, according to the given example.
 * TOTAL = R$ 684.54
 */

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	constexpr int precision = 2;
	constexpr int bonus_percentage = 15;
	constexpr int total_percentage = 100;
	
	string seller_name;
	double fixed_salary, total_sold_in_month;
	
	cin >> seller_name >> fixed_salary >> total_sold_in_month;

	const double final_salary = total_sold_in_month / total_percentage * bonus_percentage + fixed_salary;

	cout << "TOTAL = R$ " << fixed << setprecision(precision) << final_salary << endl;
	
    return 0;
}