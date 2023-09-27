#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<climits>
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
//typedef long long LL;

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
//#define INF 1000000000

const double EPS = 1e-10;
const double PI  = acos(-1.0);
////////////////////////////////////////////////
int n,m;
long long dp[100][100];
static const long long INF=(1LL<<32);

void floyd()
{
	REP(k,n)
	{
		REP(i,n)
		{
			if(dp[i][k]==INF)continue;
			REP(j,n)
			{
				if(dp[k][j]==INF)continue;
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
			}
		}
	}
}

int main()
{
	cin>>n>>m;
	REP(i,n)
	{
		REP(j,n)
		{
			dp[i][j]=INF;
			if(i==j)dp[i][j]=0;
		}
	}
	REP(i,m)
	{
		int s,t,d;cin>>s>>t>>d;
		dp[s][t]=d;
	}
	floyd();
	
	bool negative=false;
	REP(i,n)if(dp[i][i]<0)negative=true;
	if(negative)cout<<"NEGATIVE CYCLE"<<endl;
	else
	{
		REP(i,n)
		{
			REP(j,n)
			{
				if(j)cout<<" ";
				if(dp[i][j]==INF)cout<<"INF";
				else cout<<dp[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
	
}