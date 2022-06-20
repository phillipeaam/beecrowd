/*
 * Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior".
 * Use the following formula:
 * 
 * MaiorAB = (a + b + abs(a - b)) / 2
 * 
 * Input
 * The input file contains 3 integer values.
 * 
 * Output
 * Print the greatest of these three values followed by a space and the message “eh o maior”.
 */

#include <iostream>

using namespace std;

int get_greater_from_xy(const int x, const int y)
{
	return (x + y + abs(x - y)) / 2;
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    const double greater_ab = get_greater_from_xy(a,b);
    const double greater_abc = get_greater_from_xy(greater_ab,c);

    cout << greater_abc << " eh o maior" << endl;
    
    return 0;
}