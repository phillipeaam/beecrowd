/*
 * Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X.
 * Print X as the model "X = 19".
 * Print endline after the result otherwise you will get “Presentation Error”.
 * The input file will contain 2 integer numbers.
 * Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X.
 * Obs.: don't forget the endline after all.
 */

#include <iostream>
 
using namespace std;

int main()
{
    int A, B, X;
    
    cin >> A;
    cin >> B;

    X = A + B;
    
    cout << "X = " << X;
    cout << endl;
    return 0;
}