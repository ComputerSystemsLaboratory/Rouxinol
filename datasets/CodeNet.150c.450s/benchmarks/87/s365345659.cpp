#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define eb emplace_back
#define all(v) begin(v), end(v)
#define debug(x) cerr<< #x <<": "<<x<<endl
#define debug2(x,y) cerr<< #x <<": "<< x <<", "<< #y <<": "<< y <<endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector< T > >;
typedef deque<int> di;
typedef deque<deque<int> > ddi;

// cout vector
template<typename T> ostream& operator<<(ostream& s, const vector<T>& v) {
    int len = v.size();
    for (int i = 0; i < len; ++i) {
        s << v[i]; if (i < len - 1) s << "\t";
    }
    return s;
}

// cout 2-dimentional vector
template<typename T> ostream& operator<<(ostream& s, const vector< vector<T> >& vv) {
    int len = vv.size();
    for (int i = 0; i < len; ++i) {
        s << vv[i] << endl;
    }
    return s;
}

int main() {
    while (true) {
        int h;
        cin >> h;
        if ( h == 0 ) { break; }
        vvi b(5, vi(h));
        for (int i = h-1; i >= 0; --i) {
            rep (j, 5) {
                cin >> b[j][i];
            }
        }

        int point = 0;
        while (true) {
            vvi st;
            rep (i, h) {
                map<int, int> mp;
                rep (j, 5) {
                    mp[b[j][i]] += 1;
                }
                int tmpmax = -1;
                FOR (k, 1, 10) {
                    tmpmax = max(tmpmax, mp[k]);
                }
                if (tmpmax < 3) { continue; }
                if (tmpmax == 5 ) {
                    st.pb({i, 0, 5});
                    continue;
                } else if (tmpmax == 4) {
                    if (b[0][i] == b[3][i] && b[3][i] != b[4][i]) {
                        st.pb({i, 0, 4});
                        continue;
                    } else if (b[1][i] == b[4][i] && b[1][i] != b[0][i]) {
                        st.pb({i, 1, 4});
                        continue;
                    }
                }
                if (b[0][i] == b[1][i] && b[1][i] == b[2][i]) {
                    st.pb({i, 0, 3});
                } else if (b[1][i] == b[2][i] && b[2][i] == b[3][i]) {
                    st.pb({i, 1, 3});
                } else if (b[2][i] == b[3][i] && b[3][i] == b[4][i]) {
                    st.pb({i, 2, 3});
                }
            }
            if ( st.empty() ) { break; }
            for (int itr = st.size()-1; itr >= 0; --itr) {
                auto elm = st[itr];
                point += b[elm[1]][elm[0]] * elm[2];
                rep (i, elm[2]) {
                    b[elm[1]+i].erase(begin(b[elm[1]+i])+elm[0]);
                }
            }
            rep (i, 5) {
                b[i].resize(h);
            }
        }
        printf("%d\n", point);
    }
    return 0;
}