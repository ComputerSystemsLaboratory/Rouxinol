#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
const int inf = 1e9;
int main(){
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<vector<int> > lp(n+1, vector<int>(m+1));
    rep(i,n+1)lp[i][0] = i;
    rep(i,m+1)lp[0][i] = i;
    REP(i,1,n+1)REP(j,1,m+1){
        if(s[i-1] == t[j-1])lp[i][j] = min(lp[i-1][j]+1, min(lp[i][j-1]+1, lp[i-1][j-1]));
        else lp[i][j] = min(lp[i-1][j]+1, min(lp[i][j-1]+1, lp[i-1][j-1]+1));
    }
    cout << lp[n][m] << endl;

    //rep(i,n+1)rep(j,m+1)cout << lp[i][j] << ((j < m)?" ":"\n");

    return 0;
}
