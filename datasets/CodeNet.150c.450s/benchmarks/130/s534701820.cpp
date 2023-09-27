#include <iostream>
using namespace std;

int main()
{
	// Variable declaration
	int n, m;
	int A[100][100], b[100];
	int disp[100];

	// Input n, m
	cin >> n >> m;

	// Input
	// n times loop
	for (int cnt = 0; cnt < n; cnt++)
	{
		// m times loop
		for (int cnt2 = 0; cnt2 < m; cnt2++)
		{
			// Input A, b
			cin >> A[cnt][cnt2];
		}
	}
	// m times loop
	for (int cnt = 0; cnt < m; cnt++)
	{
		// Input b
		cin >> b[cnt];
	}
	// n times loop
	for (int cnt = 0; cnt < n; cnt++)
	{
		disp[cnt] = 0;
		// m times loop
		for (int cnt2 = 0; cnt2 < m; cnt2++)
		{
			disp[cnt] += A[cnt][cnt2] * b[cnt2];
		}
		// Output
		cout << disp[cnt] << endl;
	}

	return 0;
}