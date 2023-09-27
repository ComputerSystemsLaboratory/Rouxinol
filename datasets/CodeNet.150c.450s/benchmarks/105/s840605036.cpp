#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
#define N 300

const LL k=60;
LL n,a[N],f[80];
char s[N];

void ins(LL x){
	for (LL i=k;~i;--i){
		if (x>>i&1){
			if (!f[i]){f[i]=x; return;}
			else x^=f[i];
		}
	}
}

bool pd(LL x){
	for (LL i=k;~i;--i){
		if (x>>i&1){
			if (!f[i]) return 0;
			x^=f[i];
		}
	}
	return 1;
}

void solve(){
	scanf("%lld",&n);
	for (LL i=1;i<=n;++i) scanf("%lld",a+i);
	scanf("%s",s+1);
	memset(f,0,sizeof f);
	LL flag=0;
	for (LL i=n;i;--i){
		if (s[i]=='0') ins(a[i]);
		else if (!pd(a[i])){flag=1; break;}
	}
	printf("%lld\n",flag);
}

int main(){
	LL T; scanf("%lld",&T);
	while (T--) solve();
	
	return 0;
}
			