#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define rep(i,n) for(int i=0;i<n;++i)

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100005;

int m,n;

int main()
{
	scanf("%d%d",&m,&n);
	int ans=1;
	while(n > 0){
		if(n & 1){
			ans = (ll)ans * m % MOD;
		}
		m = (ll)m*m%MOD;
		n >>= 1;
	}
	printf("%d\n",ans);
	return 0;
}