#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <numeric>
#include <sstream>
#include <queue>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

int getLevenshteinDistance(string s1, string s2) {
    int dp[s1.size()+1][s2.size()+1];
    // dp[i+1][j+1] = Levenshtein Distance between s1.substr(0,i) and s2.substr(0,j)
    REP(i,s1.size()+1) dp[i][0] = i;
    REP(i,s2.size()+1) dp[0][i] = i;
    FOR(i,1,s1.size()+1) {
        FOR(j,1,s2.size()+1) {
            dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + 1;
            dp[i][j] = min(dp[i][j], dp[i-1][j-1] + (s1[i-1]!=s2[j-1]));
        }
    }
    return dp[s1.size()][s2.size()];
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << getLevenshteinDistance(s1, s2) << endl;
    return 0;
}