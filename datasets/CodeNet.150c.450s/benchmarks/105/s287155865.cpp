#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=205;
int T,n;char s[maxn];
long long a[maxn],b[70];
inline void add(long long x){
	for (int i=60;~i;i--) if((x>>i)&1)
	if(!b[i]){b[i]=x;break;}else x^=b[i];
}
inline bool query(long long x){
	for (int i=60;~i;i--) if((x>>i)&1) x^=b[i];
	return !x;
}
inline bool solve(){
	for (int i=n;i;i--)
	if(s[i]=='0') add(a[i]);
	else if(!query(a[i])) return 0;
	return 1;
}
int main(){
	for (scanf("%d",&T);T--;){
		memset(b,0,sizeof b);
		scanf("%d",&n);
		for (int i=1;i<=n;i++) scanf("%lld",&a[i]);
		scanf("%s",s+1);
		puts(solve()?"0":"1");
	}
	return 0;
}