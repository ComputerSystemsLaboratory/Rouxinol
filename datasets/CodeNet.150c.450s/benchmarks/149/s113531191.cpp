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

const double EPS = 1e-10;
const double PI  = acos(-1.0);
////////////////////////////////////////////////
class DisjointSet
{
	public:
		vector<int> rank,p;
		DisjointSet(){}
		DisjointSet(int size)
		{
			rank.resize(size,0);
			p.resize(size,0);
			for(int i=0;i<size;i++)makeSet(i);
		}
		
		void makeSet(int x)
		{
			p[x]=x;
			rank[x]=0;
		}
		
		bool same(int x,int y)
		{
			return findSet(x)==findSet(y);
		}
		
		void unite(int x,int y)
		{
			link(findSet(x),findSet(y));
		}
		
		void link(int x,int y)
		{
			if(rank[x]>rank[y])
			{
				p[y]=x;
			}
			else
			{
				p[x]=y;
				if(rank[x]==rank[y])
				{
					rank[y]++;
				}
			}
		}
		
		int findSet(int x)
		{
			if(x!=p[x])
			{
				p[x]=findSet(p[x]);
			}
			return p[x];
		}
};

int main()
{
	int n,a,b,q;
	int t;
	cin>>n>>q;
	DisjointSet ds=DisjointSet(n);
	
	for(int i=0;i<q;i++)
	{
		cin>>t>>a>>b;
		if(t==0)ds.unite(a,b);
		else if(t==1)
		{
			if(ds.same(a,b))cout<<1<<endl;
			else cout<<0<<endl;
		}
	}
	return 0;
}