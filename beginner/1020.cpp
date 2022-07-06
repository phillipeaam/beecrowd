/*
 * Read an integer value corresponding to a person's age (in days) and print it
 * in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.
 * Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month.
 * In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364.
 * This is just an exercise for the purpose of testing simple mathematical reasoning.
 *
 * Input
 * The input file contains 1 integer value.
 * 
 * Output
 * Print the output, like the following example.
 *
 * 400 -> 1 ano(s)
 *		  1 mes(es)
 *		  5 dia(s)
 *
 * 800 -> 2 ano(s)
 *		  2 mes(es)
 *		  10 dia(s)
 *
 * 30  -> 0 ano(s)
 *		  1 mes(es)
 *		  0 dia(s)
 */

#include <iostream>
 
using namespace std;

int main()
{
	constexpr int year_days = 365;
	constexpr int month_days = 30;
	
	int input_days;
	cin >> input_days;

	const int years = input_days / year_days;
	const int months = input_days % year_days / month_days;
	const int days = input_days % year_days % month_days;

	cout << years << " ano(s)\n" <<  months << " mes(es)\n" <<  days << " dia(s)" << endl;
	
	return 0;
}