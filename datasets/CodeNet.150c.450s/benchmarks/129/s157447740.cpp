#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)

int main(void) {
    int r,c,t;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c));
    for(auto& v1 : v) for(auto& d : v1) cin >> d;
    REP(i,r) {
        t = 0;
        REP(j,c) {
            t += v[i][j];
            cout << v[i][j] << " ";
        }
        cout << t << endl;
    }
    REP(i,c) {
        t = 0;
        REP(j,r) {
            t += v[j][i];
        }
        cout << t << " ";
    }
    t = 0;
    REP(i,r) {
        REP(j,c) {
            t += v[i][j];
        }
    }
    cout << t << endl;
    return 0;
}