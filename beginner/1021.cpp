/*
 * Read a value of floating point with two decimal places. This represents a monetary value. 
 * After this, calculate the smallest possible number of notes and coins on which the value can be decomposed.
 * The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01.
 * Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.
 *
 * Input
 * The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).
 * 
 * Output
 * Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.
 *
 * 576.73 ->	NOTAS:
 * 				5 nota(s) de R$ 100.00
 * 				1 nota(s) de R$ 50.00
 * 				1 nota(s) de R$ 20.00
 * 				0 nota(s) de R$ 10.00
 * 				1 nota(s) de R$ 5.00
 * 				0 nota(s) de R$ 2.00
 * 				MOEDAS:
 * 				1 moeda(s) de R$ 1.00
 * 				1 moeda(s) de R$ 0.50
 * 				0 moeda(s) de R$ 0.25
 * 				2 moeda(s) de R$ 0.10
 * 				0 moeda(s) de R$ 0.05
 * 				3 moeda(s) de R$ 0.01
 */

#include <iostream>

using namespace std;

int main()
{
	double user_input;
	cin >> user_input;
	
	cout << "NOTAS:\n";

	int aux1 = static_cast<int>(user_input);
	
	cout << aux1 / 100 << " nota(s) de R$ 100.00\n";
	aux1 = aux1 % 100;
	cout << aux1 / 50 << " nota(s) de R$ 50.00\n";
	aux1 = aux1 % 50;
	cout << aux1 / 20 << " nota(s) de R$ 20.00\n";
	aux1 = aux1 % 20;
	cout << aux1 / 10 << " nota(s) de R$ 10.00\n";
	aux1 = aux1 % 10;
	cout << aux1 / 5 << " nota(s) de R$ 5.00\n";
	aux1 = aux1 % 5;
	cout << aux1 / 2 << " nota(s) de R$ 2.00\n";
	aux1 = aux1 % 2;
	
	cout << "MOEDAS:\n";

	int aux2 = static_cast<int>(user_input * 100);
	
	cout << aux1 / 1 << " moeda(s) de R$ 1.00\n";
	aux2 = aux2 % 100;
	cout << aux2 / 50 << " moeda(s) de R$ 0.50\n";
	aux2 = aux2 % 50;
	cout << aux2 / 25 << " moeda(s) de R$ 0.25\n";
	aux2 = aux2 % 25;
	cout << aux2 / 10 << " moeda(s) de R$ 0.10\n";
	aux2 = aux2 % 10;
	cout << aux2 / 5 << " moeda(s) de R$ 0.05\n";
	aux2 = aux2 % 5;
	cout << aux2 / 1 << " moeda(s) de R$ 0.01\n";

	return 0;
}