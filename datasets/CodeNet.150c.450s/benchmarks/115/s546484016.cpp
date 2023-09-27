#include <iostream>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

string s[2];
int dp[1001][1001];

int lcs(int x,int y) {
    if(x < 0 || y < 0) return 0;
    if(x >= s[0].size() || y >= s[1].size()) return 0;
    if(dp[x][y] == -1) {
        dp[x][y] = max(lcs(x+1,y),dp[x][y]);
        dp[x][y] = max(lcs(x,y+1),dp[x][y]);
        if(s[0][x] == s[1][y]) dp[x][y] = max(lcs(x+1,y+1) + 1,dp[x][y]);
    }
    return dp[x][y];
}

int main() {
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> s[0] >> s[1];
        int res = -1;
        for(int j = 0;j < 1001 * 1001;j++)(reinterpret_cast<int*>(dp))[j] = -1;
        for(int j = 0;j < 1001 * 1001;j++)res = max(res,(reinterpret_cast<int*>(dp))[j]);
        cout << lcs(0,0) << endl;
    }
}
