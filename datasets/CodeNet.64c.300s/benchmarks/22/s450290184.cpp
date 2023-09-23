#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int L[3], E[1000], N;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> L[0] >> L[1] >> L[2];

		if (L[0] < L[1]){ swap(L[0], L[1]); }
		if (L[0] < L[2]){ swap(L[0], L[2]); }
		if (L[1] < L[2]){ swap(L[1], L[2]); }

		E[i] = L[0] * L[0] - (L[1] * L[1] + L[2] * L[2]);
	}

	for (int i = 0; i < N; i++)
	{
		cout << ((E[i] == 0) ? "YES" : "NO") << endl;
	}

	return 0;
}