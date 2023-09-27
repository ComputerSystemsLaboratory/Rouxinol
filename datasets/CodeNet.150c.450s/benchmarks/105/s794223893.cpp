#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=205,p=998244353;
int read(){
	int f=1,g=0;
	char ch=getchar();
	for (;!isdigit(ch);ch=getchar()) if (ch=='-') f=-1;
	for (;isdigit(ch);ch=getchar()) g=g*10+ch-'0';
	return f*g;
}
int T,n;
ll a[N];
char s[N];
struct asd{
	ll f[61];
	void clear(){memset(f,0,sizeof(f));}
	void add(ll x){
		for (int i=60;i>=0;i--)
		if (x&(1ll<<i)){
			if (!f[i]) {f[i]=x;return;}
			else x^=f[i];
		}
	}
	bool find(ll x){
		for (int i=60;i>=0;i--)
		if ((x^f[i])<x) x^=f[i];
		return (x==0);
	}
}f;
int main(){
//	freopen("a.in","r",stdin);
//	freopen("a.out","w",stdout);
	T=read();
	while (T--){
		n=read();int fl=0;
		f.clear();
		for (int i=1;i<=n;i++) scanf("%lld ",a+i);
		scanf(" %s",s+1);
		for (int i=n;i;i--)
		if (s[i]=='0'){
			f.add(a[i]);
		}
		else{
			if (!f.find(a[i])){fl=1;break;}
		}
		printf("%d\n",fl);
	}
	return 0;
}
