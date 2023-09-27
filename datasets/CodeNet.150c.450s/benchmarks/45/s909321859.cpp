#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ModPow(int a,int r,int m)
{
	int x=1;
	for(;r;r>>=1){
		if(r&1) x=(ll)x*a%m;
		a=(ll)a*a%m;
	}
	return x;
}

int main()
{
	constexpr int MOD=1e9+7;
	for(int m,n;cin>>m>>n && m|n;){
		cout<<ModPow(m,n,MOD)<<endl;;
	}
}