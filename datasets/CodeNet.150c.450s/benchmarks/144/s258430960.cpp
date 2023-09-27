#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    vector<vector<int> > m1, m2;
    vector<vector<long> > ans;
    REP(i,n) {
        vector<int> mm;
        REP(j,m) {
            int k;
            cin >> k;
            mm.push_back(k);
        }
        m1.push_back(mm);
    }
    
    REP(i,m) {
        vector<int> mm;
        REP(j,l) {
            int k;
            cin >> k;
            mm.push_back(k);
        }
        m2.push_back(mm);
    }
    
    REP(i,n) {
        vector<long> mm;
        REP(j,l) {
            long s = 0;
            REP(k,m) {
                s += m1[i][k] * m2[k][j];
            }
            mm.push_back(s);
        }
        ans.push_back(mm);
    }
    
    REP(i,n) {
        REP(j,l-1) {
            cout << ans[i][j] << " ";
        }
        cout << ans[i][l-1] << endl;
    }
    return 0;
}