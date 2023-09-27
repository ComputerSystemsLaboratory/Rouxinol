#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define Red ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

typedef long long ll;

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(i>=k){
			if(a[i]>a[i-k])cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
}

int main(){
	Red;
	int T=1;
	//cin>>T;
	while(T--)solve();
}