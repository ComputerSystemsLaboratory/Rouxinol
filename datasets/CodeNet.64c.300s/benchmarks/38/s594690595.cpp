#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <utility>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int a[10];
int n;

bool dfs(int i,int left,int right){
	if(i==10) return true;
	if(a[i]>left){
		return dfs(i+1,a[i],right);
	}
	if(a[i]>right){
		return dfs(i+1,left,a[i]);
	}
	return false;
}

void solve(){
	rep(i,10) cin >> a[i];
	if(dfs(0,0,0)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return;
}

int main(){
	cin >> n;
	rep(i,n){
		solve();
	}
	return 0;
}