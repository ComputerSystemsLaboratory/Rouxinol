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
typedef pair<int, int> PII;
typedef long long LL;

#define d(x)  cerr << #x << " = " << (x) << endl;
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
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
/////////////////////////////////////////////////////////////////////////

int n,a[500010];
void maxheapify(int a[],int i)
{
	int l=i*2;
	int r=l+1;
	int lgt;
	if(l<=n&&a[l]>a[i])
	{
		lgt=l;
	}
	else lgt=i;
	if(r<=n&&a[r]>a[lgt])
	{
		lgt=r;
	}
	if(lgt!=i)
	{
		swap(a[i],a[lgt]);
		maxheapify(a,lgt);
	}
}

void buildmaxheap(int a[])
{
	DFOR(i,n/2+1,1)maxheapify(a,i);
}

int main()
{
	cin>>n;
	FOR(i,1,n+1)cin>>a[i];
	buildmaxheap(a);
	FOR(i,1,n+1)cout<<" "<<a[i];
	cout<<endl;
	return 0;
}