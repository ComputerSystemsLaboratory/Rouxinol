#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
 
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
 
const int INF=1<<29;
const double EPS=1e-9;
 
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};


int main(int argc, char const *argv[]) {
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		string s1;
		string s2;
		cin >> s1 >> s2;
		int dp[1000][1000] = {{0}};
		if (s1[0] == s2[0]) {
			dp[0][0] = 1;
		}
		for (int i = 1; i < s1.size(); ++i) {
			if (s1[i] == s2[0]) {
				dp[i][0] = 1;
			} else {
				dp[i][0] = dp[i - 1][0];
			}
		}
		for (int i = 1; i < s2.size(); ++i) {
			if (s1[0] == s2[i]) {
				dp[0][i] = 1;
			} else {
				dp[0][i] = dp[0][i - 1];
			}
		}
		for (int i = 1; i < s1.size(); ++i) {
			for (int j = 1; j < s2.size(); ++j) {
				if (s1[i] == s2[j]) {
					dp[i][j] = dp[i - 1][j - 1] + 1;
				} else {
					dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		cout << dp[s1.size() - 1][s2.size() - 1] << endl;
	}	

	return 0;
}