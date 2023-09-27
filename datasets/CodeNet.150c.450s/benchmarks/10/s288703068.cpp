#include <iostream>
using namespace std;

int main()
{
	// Variable declaration
	unsigned int n, b, f, r = 0;
	int v, temp;
	unsigned int resident[4][3][10];

	string inptn;
	int innum;

	// Initializ resident.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				resident[i][j][k] = 0;
			}
		}
	}

	// Input n
	cin >> n;

	// Input
	// n times loop
	for (int cnt = 0; cnt < n; cnt++)
	{
		// Input b, f, r, v
		cin >> b >> f >> r >> v;

		// Out of range
		if (b < 1 || b > 4 ||
			f < 1 || f > 3 ||
			r < 1 || r > 10)
		{
			cnt--;
			continue;
		}

		// Copy the resident before updating.
		temp = resident[b - 1][f - 1][r - 1];

		// Update resident
		resident[b - 1][f - 1][r - 1] += v;

		// Out of range
		if (resident[b - 1][f - 1][r - 1] < 0 || resident[b - 1][f - 1][r - 1] > 9)
		{
			// Back to the value before the update.
			resident[b - 1][f - 1][r - 1] = temp;
			cnt--;
			continue;
		}
	}

	// Output
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout << " " << resident[i][j][k];
			}
			cout << endl;
		}
		if (i < 3)
		{
			cout << "####################" << endl;
		}
	}

	return 0;
}