#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define INF INT_MAX/2

int main()
{
	while (1)
	{
		int n; cin >> n;
		if (n == 0) return 0;

		int sum = 0;
		int _max = -1;
		int _min = INF;
		rep(i, 0, n)
		{
			int s; cin >> s;
			sum += s;
			_max = max(_max, s);
			_min = min(_min, s);
		}
		sum -= _max;
		sum -= _min;
		cout << sum / (n - 2) << endl;
	}
}