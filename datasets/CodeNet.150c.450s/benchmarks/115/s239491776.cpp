#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
typedef long long ll;

string LongestCommonSubsequence(string s1, string s2) {
    int N = (int) s1.size();
    int M = (int) s2.size();
    vector < vector < int > > dp(N + 1, vector < int > (M + 1, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (s1[i] == s2[j]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            } else {
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }
    string ret;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if(dp[i + 1][j + 1] == ret.size() + 1){
                ret = ret + s2[j];
            }
        }
    }
    return ret;
}

int main() {

    int N; cin >> N;

    REP(i,N) {
        string a,b; cin >> a >> b;
        cout << LongestCommonSubsequence(a,b).size() << endl;
    }

    return 0;
}