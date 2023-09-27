#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<iomanip>
#include<complex>
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
typedef list<int> LI;
typedef pair<int,int> PII;
typedef long long LL;

#define d(x)  cout<<#x<<" = "<<(x)<<endl;
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define EMP empty()
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
#define PI  acos(-1.0)
////////////////////////////////////////////////
int m,n,c[21],dp[50010];

int main()
{
	cin>>n>>m;
	FOR(i,1,m+1)cin>>c[i];
	sort(c,c+m);
	FOR(i,0,n+1)dp[i]=i;
	FOR(i,2,m+1)
	{
		FOR(j,c[i],n+1)
		{
			dp[j]=min(dp[j],dp[j-c[i]]+1);
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}