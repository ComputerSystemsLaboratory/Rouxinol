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

	int count = 0;
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = N - 1; i > 0; --i)
			if (A[i] < A[i - 1])
				swap(A[i], A[i - 1]), count++, flag = true;
	}

	for (int i = 0; i < N; ++i) {
		cout << A[i];
		i < N - 1 ? cout << " " : cout << endl;
	}
	cout << count << endl;

	return 0;
}