#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[214514];
int main(){
	ll n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>k){
			if(a[i]>a[i-k])cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}
