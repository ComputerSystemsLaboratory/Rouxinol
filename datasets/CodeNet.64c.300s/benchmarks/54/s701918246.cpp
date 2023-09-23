//★#1014918 Solution for 0557: A First Grader by daiota
#include<iostream>
using namespace std;
 
int a[110];
long long dp[110][25];
int main(){
	int i,j;
	int N;
	cin >> N;
	for(i=1; i<=N; i++) {cin >> a[i];}
	dp[1][a[1]] = 1;
	for(i=2; i<N; i++){
		for(j=0; j<=20; j++){
			if(j-a[i] >=  0) dp[i][j] += dp[i-1][j-a[i]];
			if(j+a[i] <= 20) dp[i][j] += dp[i-1][j+a[i]];
		}
	}
	cout << dp[N-1][a[N]] << endl;
	return 0;
}

