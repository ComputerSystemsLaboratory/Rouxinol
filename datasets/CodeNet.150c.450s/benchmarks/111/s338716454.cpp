#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long int numbers[100];
	long long int table[100][21] = {0};
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> numbers[i];

	table[0][numbers[0]] = 1;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			if (table[i][j] == 0) continue;
			if (j + numbers[i + 1] <= 20) table[i + 1][j + numbers[i + 1]] += table[i][j];
			if (j - numbers[i + 1] >= 0) table[i + 1][j - numbers[i + 1]] += table[i][j];
		}
	}

	cout << table[n - 2][numbers[n - 1]] << endl;

	return 0;
}