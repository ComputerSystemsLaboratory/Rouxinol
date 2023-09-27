#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> S(n + 1);
	for (int i = 0; i < n; ++i)
		cin >> S[i];

	int q;
	cin >> q;
	vector<int> T(q);
	for (int i = 0; i < T.size(); ++i)
		cin >> T[i];

	// Linear Search
	int count = 0;
	for (int j = 0; j < T.size(); ++j)
	{
		int i = 0;
		S[n] = T[j];
		while (S[i] != T[j])
			i++;
		if (i != n)
			count++;
	}

	cout << count << endl;

	return 0;
}