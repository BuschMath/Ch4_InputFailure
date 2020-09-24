#include <iostream>

using namespace std;

int main()
{
	int error, attempt;

	cout << "Input a Char: ";

	cin >> error;

	cout << "\nYou entered: " << error;

	cout << "\nIf you entered a char, the input stream is in a failed state and the next input will not work correctly.\n";
	cout << "Attempt to enter an int: ";

	cin >> attempt;

	cout << "\nYou entered: " << attempt;

	return 0;
}