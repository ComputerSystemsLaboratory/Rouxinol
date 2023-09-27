#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int N;
	while(cin >> N, N)
	{
		vector<int> Vec(N);
		for(int i = 0; i < N; ++i)
		{
			cin >> Vec[i];
		}
		int Max = -999999999;
		for(int i = 0; i < N; ++i)
		{
			int sum = 0;
			for(int j = i; j < N; ++j)
			{
				sum += Vec[j];
				if(sum > Max)
				{
					Max = sum;
				}
			}
		}
		cout << Max << endl;
	}
}

int main()
{
	solve();
	return(0);
}