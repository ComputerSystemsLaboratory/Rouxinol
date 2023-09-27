#include<bits/stdc++.h>
using namespace std;
#define I inline int
#define V inline void
#define ll long long int
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
const int N=2e2+5;
struct bas{
	ll a[64];
	V init(){FOR(i,0,63)a[i]=0;}
	V ins(ll x){
		ROF(i,63,0)if(x>>i&1){
			if(!a[i])return void(a[i]=x);
			else x^=a[i];
		}
	}
	I find(ll x){
		ROF(i,63,0)if(x>>i&1){
			if(a[i])x^=a[i];
			else return false;
		}
		return true;
	}
}now;
ll a[N];
char st[N];
int T,n,ans;
int main(){
	for(scanf("%d",&T);T--;cout<<ans<<'\n'){
		scanf("%d",&n),now.init(),ans=0;
		FOR(i,1,n)scanf("%lld",a+i);
		scanf("%s",st+1);
		ROF(i,n,1)
			if(st[i]=='0')now.ins(a[i]);
			else if(!now.find(a[i]))ans=1;
	}
	return 0;
}