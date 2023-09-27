#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int w[100],v[100];
	for(int i=0;i<n;i++){
		cin >> v[i] >> w[i];
	}

	int DP[101][10001];

	for(int j=0;j<=m;j++)
		DP[n][j] = 0;

	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=m;j++){
			if(j<w[i]){
				DP[i][j] = DP[i+1][j];
			}else{
				if(DP[i+1][j]>DP[i+1][j-w[i]]+v[i]){
					DP[i][j] = DP[i+1][j];
				}else{
					DP[i][j] = DP[i+1][j-w[i]]+v[i];
				}
			}
		}
	}
	
	cout << DP[0][m] <<endl;

	return 0;
}
