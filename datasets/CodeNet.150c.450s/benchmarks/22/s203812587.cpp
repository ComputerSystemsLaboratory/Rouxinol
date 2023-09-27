#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = 1000000;
static const int INFTY = (1 << 21);
int D[10000][10000];
int V, E, r;

int main() {
    cin >> V >> E >> r;
    rep(i, V)rep(j, V) D[i][j] = INFTY;
    rep(i, V) D[i][i] = 0;

    rep(i, E){
        int s, t, d;
        cin >> s >> t >> d;
        D[s][t] = d;
    }

    rep(k, V)
    rep(i, V)
    rep(j, V)
    {
        if(D[i][k] != INFTY && D[k][j] != INFTY){
            D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
        }
    }

    bool flag = false;
    rep(i, V){
        if(D[r][i] != INFTY && D[i][i] < 0) flag = true;
    }

    if(flag){
        cout << "NEGATIVE CYCLE" << endl;
    }
    else{
        rep(i, V){
            cout << (D[r][i] == INFTY ? "INF" : to_string(D[r][i])) << endl;
        }
    }
}