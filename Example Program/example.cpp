#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Variable declarations
	string firstName, color, adjective;

	// Output and input
	cout << "HELLO, what is your name? ";
	cin >> firstName;

	cout << "WHAT is your favorite color? ";
	cin >> color;

	cout << "ENTER AN ADJECTIVE: ";
	cin >> adjective;

	cout << endl;
	cout << "SO can I call you " << adjective << " " << color << " "<< firstName <<" " ? " << endl;

		return 0;
}
