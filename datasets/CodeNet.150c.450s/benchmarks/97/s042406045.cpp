#include<iostream>
#include<sstream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#include<numeric>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>

#define rep(i,n) for(int i=0;i<n;i++)
#define all(c) (c).begin(),(c).end()
#define mp make_pair
#define pb push_back
#define rp(i,c) rep(i,(c).size())
#define fr(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int inf=1<<28;
const double INF=1e12,EPS=1e-9;

int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
int n,sx[200],sy[200];

int main()
{
	while(scanf("%d",&n),n)
	{
		int x=0,X=0,y=0,Y=0;
		for(int i=1;i<n;i++)
		{
			int a,b; scanf("%d%d",&a,&b);
			sx[i]=sx[a]+dx[b]; sy[i]=sy[a]+dy[b];
			x=min(x,sx[i]); X=max(X,sx[i]);
			y=min(y,sy[i]); Y=max(Y,sy[i]);
		}
		printf("%d %d\n",X-x+1,Y-y+1);
	}
	return 0;
}