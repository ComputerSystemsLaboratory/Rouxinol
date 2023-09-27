#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 1002
typedef long long ll;

int make(string a, string b){

	int dp[MAX][MAX] = {};
	
	a = ' ' + a;
	b = ' ' + b;

	int len_a = a.size();
	int len_b = b.size();

	FOR(i,1,len_a){
	FOR(j,1,len_b){
	if (a[i]==b[j]) dp[i][j] = 1 + dp[i-1][j-1];
	else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	}
	}

	return dp[len_a-1][len_b-1];
} 	
	

int main(){
	int q;
	cin >> q;
	string str1,str2;
	rep(i,q){
	cin >> str1>>str2;
	cout << make(str1,str2) << endl;
	}
	return 0;
}

