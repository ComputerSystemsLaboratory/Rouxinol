#include<bits/stdc++.h>
#define int long long
#define fr(i,a,b) for(int i(a),end##i(b);i<=end##i;i++)
#define fd(i,a,b) for(int i(a),end##i(b);i>=end##i;i--)
using namespace std;
const int maxn=500+5;
int a[maxn],s[maxn];
int n,T;
int p[200];
void insert(int x){
	fd(i,63,0){
		if((x>>i)&1){
			if(!p[i]){
				p[i]=x;
				return ;
			}
			else x^=p[i];
		}
	}
}
bool check(int x){
	fd(i,63,0){
		if((x>>i)&1)x^=p[i];
	}
	return !x;
}
signed main(){
	scanf("%lld",&T);
	while(T--){
		memset(p,0,sizeof(p));	
		scanf("%lld",&n);
		fr(i,1,n)scanf("%lld",&a[i]);
		fr(i,1,n)scanf("%1lld",&s[i]);
		fd(i,n,1){
			if(s[i]){
				if(!check(a[i]))goto NO;
			}
			else{
				insert(a[i]);	
			}
		}
		printf("0\n");
		continue;
		NO:;
		printf("1\n");
	}
	return 0;
}