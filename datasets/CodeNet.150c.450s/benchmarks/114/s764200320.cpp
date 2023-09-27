#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<list>
#include<map>
#include<set>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef stack<int> SI;
typedef queue<int> QI;
typedef pair<int,int> PII;
typedef long long LL;

#define d(x)  cout<<#x<<" = "<<(x)<<endl;
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define REACH(i,c) for(typeof((c).rbegin()) i=(c).rbegin(); i!=(c).rend(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c,n) sort(c,c+n)
#define VSORT(c) sort((c).begin(),(c).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define DFOR(i,b,a) for(int i=(b)-1;i>=(a);--i)
#define DREP(i,n) DFOR(i,n,0)
#define INF 2000000000

const double EPS = 1e-10;
const double PI  = acos(-1.0);
////////////////////////////////////////////////
int a[100][100],n,s,judge,cost;
int t[100];
int main()
{
	cin>>n;
	REP(i,n)
	{
		REP(j,n)
		{
			cin>>a[i][j];
			if(a[i][j]==-1)a[i][j]=INF;
		}
	}
	t[0]=1;
	for(;;)
	{
		int mincost=INF;
		REP(u,n)
		{
			REP(v,n)
			{
				if(t[u]==1&&t[v]==0)
				{
					if(mincost>a[u][v])
					{
						mincost=a[u][v];
						s=v;
					}
				}
			}
		}
		cost+=mincost;
		t[s]=1;
		judge=1;
		REP(i,n)judge&=t[i];
		if(judge==1)break;
	}
	cout<<cost<<endl;
	return 0;
}