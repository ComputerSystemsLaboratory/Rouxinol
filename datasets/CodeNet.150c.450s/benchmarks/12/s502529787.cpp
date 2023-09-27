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
#define INF 2000000000

const double EPS = 1e-10;
const double PI  = acos(-1.0);

int main()
{
	int n,a[260];cin>>n;
	FOR(i,1,n+1)cin>>a[i];
	FOR(i,1,n+1) 
	{
		int f=floor(i/2);
		cout<<"node "<<i<<": key = "<<a[i]<<", ";
		if(f!=0)cout<<"parent key = "<<a[f]<<", ";
		if(i*2<n+1)cout<<"left key = "<<a[i*2]<<", ";
		if(i*2+1<n+1)cout<<"right key = "<<a[i*2+1]<<", ";
		cout<<endl;
	}
	return 0;
}