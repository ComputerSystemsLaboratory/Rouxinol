#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void matrixprod(vector<vector<int> > vv, vector<int> w) {
    vector<int> ans;
    int n = vv.size();
    int m = w.size();
    REP(i,n) {
        int k = 0;
        REP(j,m) {
            k += vv[i][j] * w[j];
        }
        ans.push_back(k);
    }
    REP(i,n) {
        cout << ans[i] << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > vv;
    REP(i,n) {
        vector<int> v;
        REP(j,m) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        vv.push_back(v);
    }
    vector<int> w;
    REP(i,m) {
        int j;
        cin >> j;
        w.push_back(j);
    }
    
    matrixprod(vv, w);
    return 0;
}