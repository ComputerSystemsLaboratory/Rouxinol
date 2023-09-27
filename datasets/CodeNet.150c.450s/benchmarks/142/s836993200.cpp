#include<bits/stdc++.h>
#define ll long long
#define all(a) a.begin(),a.end()
#define sz(a) a.size()
#define re return 
#define MP make_pair
#define pb push_back
using namespace std;

signed main(){
	ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=k;i<n;i++){
		if(a[i-k]<a[i]) cout<<"Yes\n";
		else cout<<"No\n";
	}
	re 0;
}
