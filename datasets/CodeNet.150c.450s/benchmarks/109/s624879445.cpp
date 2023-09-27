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

char in[20];
int n;
pi t[20000];

int main()
{
	while(scanf("%d",&n),n)
	{
		rep(i,n)rep(j,2)
		{
			int h,m,s; scanf("%d:%d:%d",&h,&m,&s);
			t[i*2+j]=mp(h*3600+m*60+s,1-j);
		}
		sort(t,t+2*n);
		
		int ans=0,c=0;
		rep(i,2*n)
		{
			if(t[i].second)c++; else c--;
			ans=max(ans,c);
		}
		printf("%d\n",ans);
	}
	return 0;
}