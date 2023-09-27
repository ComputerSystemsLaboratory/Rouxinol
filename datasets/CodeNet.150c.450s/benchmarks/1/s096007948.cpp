#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int lis(vector<int> a){
    int n = a.size();
	int dp[n];
	fill(dp, dp + n, INT_MAX);
	rep(i,n) *lower_bound(dp, dp+n, a[i]) = a[i];
	return lower_bound(dp, dp+n, INT_MAX) - dp;
}
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n)cin >> a[i];
    cout << lis(a) << endl;
}
