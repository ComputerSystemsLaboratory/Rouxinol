#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;

const int MAX_N = 1005;
int dp[MAX_N][MAX_N];

int minimum(int a, int b, int c){
    return min(min(a,b),c);
}

int levenshteinDistance(string a, string b){
    rep(i,a.size() + 1) dp[i][0] = i;
    rep(i,b.size() + 1) dp[0][i] = i;

    range(i,1,a.size() + 1){
        range(j,1,b.size() + 1){
            int cost = a[i - 1] == b[j - 1] ? 0 : 1;
            dp[i][j] = minimum(dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + cost);
        }
    }
    return dp[a.size()][b.size()];
}

int main(){
    string a, b;
    cin >> a >> b;

    cout << levenshteinDistance(a,b) << endl;
}