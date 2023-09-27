#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int N, M, P;
	while(cin >> N >> M >> P, N || M || P)
	{
		vector<int> vec(N);
		int sum = 0;
		for(int i = 0; i < N; ++i)
		{
			cin >> vec[i];
			sum += vec[i] * 100;
		}
		sum = sum * (100 - P) / 100;
		if(vec[M - 1] != 0)
		{
			cout << sum / vec[M - 1] << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}