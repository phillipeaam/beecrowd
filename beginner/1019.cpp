/*
 * Read an integer value, which is the duration in seconds of a certain event in a factory,
 * and inform it expressed in hours:minutes:seconds.
 *
 * Input
 * The input file contains an integer N.
 * 
 * Output
 * Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.
 * 556 -> 0:9:16
 * 1 -> 0:0:1
 * 140153 -> 38:55:53
 */

#include "iostream"

using namespace std;

int main()
{
	int input_seconds;
	cin >> input_seconds;
	
	const int seconds = input_seconds % 60;
	const int minutes = input_seconds / 60  % 60;
	const int hours = input_seconds / 60 / 60;

	cout << hours << ":" << minutes << ":" << seconds << endl;
	
	return 0;
}