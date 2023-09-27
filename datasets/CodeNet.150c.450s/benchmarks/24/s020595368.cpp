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
        int n;
        ull m;
        i_i d[10050];
        cin >> n >> m;
        if(n == 0) {
            break;
        }
        int sum = 0;
        rep(i,n) {
            cin >> d[i].first >> d[i].second;
            sum += d[i].first*d[i].second;
        }
        sort(begin(d),&d[n], [](i_i p, i_i q) { return p.second > q.second; });
        for(int i = 0; m > 0; i++) {
            if(i == n) {
                break;
            }
            if(m > (ull)d[i].first) {
                sum-=d[i].first*d[i].second;
                m-=(ull)d[i].first;
            } else {
               sum-=(ull)d[i].second *m;
               m=0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}