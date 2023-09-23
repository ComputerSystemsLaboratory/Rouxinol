#include<iostream>

using namespace std;

long long dp[128][21] = {0};

int main (void){

	int N;
	int field[128];
	int ans;
	cin >> N;
	for(int i=0;i<N-1;i++){
		cin >> field[i];
	}
	cin >> ans;
	dp[0][field[0]] = 1;
	for(int i=0;i<N-1;i++){
		for(int j=0;j<21;j++){
			if(dp[i][j]!=0){
				if(j+field[i+1]<=20){
					dp[i+1][j+field[i+1]]+=dp[i][j];
				}
				if(j-field[i+1]>=0){
					dp[i+1][j-field[i+1]]+=dp[i][j];
				}
			}
		}
	}

	cout << dp[N-2][ans] << endl;

	return 0;
}