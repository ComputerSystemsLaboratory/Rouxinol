#include <climits>
#include <iostream>

using namespace std;

template <typename Type>
long long Maximum_Sum_Sequence(Type N[], int size)
{
	long long max = LLONG_MIN;

	for (int i = 0; i < size; i++)
	{
		long long sum = 0;

		for (int j = i; j < size; j++)
		{
			sum += N[j];

			if (sum > max) { max = sum; }
		}
	}

	return max;
}

int main()
{
	const int DATASETS = 100;

	int n[DATASETS], a[DATASETS][5000], c = 0;

	while (true)
	{
		cin >> n[c];

		if (n[c] == 0) { break; }

		for (int i = 0; i < n[c]; i++) { cin >> a[c][i]; }

		c++;
	}

	for (int i = 0; i < c; i++)
	{
		cout << Maximum_Sum_Sequence(a[i], n[i]) << endl;
	}

	return 0;
}