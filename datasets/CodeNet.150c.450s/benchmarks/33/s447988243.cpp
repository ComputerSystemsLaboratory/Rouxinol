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
        int x, y, s;
        cin >> x >> y >> s;
        if ( x == 0 ) { break; }
        vi bef(s);
        vi aft(s);
        rep (i, s) {
            bef[i] = (int)((double)i*(100+x)/100);
            aft[i] = (int)((double)i*(100+y)/100);
        }
        int maxaft = INT_MIN;
        FOR (i, 1, s-1) {
            FOR (j, i, s) {
                if ( bef[i]+bef[j] == s ) {
                    maxaft = max(maxaft, aft[i]+aft[j]);
                }
            }
        }
        printf("%d\n", maxaft);
    }

    return 0;
}