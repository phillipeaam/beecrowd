/*
 * In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed.
 * The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.
 *
 * Input
 * The input file contains an integer value N (0 < N < 1000000).
 *
 * Output
 * Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example.
 * Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.
 */

#include <iostream>
#include <iomanip>

using namespace std;

void display_notes(const int notes_qty, const int bank_note)
{
	cout << notes_qty << " nota(s) de R$ " << bank_note << ",00" << endl;
}

int main()
{
	const int bank_notes [] = {100, 50, 20, 10, 5, 2, 1};
	
	int input_note;
	cin >> input_note;
	cout << input_note << endl;

	for (const int bank_note : bank_notes)
	{
		const int notes_qty =  input_note / bank_note;

		display_notes(notes_qty, bank_note);
		
		if (notes_qty <= 0)
			continue;

		input_note = input_note % bank_note;
	}
	
	return 0;
}