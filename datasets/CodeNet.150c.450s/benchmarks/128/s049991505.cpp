#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char C[20];

	cin >> C;

	for (int i = strlen(C) - 1; i >= 0; i--)
	{
		cout << C[i];
	}

	cout << endl;

	return 0;
}