#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
typedef long long ll;
const int dig=60;
#define N 233
inline ll read(){
	ll x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=(x<<1)+(x<<3)+c-'0';
		c=getchar();
	}
	return x*f;
}
int T,n;
ll a[N];
char s[N];
struct Basis{
	ll d[64];
	void clear(){
		memset(d,0,sizeof(d));
	}
	void Insert(ll x){
		for(int i=dig;i>=0;--i){
			if((x>>i)&1){
				if(d[i]){
					x^=d[i];
				}
				else{
					d[i]=x;
					return;
				}
			}
		}
	}
	bool check(ll x){
		for(int i=dig;i>=0;--i){
			if((x>>i)&1){
				if(!d[i])return false;
				x^=d[i];
			}
		}
		return true;
	}
}B;
int Solve(){
	n=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	scanf("%s",s+1);
	B.clear();
	for(int i=n;i>=1;--i){
		if(s[i]=='0'){
			B.Insert(a[i]);
		}
		else{
			if(!B.check(a[i]))return 1;
		}
	}
	return 0;
}
int main(){
	T=read();
	while(T--){
		printf("%d\n",Solve());
	}
	return 0;
}

