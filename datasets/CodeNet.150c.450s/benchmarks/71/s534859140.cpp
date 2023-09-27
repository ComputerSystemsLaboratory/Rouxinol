#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
int main(){
	int n, ans;
	while(cin >> n){
		ans=0;
		rep(i,10) rep(j,10) rep(k,10) rep(l,10) if(i+j+k+l==n) ans++;
		cout << ans << endl;
	}
    return 0;
}