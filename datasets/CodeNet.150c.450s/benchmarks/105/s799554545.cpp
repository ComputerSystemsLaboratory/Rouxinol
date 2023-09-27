#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=210;

ll gi() {
	ll x=0,o=1;char ch=getchar();
	while(!isdigit(ch)&&ch!='-') ch=getchar();
	if(ch=='-') o=-1,ch=getchar();
	while(isdigit(ch)) x=x*10+ch-'0',ch=getchar();
	return x*o;
}

int n;
ll a[N],p[70];
char s[N];

void insert(ll v) {
	for(int i=60;~i;i--)
		if(v>>i&1) {
			if(!p[i]) { p[i]=v;break; }
			v^=p[i];
		}
}

bool in(ll v) {
	for(int i=60;~i;i--)
		if(v>>i&1) {
			if(!p[i]) return 0;
			v^=p[i];
		}
	return 1;
}

int main() {
	int T=gi();
	while(T--) {
		cin>>n;
		for(int i=1;i<=n;i++) a[i]=gi();
		scanf("%s",s+1);
		memset(p,0,sizeof(p));
		int ans=0;
		for(int i=n;i;i--) {
			if(s[i]=='0') {
				insert(a[i]);
			}
			else {
				if(!in(a[i])) { ans=1;break; }
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
