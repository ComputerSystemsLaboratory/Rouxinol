#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int> A(N, 0);

	for (int i = 0; i < N; ++i)
		cin >> skipws >> A[i];

	for (int i = 1; i <= A.size(); ++i)
	{
		for (int i = 0; i < N; ++i) {
			cout << A[i];
			if (i != N - 1)
				cout << " ";
		}
		cout << endl;

		int key = A[i];
		int j = i - 1;

		while (j >= 0 && A[j] > key) {
			A[j + 1] = A[j];
			j--;
		}

		A[j + 1] = key;
	}

	return 0;
}