#include <iostream>
using namespace std;

int main()
{
	// Variable declaration
	int n;
	int input;
	int out[100];
	int i;

	// input n
	cin >> n;

	// n times loop
	for (i = 0; i < n; i++)
	{
		// input
		cin >> input;

		out[i] = input;
	}

	// n times loop
	for (i = 0; i < n; i++)
	{
		// output
		cout << out[n -1 - i];

		if (i == n - 1)
		{
			break;
		}
		// output " "
		cout << " ";
	}

	cout << endl;
	return 0;
}