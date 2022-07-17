/*
 * Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D
 * is greater than the sum of A and B and if C and D were positives values and if A is even, write the message
 * “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).
 *
 * Input
 * Four integer numbers A, B, C and D.
 * 
 * Output
 * Show the corresponding message after the validation of the values.
 */

#include <iostream>

using namespace std;

int main()
{
	int A;
	cin >> A;
	
	int B;
	cin >> B;
	
	int C;
	cin >> C;
	
	int D;
	cin >> D;

	const bool is_success = B > C && D > A && C + D > A + B && (C >= 0 && D >= 0) && A % 2 == 0;

	if (is_success)
		cout << "Valores aceitos" << endl;
	else
		cout << "Valores nao aceitos" << endl;
	
	return 0;
}