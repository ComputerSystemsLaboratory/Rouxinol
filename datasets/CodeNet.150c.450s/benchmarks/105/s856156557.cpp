#include<bits/stdc++.h>
using namespace std;

const int maxn=205;
int T,n;
long long a[maxn];
char s[maxn];

namespace Basis{
	const int mlog=63;
	long long b[mlog];
	void clear(){
		memset(b,0,sizeof(b));
	}
	void add(long long x){
		for(int i=mlog-1;i>=0;i--){
			if(!((x>>i)&1))continue;
			if(b[i])x^=b[i];
			else{
				b[i]=x;
				break;
			}
		}
	}
	bool ask(long long x){
		for(int i=mlog-1;i>=0;i--){
			if(!((x>>i)&1))continue;
			if(b[i])x^=b[i];
		}
		return x==0;
	}
}

int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
		scanf("%s",s+1);
		bool ok=true; 
		Basis::clear(); 
		for(int i=n;i>=1;i--){
			if(s[i]=='0')Basis::add(a[i]);
			else ok&=Basis::ask(a[i]);
		}
		puts(ok?"0":"1");
	}
	return 0;
}