#include <iostream>
using namespace std;
int data[220],N;
unsigned long long dp[220][21];
int main(){
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>data[i];
	}
	dp[0][0]=1;
	for(int i=0;i<=N;i++){
		for(int j=0;j<21;j++){
		if(dp[i][j]>0){
			if(j+data[i+1]<21){
				dp[i+1][j+data[i+1]]+=dp[i][j];
			}
			if(i!=0 && j-data[i+1]>=0){
				dp[i+1][j-data[i+1]]+=dp[i][j];
			}
		}
		}
	}
	cout<<dp[N-1][data[N]]<<endl;
	return 0;
}