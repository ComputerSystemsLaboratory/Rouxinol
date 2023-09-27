#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_P 100000 
int a[MAX_P];
int P;
int getLIS(){
	int dp[MAX_P];
	fill(dp, dp + P, INT_MAX);
	rep(i,P) *lower_bound(dp, dp+P, a[i]) = a[i];
	return lower_bound(dp, dp+P, INT_MAX) - dp;
}
int main(void){
    cin >> P;
    rep(i,P)cin >> a[i];
    cout << getLIS() << endl;
}
