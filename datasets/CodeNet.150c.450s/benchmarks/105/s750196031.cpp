#include<bits/stdc++.h>
#define ll long long
#define gc getchar
using namespace std;
inline ll read(){
    ll x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
    return (f==1)?x:-x;
}
int n,m;
ll base[66],pos[66];
void insert(ll x,ll id){
    for (ll i=63;i>=0;i--){
        if (x&(1ll<<i)){
            if (!base[i]){
                pos[i]=id;base[i]=x;break;
            }
            if (pos[i]<id) swap(pos[i],id),swap(base[i],x);
            x^=base[i];
        }
    }
}
ll a[10101],s[10101];
inline void solve(){
	int n=read();
	memset(base,0,sizeof base);
	memset(pos,0,sizeof pos);
	for (int i=1;i<=n;i++) a[i]=read(),insert(a[i],i);
	for (int i=1;i<=n;i++){
		char ch=gc();
		while (!isdigit(ch)) ch=gc();
		s[i]=ch-'0';
	}
	bool flag=1;
	for (ll i=63;i>=0;i--){
		if (base[i]&&s[pos[i]]) flag=0;
	}
	cout<<!flag<<endl;
}
int main(){
	int T=read();
	while (T--) solve();
    return 0;
}