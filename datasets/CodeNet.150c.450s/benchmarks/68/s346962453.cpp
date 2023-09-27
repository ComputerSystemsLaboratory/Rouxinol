#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll i,h,n,ans;
ll x[10005];


bool solve(){
	cin >> n;
	if(n == 0)return false;
	for(i=0;i<n;i++){
		cin >> x[i];
	}
	ans = 99999999;
	sort(x,x+n);
	for(i=0;i<n-1;i++){
		ans = min(ans,x[i+1]-x[i]);
	}
	cout << ans << endl;
	return true;
}

int main(){
	while(solve()){}
	return 0;
}
