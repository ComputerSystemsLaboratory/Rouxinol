#include<bits/stdc++.h>
using namespace std;
using ll=long long;
char s[210];
int T,n;ll a[210],bs0[64],bs1[64];
void ins(ll*b,ll x){
	for(int k=59;~k;k--)if(x>>k&1)
		if(!b[k]){b[k]=x;return;}
		else x^=b[k];
}
int chk(ll*b,ll x){
	for(int k=59;~k;k--)if((x>>k&1) && b[k])
		x^=b[k];
	return x==0;
}
int main(){
	scanf("%d",&T);
	while(T--){
		memset(bs0,0,sizeof bs0);
		memset(bs1,0,sizeof bs1);
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%lld",a+i);
		scanf(" %s",s+1);
		for(int i=n;i;){
		//	memset(bs1,0,sizeof bs1);
			while(i && s[i]=='0')ins(bs0,a[i--]);
			while(i && s[i]=='1')ins(bs1,a[i--]);
			for(int i=0;i<60;i++)if(bs1[i])
				if(!chk(bs0,bs1[i])){puts("1");goto sc;}
		}
		puts("0");sc:;
	}
	return 0;
}