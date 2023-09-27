#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = 1000000;

int NN;
string s1, s2;
int dp[1001][1001];

int run(){
	int N1 = s1.length();
	int N2 = s2.length();

	rep(i1, N1+1)
	rep(i2, N2+1){
		if(i1 == 0 || i2 == 0) dp[i1][i2] = 0;
		else{
			if(s1[i1-1] == s2[i2-1]) dp[i1][i2] = dp[i1-1][i2-1] + 1;
			else dp[i1][i2] = max(dp[i1-1][i2], dp[i1][i2-1]);
		}
	}
	return dp[N1][N2];
}

int main() {
	cin >> NN;
	rep(i, NN){
		cin >> s1;
		cin >> s2;
		cout << run() << endl;
	}
}