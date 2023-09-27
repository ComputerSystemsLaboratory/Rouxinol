#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

void solve()
{
	int R, C;
	while(cin >> R >> C, R || C)
	{
		vector< bitset<10001> > senbei(R);
		for(int i = 0; i < R; ++i)
		{
			for(int j = 0; j < C; ++j)
			{
				int a;
				cin >> a;
				if(a == 1)
				{
					senbei[i].set(j);
				}
			}
		}
		int k = 1;
		for(int i = 0; i < R; ++i)
		{
			k <<= 1;
		}
		--k;
		int max_sum = 0;
		for(int i = 0; i <= k; ++i)
		{
			vector< bitset<10001> > senbei_copy = senbei;
			int b = i;
			int count = 0;
			while(b)
			{
				if(b & 1)
				{
					senbei_copy[count] = ~senbei_copy[count];
				}
				b >>= 1;
				++count;
			}
			int sum = 0;
			for(int i = 0; i < C; ++i)
			{
				int sum1 = 0;
				int sum2 = 0;
				for(int j = 0; j < R; ++j)
				{
					if(senbei_copy[j][i])
					{
						++sum1;
					}
					else
					{
						++sum2;
					}
				}
				sum += max(sum1, sum2);
			}
			max_sum = max(max_sum, sum);
		}
		cout << max_sum << endl;		
	}
}

int main()
{
	solve();
	return(0);
}