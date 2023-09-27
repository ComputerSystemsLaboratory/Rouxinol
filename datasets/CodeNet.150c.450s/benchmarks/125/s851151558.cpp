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

short d[101] = {}, v[101] = {};
bool  p[101][101] = {};
short t = 0;
int n;  

void dfs(int i) {
    if(d[i] != 0) return;
    d[i] = ++t;
    rep(j,n+1) {
        if(p[i][j] == 1 & d[j] == 0) {
            dfs(j);     
        }
    }
    v[i] = ++t;
}

int main() {
    cin >> n;
    rep(i,n) {
        short u,k;
        cin >> u >>k; 
        rep(j,k) {
            int tmp;
            cin >> tmp;
            p[u][tmp] = 1; 
        }
    }
    FOR(i,1,n+1) {
        dfs(i);
    }
    FOR(i,1,n+1) {
        cout << i << " " << d[i] << " " << v[i] << endl;
    }
	return 0;
}