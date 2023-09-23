/*??£?¨?*/
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<queue>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
int main()
{
	int max = 0, n, a[5001] = {0},max_=0;
	while (cin >> n, n != 0)
	{
		max_ = 0;
		max = -1000000000;
		rep(i, n)
			cin >> a[i];
		rep(i, n)
		{
			for (int j = i; j < n; j++)
			{
				max_ += a[j];
				if (max < max_)
					max = max_;
			}
			max_ = 0;
		}
		cout << max << endl;
	}
	return 0;
}