#include <algorithm>
#include <iostream>
#include <string>
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
    while(1) {
        int n = 0,m = 0;
        int h[1550] = {}, w[1550] = {};
        int l[1500000] = {};
        cin >> n >> m;
        if(n == 0) {
            break;
        }
        int t = 0;
        FOR(i,1,n+1) {
            cin >> h[i];
            t += h[i];
            h[i] = t;
        }
        int s = 0;
        FOR(i,1,m+1) {
            cin >> w[i];
            s += w[i];
            w[i] = s;
        }
        sort(h, &h[n]);
        sort(w, &w[m]);
        ull sum = 0;
        rep(i,n) {
            FOR(j,i+1,n+1) {
                l[h[j]-h[i]] += 1;
            }
        }
        rep(i,m) {
            FOR(j,i+1,m+1) {
                sum += (ull)l[w[j]-w[i]]; 
            }
        }
        cout << sum << endl;
    }        
    return 0;
}