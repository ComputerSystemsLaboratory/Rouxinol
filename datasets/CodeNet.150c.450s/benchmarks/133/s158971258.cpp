#include <bits/stdc++.h>
using namespace std;

typedef long lint;
typedef long long llint;
typedef pair<int, int> pint;
typedef pair<long long, long long> pllint;

// static const int MAX = 1e6;
// static const int NIL = -1;
// static const llint INF = 1<<21;
// static const llint MOD = 1e9 + 7;

bool compPair(const pint& arg1, const pint& arg2) { return arg1.first > arg2.first; }
template<class T> void chmax(T& a, T b) { if (a < b) { a = b; } }
template<class T> void chmin(T& a, T b) { if (a > b) { a = b; } }

int main(void) {
    int d;
    cin >> d;
    
    vector<int> c(26);
    vector<vector<int>> s(d, vector<int>(26, 0));
    vector<int> t(d);
    vector<int> l(26);
    for(int ic=0;ic<26;ic++) {
        cin >> c.at(ic);
    }
    for(int id=0;id<d;id++) {
        for(int iw=0;iw<26;iw++) {
            cin >> s.at(id).at(iw);
        }
    }
    for(int id=0;id<d;id++) {
        cin >> t.at(id); t.at(id)--;
    }

    int v = 0;
    for(int id=0;id<d;id++) {
        v += s.at(id).at(t.at(id));
        l.at(t.at(id)) = id + 1;
        for(int il=0;il<26;il++) {
            v -= c.at(il)*(id + 1 - l.at(il));
        }
        cout << v << endl;
    }
    return 0;
}
