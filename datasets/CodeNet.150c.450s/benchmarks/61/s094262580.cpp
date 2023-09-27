#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int N, A, B, C, X;
	while(cin >> N >> A >> B >> C >> X, N || A || B || C || X)
	{
		vector<int> vec(N);
		for(int i = 0; i < N; ++i)
		{
			cin >> vec[i];
		}
		int count = 0;
		int pos = 0;
		while(true)
		{
			if(vec[pos] == X)
			{
				++pos;
			}
			if(count >= 10001)
			{
				cout << -1 << endl;
				break;
			}
			if(pos >= N)
			{
				cout << count << endl;
				break;
			}
			X = (A * X + B) % C;
			++count;
		}
	}
}

int main()
{
	solve();
	return(0);
}