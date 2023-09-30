#include <iostream>
#include <vector>

using namespace std;

/// <summary>p???k??°??§?????????????????????????±???????</summary>
/// <param name='k'>??°??°</param>
/// <param name='p'>?????§?????????</param>
/// <param name='n'>???????????°</param>
/// <param name='w'>??????</param>
long long getCapaciry(int k, long long p, int n, vector<int> w)
{
	// k??°????????????
	int count = 0;
	for (int i = 0; i < k; i++)
	{
		long long sum = 0;

		// p????¶????????????§??????
		while (sum + w[count] <= p)
		{
			sum += w[count];
			count++;

			// ??????????????????
			if (count == n)
				return n;
		}
	}

	return count;
}

int main()
{
	long long sum = 0;
	int N, K;
	cin >> N >> K;

	vector<int> W(N);
	for (int i = 0; i < N; i++)
	{
		cin >> W[i];
		sum += W[i];
	}

	long long right = sum + 1;
	long long left = 0;
	long long mid;
	while (left + 1 < right)
	{
		mid = (left + right) / 2;

		if (getCapaciry(K, mid, N, W) >= N)
			right = mid;
		else
			left = mid;
	}

	cout << right << endl;

	return 0;
}