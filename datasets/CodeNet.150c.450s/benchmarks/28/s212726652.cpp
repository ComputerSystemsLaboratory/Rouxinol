#include<iostream>
#include<cstdio>
using namespace std;

int N, K, A[100000];

int check(int key)
{
	int i = 0;
	for (int j = 0; j < K; j++)
	{
		int s = 0;
		while (s + A[i] <= key)
		{
			if (i == N) return N;
			s = s + A[i];
			i++;
			
		}
	}
	return i;
}

int solve()
{
	int left = 0;
	int right = 100000 * 10000;
	while (right-left>1)
	{
		int mid = (left + right) / 2;
	//	cout << mid << endl;
		int v = check(mid);
		if (v >= N) right = mid;
		else left = mid;
	}
	return right;
}

int main()
{
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int ans = solve();
	cout << ans << endl;
	return 0;
}
