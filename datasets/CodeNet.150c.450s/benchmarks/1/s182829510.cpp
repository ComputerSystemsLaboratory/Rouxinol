#include<iostream>
#include<algorithm>

using namespace std;

const int INF=1999999999;

int main(){
	int n;
	cin >> n;

	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];

	int dp[n];
	for(int i=0;i<n;i++) dp[i] = INF;
	int tmp;
	int ans=0;

	for(int i=0;i<n;i++){
		*lower_bound(dp,dp+n,a[i]) = a[i];
	}

//	for(int j=0;j<n;j++){
//		for(int i=0;i<n;i++){
//			cout << dp[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	for(int i=n-1;i>=0;i--){
//		cout << "i = " << i << "\n";
//		if(dp[n-1][i] != INF){
//			cout << i+1 <<"\n";
//			break;
//		}
//	}
	cout << lower_bound(dp,dp+n,INF)-dp << "\n";

//	for(int i=0;i<n;i++) cout << dp[i] << " ";
//	cout << "\n";

	return 0;
}
