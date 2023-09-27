#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int>D(N);
	for(size_t i = 0; i < N; i++)
	{
		cin >> D[i];
	}
	for(size_t i = 0; i < N; i++)
	{
		cout << D[N - i - 1] << ( i == N - 1 ? "\n" : " " );
	}
}