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
#define INF 1000000000

const double EPS = 1e-10;
const double PI  = acos(-1.0);
////////////////////////////////////////////////
int a[100][100],n,judge,s[100],d[101],p[100];

int main()
{
	cin>>n;
	REP(i,n)
	{
		REP(j,n)a[i][j]=INF;
	}
	REP(i,n)
	{
		int node,m;cin>>node>>m;
		REP(j,m)
		{
			int x,cost;cin>>x>>cost;
			a[node][x]=cost;
		}
	}
	
	REP(i,n+1)d[i]=INF;
	d[0]=0;
	for(;;)
	{
		int u=n;
		REP(i,n)
		{
			if(s[i]==0&&d[u]>d[i])u=i;
		}
		s[u]=1;
		if(d[u]==INF)break;
		REP(i,n)
		{
			if(d[u]+a[u][i]<d[i]&&s[i]==0)
			{
				d[i]=d[u]+a[u][i];
				p[i]=u;
			}
		}
	}
	REP(i,n)cout<<i<<" "<<d[i]<<endl;
	return 0;
}