#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ALL(a) (a).begin(),(a).end()
#define pb(x) push_back(x)
#define ms(m,v) memset(m,v,sizeof(m))
#define D10  fixed<<setprecision(10) 
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> P;
typedef long long ll;
struct edge{ int from, to, cost; };

int main()
{
	int w, h;
	while (cin >> h >> w, h)
	{
		int tai = h*h + w*w;
		int ansh, answ;
		for (int i = h + 1; i < 151; i++)
		{
			for (int j = i + 1; j < 151; j++)
			{
				if (i*i + j*j == tai)
				{
					ansh = i;
					answ = j;
					goto end;
				}
			}
		}

		for (int t = tai+1;; t++)
		{
			for (int i = 1; i < 151; i++)
			{
				for (int j = i + 1; j < 151; j++)
				{
					if (i*i + j*j == t)
					{
						ansh = i;
						answ = j;
						goto end;
					}
				}
			}
		}
	end:;
		cout << ansh << " " << answ << endl;
	}
	return 0;
}