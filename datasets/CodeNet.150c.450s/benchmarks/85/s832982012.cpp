#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <queue>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
typedef unsigned long ll;
#define MAX_N 101


int dp[MAX_N][MAX_N];
int p[MAX_N];



int main()
{
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>p[i-1]>>p[i];
	}
	for(int i = 1; i <= n; i++) dp[i][i] = 0;
	for(int l = 2; l <= n; l++){
		for(int i = 1; i <= n - l + 1; i++){
			int j = i + l -1;
			dp[i][j] = (1<<21);
			for(int k = i; k <= j-1; k++){
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]);
			}
		}
	}
	cout<< dp[1][n]<<endl;
	return 0;
}


