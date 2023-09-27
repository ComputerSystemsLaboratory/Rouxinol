#include <iostream>
using namespace std;

int main()
{
	int X, Y;

	cin >> X;
	cin >> Y;

	int rest = Y;

	while (X % Y != 0) {
		rest = X % Y;
		X = Y;
		Y = rest;
	}

	cout << rest << endl;

    return 0;
}