#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <limits>
#include <map>
#include <queue>
#include <stack>
#include <vector>

#define FOR(i,k,n) for(int (i) = (k); (i) < (n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define all(v) begin(v), end(v)
#define debug(x) cerr << #x << ": " << x << endl
#define debug2(x,y) cerr << #x << ": " << x << ", " << #y << ": " << y << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
template<class T> using vv=vector<vector<T>>;
typedef deque<int> di;
typedef deque<deque<int>> ddi;


int main() {
    int n;
    bool g[101][101] = {};
    cin >> n;
    rep(i,n) {
        int u,k;
        cin  >> u >> k;
        rep(j,k) {
            int tmp;
            cin >> tmp;
            g[u][tmp] = 1;
        }
    }
    FOR(i,1,n+1) {
        FOR(j,1,n+1) {
            cout << g[i][j];
            if(j != n) cout << " "; 
        }
        cout << endl;
    }
	return 0;
}