#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
#define rei(n) for(int i=0;i<(int)n;i++)
#define rel(n) for(int l=0;l<(int)n;l++)
#define all(s) s.begin(),s.end()
#define INT_MAX 2147483647
#define debug(x) cout<<#x<<": "<<x<<endl;
#define PI 2*acos(0,0)
#define pb push_back
#define inin(x) int x; cin>>x;
#define ll long long
#define pb push_back

typedef pair<int, int> pii;
typedef pair<int, pii> pipii;

bool a[10][10000];
vector<string> b[11];
void mk(string str)
{
	b[str.size()].pb(str);
	if (str.size() == 10)return;

	mk(str + "0");
	mk(str + "1");
	return;
}

int main()
{
	string hoge = "";
	mk(hoge);
	while (1)
	{
		int ans = -1;
		inin(y); inin(x);
		if (x == 0&&y == 0)break;
		rep(i, y)
		{
			rep(l, x)
			{
				cin >> a[i][l];
			}
		}

		for (int i = 0; i < b[y].size(); i++)
		{
			int tans = 0;
			for (int l = 0; l < x; l++)
			{
				int tm = 0;
				for (int k = 0; k < y; k++)
				{
					tm+=(b[y][i][k]=='0'+a[k][l])==1;
				}
				tans += max(tm,abs(y-tm));
			}
			ans = max(ans, tans);
		}
		cout << ans << endl;


	}
}