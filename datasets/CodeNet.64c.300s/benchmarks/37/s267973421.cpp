#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
#define ALL(a) (a).begin(),(a).end()
#define SORT(v) sort(ALL(v))
//#define scanf scanf_s
typedef pair<int, int> P;

int n;
int main()
{
	while (cin >> n, n)
	{
		int cnt = 0;
		FOR(i,1, n / 2 + 1)
		{
			int sum = 0;
			for (int j = i;;j++)
			{
				sum += j;
				if (sum == n && j != sum) cnt++;
				if (sum >= n) break;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}