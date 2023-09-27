#include<stdio.h>
#include<vector>
#define it register int
#define ct const int
#define il inline
using namespace std;
typedef long long ll;
#define rll register ll
#define cll const ll
const int N=1000005;
int n,T;
ll a[N];
char s[N];
vector<ll> v;
il ll Min(cll p,cll q){return p<q?p:q;}
int main(){ 
	scanf("%d",&T);it i;
	while(T--){
		scanf("%d",&n);
		for(i=1;i<=n;++i) scanf("%lld",&a[i]);
		scanf("%s",s+1),v.clear();it fl=0;
		for(i=n;i;--i){
			rll x=a[i];
			for(const ll &j : v) x=Min(x,x^j);
			if(s[i]=='0') v.push_back(x);
			if(s[i]=='1'&&x){fl=1;break;}
		}
		printf("%d\n",fl);
	}
	return 0;
}