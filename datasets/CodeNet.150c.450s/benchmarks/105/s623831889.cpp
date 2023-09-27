#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

void solve(){
	int n; cin>>n;
	vector<unsigned long long> a(n);
	rep(i,n) cin>>a[i];
	string s; cin>>s;

	vector<unsigned long long> B;
	for(int i=n-1;i>=0;i--){
		auto v=a[i];
		for(auto b:B) v=min(v,v^b);
		if(v!=0){
			if(s[i]=='1'){
				puts("1");
				return;
			}
			B.emplace_back(v);
		}
	}
	puts("0");
}

int main(){
	int q; scanf("%d",&q); rep(_,q) solve();
	return 0;
}
