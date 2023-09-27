#include <iostream>

using namespace std;

long long int dp[99][21]={0};
int main(void){
	int n,tmp;
	cin >> n;
	cin >> tmp;
	dp[0][tmp]=1;
	for(int i=1;i<n-1;i++){
		cin >> tmp;
		for(int j=0;j<=20;j++){
			if(dp[i-1][j]){
				if(j+tmp<=20)
					dp[i][j+tmp]+=dp[i-1][j];
				if(j-tmp>=0)
					dp[i][j-tmp]+=dp[i-1][j];
			}
		}
	}
	cin >> tmp;
	cout << dp[n-2][tmp] << endl;
	return 0;		
}