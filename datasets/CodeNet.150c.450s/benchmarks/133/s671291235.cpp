#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define FOR(i,s,n) for(int i = (s); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) for(int i = (n); i >= 0; i--)
#define ALL(n) (n).begin(), (n).end()
#define RALL(n) (n).rbegin(), (n).rend()
#define ATYN(n) cout << ( (n) ? "Yes":"No") << '\n';
#define CFYN(n) cout << ( (n) ? "YES":"NO") << '\n';
#define OUT(n) cout << (n) << '\n';
using ll = long long;
using ull = unsigned long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

int main(void)
{
    IOS
    const int A = 26;
    int D; cin >> D;
    vector<int> c(A);
    REP(i,A) cin >> c[i];
    vector<vector<int>> s(D,vector<int>(A));
    REP(i,D) REP(j,A) cin >> s[i][j];

    vector<int> last(A,-1);
    int score = 0;
    REP(i,D) {
        int a; cin >> a;
        a--;
        score += s[i][a];
        last[a] = i;
        REP(j,A) {
            score -= c[j]* (i-last[j]);
        }
        OUT(score);
    }
    
    return 0;
}