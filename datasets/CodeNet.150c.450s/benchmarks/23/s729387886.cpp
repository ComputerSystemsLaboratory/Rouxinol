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

int dp[100];
int N;

int main() {
	cin >> N;
	rep(i, N+1){
		if(i == 0 || i == 1) dp[i] = 1;
		else dp[i] = dp[i-2] + dp[i-1];
	}
	cout << dp[N] << endl;
}