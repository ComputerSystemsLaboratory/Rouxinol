#include <iostream>
#include <vector>

using namespace std;

int main()
{ 
	int n;
	while (cin >> n)
	{
		vector<bool> a(n + 1, true);
		int cnt = n == 0 ? 0 : n - 1;

		// Sieve of Eratosthenes
		for (int i = 2; i*i <= n; ++i)
			if (a[i])
				for (int j = 0; i * (j + 2) <= n; ++j)
					if (a[i * (j + 2)]) a[i * (j + 2)] = false, cnt--;

		cout << cnt << endl;
	}

	return 0;
}