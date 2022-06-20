/*
 * In this problem, the task is to read a
 * code of a product 1, the number of units of product 1, the price for one unit of product 1, the
 * code of a product 2, the number of units of product 2 and the price for one unit of product 2.
 * After this, calculate and show the amount to be paid.
 * 
 * Input
 * The input file contains two lines of data. In each line there will be 3 values:
 * two integers and a floating value with 2 digits after the decimal point.
 * 
 * Output
 * The output file must be a message like the following example where "Valor a pagar" means Value to Pay.
 * Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	constexpr int precision = 2;
	
	int product_1_code, product_1_units, product_2_code, product_2_units;
	double product_1_unit_price, product_2_unit_price;

	cin >> product_1_code >> product_1_units >> product_1_unit_price;
	cin >> product_2_code >> product_2_units >> product_2_unit_price;

	const double total = product_1_units * product_1_unit_price + product_2_units * product_2_unit_price;

	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(precision) << total << endl;
	
    return 0;
}