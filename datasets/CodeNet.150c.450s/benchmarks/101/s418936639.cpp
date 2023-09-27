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
VVI a;
int n,b,d[100010],p[100010];
QI q;
int main()
{
	//??£????????????????????????
	cin>>n>>b;
	REP(i,n+1)
	{
		a.push_back({0});
	}
	REP(i,b)
	{
		int s,t;cin>>s>>t;s++;t++;
		a[s][0]++;
		a[s].push_back(t);
		a[t][0]++;
		a[t].push_back(s);
	}
	FOR(i,1,n+1)
	{
		sort(&a[i][1],&a[i][a[i][0]+1]);
	}
	
	REP(i,n+1)p[i]=1,d[i]=0;
	d[1]=1;
	int g=1;
	for(q.push(1);SZ(q)!=0;)
	{
		int u=q.front();
		q.pop();
		if(a[u][0]==0)
		{
			d[u]=g;g++;
		}
		else
		{
			for(;p[u]<=a[u][0];)
			{
				int v=a[u][p[u]];p[u]++;
				if(v!=1&&d[v]==0)
				{
					d[v]=g;
					q.push(v);
				}
			}
		}
		if(q.empty())
		{
			int i;
			for(i=2;d[i]!=0;i++);
			if(i>n)
			{
				break;
			}
			else
			{
				g++;
				q.push(i);
			}
		}
	}
	cin>>n;
	REP(i,n)
	{
		int first,second;
		cin>>first>>second;first++;second++;
		if(d[first]==d[second])cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}