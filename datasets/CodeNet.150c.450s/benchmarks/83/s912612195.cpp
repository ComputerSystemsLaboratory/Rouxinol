#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <cstdio> 
#include <functional> 
#include <set> 
#include <sstream> 
#include <cctype>

using namespace std; 

#define MP make_pair
typedef unsigned long long ULL;

//dp[i+][j]
//i番目まで使って重さj以下になるように選んだ時の最大価値
long dp[101][10001];

int main(){

	int N,W;
	cin>>N>>W;

	vector<int> v(N),w(N);
	for(int i=0;i<N;i++) cin>>v[i]>>w[i];

	for(int i=0;i<N;i++){
		for(int j=0;j<=W;j++){
			if(j<w[i]) dp[i+1][j]=dp[i][j];
			else       dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
		}
	}

	cout<<dp[N][W]<<endl;

	return 0;
}