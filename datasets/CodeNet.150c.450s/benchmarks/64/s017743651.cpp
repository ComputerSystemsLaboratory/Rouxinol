#include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;

const int MAX_N = 20;
const int MAX_q = 200;

bool dp[MAX_N][40001];
int A[MAX_N];
int m[MAX_q];

int main()
{
	int n,q;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> A[i];
	}
	cin >> q;
	for(int i=0;i<q;i++){
		cin >> m[i];
	}
	int sum = accumulate(A,A+n,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<=sum;j++){
			dp[i][j] = false;
		}
	}
	dp[0][0] = true;
	dp[0][A[0]] = true;
	for(int i=1;i<n;i++){
		for(int j=0;j<=sum;j++){
			if(dp[i-1][j] == true){
				dp[i][j] = true;
				dp[i][j+A[i]] = true;
			}
		}
	}
	for(int i=0;i<q;i++){
		if(dp[n-1][m[i]] == true){
			cout << "yes\n";
		}else{
			cout << "no\n";
		}
	}
}