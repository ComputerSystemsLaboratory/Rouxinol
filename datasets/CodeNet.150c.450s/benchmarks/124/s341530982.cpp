#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cmath>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n)-1; i >= k; i--)

#define debug(x) cerr<<#x<<": "<<x<<'\n'

#define fi first
#define se second

#define vi vector<int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;

const int inf = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

struct Edge{
    int to;
    int cost;
};
vector<vector<Edge> > G(110);
int d[110] = {};
int main(){
    int n;
    cin >> n;
    rep(i,n){
        int t,m;
        cin >> t >> m;
        rep(j,m){
            int a,b;
            cin >> a >> b;
            Edge ee;
            ee.to = a;ee.cost = b;
            G[t].push_back(ee);
        }
    }

    rep(i,n) d[i] = 900010000;
    d[0] = 0;
    while(true){
        bool update = false;
        rep(i,n){
            for(const auto& e: G[i]){
                if(d[i] + e.cost < d[e.to]){
                    d[e.to] = d[i]+e.cost;
                    update = true;
                }
            }
        }
        if(!update) break;
    }

    rep(i,n){
        cout << i << " " << d[i] << endl;
    }

    return 0;
}

