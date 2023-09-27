#include<iostream>

using namespace std;

long long dp[110][22]={0};

int main(){
	int n;
	cin>>n;
	int a;
	cin>>a;
	dp[1][a]=1;
	for(int i=2;i<n;i++){
		int x;
		cin>>x;
		for(int j=0;j<21;j++){
			if(j+x<21)dp[i][j+x]+=dp[i-1][j];
			if(j-x>=0)dp[i][j-x]+=dp[i-1][j];
		}
	}
	int c;
	cin>>c;
	cout<<dp[n-1][c]<<endl;
}