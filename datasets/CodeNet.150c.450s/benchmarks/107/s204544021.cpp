// 再提出3
// 12/19 AIZU ONLINE ALDS1 10_C
// Longest Common Subsequence
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, a, n) for (ll i = a; i < n; i++)
int edit_distance(const string& s1, const string& s2)
{
    int n= s1.size(), m= s2.size();
    vector<vector<int>> d(n+1, vector<int>(m+1,0));

    REP(i,n+1) d[i][0]= i;
    REP(i,m+1) d[0][i]= i;
    FOR(i,1,n+1){
        FOR(j,1,m+1){
            d[i][j]= min(d[i-1][j-1]+(s1[i-1]==s2[j-1]?0:1), min(d[i-1][j], d[i][j-1]) +1);
        }
    }
    return d[n][m];
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s1,s2;
    cin >> s1 >> s2;
    int ans= edit_distance(s1,s2);
    
    cout << ans << endl;
}

