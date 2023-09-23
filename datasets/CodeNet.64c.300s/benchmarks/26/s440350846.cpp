#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL mod=1e9+7;
LL bm(LL b,LL p,LL m){
	LL a=1;
	while(p){
		if(p&1)a=(a*b)%m;
		b=(b*b)%m;
		p>>=1;
	}
	return a;
}

int main(){
	int m,n;cin>>m>>n;
	cout<<bm(m,n,mod)<<endl;
}