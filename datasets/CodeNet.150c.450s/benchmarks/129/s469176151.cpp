#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int a, b;
    cin >> a >> b;
    int s = 0;
    vector<int> h(b,0);
    REP(i,a) {
        int t = 0;
        REP(j,b) {
            int k;
            cin >> k;
            cout << k << " ";
            t += k;
            h[j] += k;
        }
        cout << t << endl;
        s += t;
    }
    REP(i,b) {
        cout << h[i] << " ";
    }
    cout << s << endl;
    return 0;
}