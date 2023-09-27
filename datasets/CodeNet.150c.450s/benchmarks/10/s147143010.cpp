#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int n;
    cin >> n;
    vector<vector<vector<int> > > vvv;
    REP(i,4) {
        vector<vector<int> > vv;
        REP(j,3) {
            vector<int> v(10,0);
            vv.push_back(v);
        }
        vvv.push_back(vv);
        
    }
    REP(i,n) {
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        vvv[p-1][q-1][r-1] += s;
    }
    
    REP(i,3) {
        REP(j,3) {
            REP(k,10) {
                cout << " " << vvv[i][j][k];
            }
            cout << endl;
        }
        cout << "####################" << endl;
    }
    For(i,3,4) {
        REP(j,3) {
            REP(k,10) {
                cout << " " << vvv[i][j][k];
            }
            cout << endl;
        }
        //cout << "####################" << endl;
    }
    return 0;
}