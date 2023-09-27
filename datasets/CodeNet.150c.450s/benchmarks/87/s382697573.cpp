#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define pi M_PI
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int h, w = 5;

int score(vector<queue<int> > vq){
    vector<queue<int> > vq_next(w);
    int res = 0;
    REP(i,h){
        VI a(w+1);
        REP(j,w){
            if (!vq[j].empty()){
                a[j] = vq[j].front();
                vq[j].pop();
            }
        }
        REP(j,w){
            int k = 0;
            while (a[j+k] == a[j] && j+k < w) k++;
            if (k >= 3){
                res += k * a[j];
                REP(l,k) a[j+l] = 0;
            }
        }
        REP(j,w){
            if (a[j] != 0) vq_next[j].push(a[j]);
        }
    }
    if (res == 0) return res;
    else return res + score(vq_next);
}

int main() {
    while (cin >> h && h){
        vector<queue<int> > vq(w);
        VVI a(h, VI(w));
        REP(i,h) REP(j,w) cin >> a[i][j];
        REP(j,w) REP(i,h) vq[j].push(a[h-1-i][j]);
        cout << score(vq) << endl;
    }
    return 0;
}