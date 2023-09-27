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
typedef vector< vector<int> > vvi;
template<class T> using vv=vector< vector<T> >;
typedef deque<int> di;
typedef deque< deque<int> > ddi;

int dx[3] = {-1,0,1}, dy[3] = {-1,0,1};

int c[55][55] = {};

void dfs(i_i p) {
    c[p.first][p.second] = 0;
    rep(i,3) {
        rep(j,3) {
            if(c[p.first+dx[i]][p.second+dy[j]] == 1) {
                dfs(make_pair(p.first+dx[i], p.second+dy[j]));
            }
        }
    }
}

int main() {
    int w,h;
    while(cin >> w >> h,w) {
        memset(c,0,sizeof(c));
        FOR(i,1,h+1) {
            FOR(j,1,w+1) {
                cin >> c[i][j];
            }
        }
        int sum = 0;
        FOR(i,1,h+1) {
            FOR(j,1,w+1) {
                if(c[i][j] == 1) {
                    dfs(make_pair(i,j));
                    sum += 1;
                }
            }
        }
        cout << sum << endl;
    }
	return 0;
}