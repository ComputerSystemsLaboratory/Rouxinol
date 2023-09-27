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
#define c cout<<"#"<<endl;
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
int n,a[101][101],d[101],p[101];
QI q;
int main()
{
	cin>>n;
	FOR(i,1,n+1)
	{
		int k,m;cin>>k>>m;
		a[k][0]=m;
		FOR(j,1,m+1)
		{	
			int x;cin>>x;
			a[k][j]=x;
		}
	}
	REP(i,101)p[i]=1;
	for(q.push(1);SZ(q)!=0;)
	{
		int u=q.front();
		q.pop();
		for(;p[u]<=a[u][0];)
		{
			int v=a[u][p[u]];p[u]++;
			if(v!=1&&d[v]==0)
			{
				d[v]=d[u]+1;
				q.push(v);
			}
		}
	}
	FOR(i,2,n+1)
	{
		if(d[i]==0)d[i]--;
	}
	FOR(i,1,n+1)
	{
		cout<<i<<" "<<d[i]<<endl;
	}
	return 0;
}