#include <bits/stdc++.h>
using namespace std;

using lint = long long int;
using pint = pair<int, int>;
using plint = pair<lint, lint>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((lint)(x).size())
#define POW2(n) (1LL << (n))
#define FOR(i, begin, end) for (int i = (begin), i##_end_ = (end); i < i##_end_; i++)
#define IFOR(i, begin, end) for (int i = (end)-1, i##_begin_ = (begin); i >= i##_begin_; i--)
#define REP(i, n) FOR(i, 0, n)
#define IREP(i, n) IFOR(i, 0, n)

int main()
{
    int D;cin >> D;
    vector<int> c(26);
    vector<vector<int>> s(D, vector<int>(26));
    REP(i, 26)cin >> c[i];
    REP(i, D)REP(j,26)cin >> s[i][j];
    lint sat = 0;

    vector<int> las(26,-1),con(D);

    vector<int> t(D);
    REP(i, D)
        cin >> t[i];


    REP(i,D){
        int tt = t[i] - 1;
        las[tt] = i;
        sat += s[i][tt];
        REP(j,26)sat -= c[j] * (i - las[j]);
        cout << sat << "\n";
    }
    return 0;
}