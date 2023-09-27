#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int main() {
    int n;
    while(cin >> n, n) {
        vector<int> v;
        PUSH(n,v);
        long maxv = -1e9;
        for(int i = 1; i <= n; i++) {
            vector<long> w;
            long j = 0;
            REP(k,i) j += v[k];
            w.push_back(j);
            REP(k,n-i) {
                j += -v[k] + v[i+k];
                w.push_back(j);
            }
            sort(w.begin(), w.end());
            maxv = max(maxv, w[w.size()-1]);
        }
        cout << maxv << endl;
    }
    return 0;
}