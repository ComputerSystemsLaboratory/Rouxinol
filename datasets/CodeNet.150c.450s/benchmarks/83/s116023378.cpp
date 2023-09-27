#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>

#define ll long long int
#define rep(i,x,y) for(int i=x;i<y;i++)
#define rel(i,x,y) for(int i=x-1;i>=y;i--)
#define all(x) x.begin(),x.end()
#define NMAX 100
#define WMAX 10000
using namespace std;
int dp[NMAX+1][WMAX+1] = {};

int main(){
	int N,W;
	cin >> N >> W;
	int v[N+1],w[N+1];
	v[0] = 0;w[0]=0;
	rep(i,1,N+1){
		cin >> v[i] >> w[i];
	}
	
	rep(i,1,N+1){
		rep(j,1,W+1){
			dp[i][j] = max(dp[i-1][j],dp[i][j]);
			if(j>=w[i]){
				dp[i][j] = max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	
	cout << dp[N][W] << endl;
}

