/* Algorithm Challenge & Problem Solving
 * 12 - Inverted Number Pattern
 *
 * This program reads a positive integer from the user and prints an
 * inverted number pattern.
 *
 * The algorithm works by:
 *   1. Starting from the input number and counting downward.
 *   2. Printing each number as many times as its current value.
 */

#include <iostream>
using namespace std;

// Reads a positive number (zero allowed) with validation.
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;

        // Validation feedback
        if (Number < 0)
            cout << "Please enter a number that is zero or positive.\n";

    } while (Number < 0);

    return Number;
}

// Prints an inverted number pattern based on the input.
void PrintInvertedNumberPattern(int Number)
{
    for (int i = Number; i >= 1; i--) // Outer loop → controls the row number
    {
        for (int j = i; j >= 1; j--) // Inner loop → prints the current value 'i'
        {
            cout << i;
        }
        cout << endl; // Move to next line after each row
    }
}

int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("Enter a Positive Number:\n"));
    return 0;
}
