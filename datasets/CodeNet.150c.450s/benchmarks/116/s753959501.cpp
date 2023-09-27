#include <bits/stdc++.h>
#define ll long long
#define INF 999999999
#define MOD 1000000007
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100005;

int a[MAX_N];

int main()
{
	int n,k;
	while(1){
		scanf("%d%d",&n,&k);
		if(n==0){
			break;
		}
		rep(i,n){
			scanf("%d",&a[i]);
		}
		ll ans=0;
		ll s=0;
		int id=0;
		while(id<n){
			s += a[id];
			if(id>=k){
				s-=a[id-k];
				ans = max(ans,s);
			}else if(id==k-1){
				ans = s;
			}
			id++;
		}
		cout << ans << "\n";
	}
	return 0;
}