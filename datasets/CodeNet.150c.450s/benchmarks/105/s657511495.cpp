#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
#include <bits/stdc++.h>
using namespace std;
template<class t> inline t read(t &x){
	char c=getchar();bool f=0;x=0;
	while(!isdigit(c)) f|=c=='-',c=getchar();
	while(isdigit(c)) x=(x<<1)+(x<<3)+(c^48),c=getchar();
	if(f) x=-x;return x;
}
template<class t> inline void write(t x){
	if(x<0) putchar('-'),write(-x);
	else{if(x>9) write(x/10);putchar('0'+x%10);}
}

#define int long long

const int N=205;
int basis[65],n,a[N],b[N];

void insert(int x){
	for(int i=59;~i;i--) if(x>>i&1){
		if(basis[i]) x^=basis[i];
		else{
			basis[i]=x;
			return ;
		}
	}
}

bool exists(int x){
	for(int i=59;~i;i--) if(x>>i&1){
		if(basis[i]) x^=basis[i];
		else return 0;
	}
	return 1;
}

bool doit(){
	read(n);
	for(int i=0;i<60;i++) basis[i]=0;
	for(int i=1;i<=n;i++) read(a[i]);
	for(int i=1;i<=n;i++) scanf("%1d",&b[i]);
	for(int i=n;i;i--){
		if(!b[i]) insert(a[i]);
		else if(!exists(a[i])) return 1;
	}
	return 0;
}

signed main(){
	int t;
	read(t);
	while(t--) write(doit()),puts("");
}