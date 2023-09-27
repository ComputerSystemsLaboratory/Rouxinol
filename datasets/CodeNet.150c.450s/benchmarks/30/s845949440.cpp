#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> A(N, 0);
	for (int i = 0; i < N; ++i)
		cin >> A[i];

	int min, count = 0;
	for (int i = 0; i < N; ++i)
	{
		min = i;
		for (int j = i; j < N; ++j)
			if (A[j] < A[min])
				min = j;

		if (i != min)
		swap(A[i], A[min]), count++;
	}

	for (int i = 0; i < N; ++i) {
		cout << A[i];
		i < N - 1 ? cout << " " : cout << endl;
	}
	cout << count << endl;

	return 0;
}