#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define repn(i,n,m) for(int i=n;i<m;i++)
#define repn1(i,n,m) for(int i=n;i<=m;i++)
using namespace std;
const int INF = 1e+8;

ll dp[100][100];
int equ[100]; 

int main(){
	memset(dp, 0, sizeof(dp));
	memset(equ, 0, sizeof(equ));

	int n;

	cin >> n;
	rep(i, n) cin >> equ[i];

	dp[0][equ[0]] = 1;

	repn1(i, 1, n){
		rep(j,21){
			int data;
			data = j + equ[i];
			if(/*0 <= data &&*/ data <= 20) dp[i][data] += dp[i-1][j]; 
			data = j - equ[i];
			if(0 <= data /*&& data <= 20*/) dp[i][data] += dp[i-1][j];
		}
	}

	cout << dp[n-1][equ[n]] << endl;

	return 0;
}