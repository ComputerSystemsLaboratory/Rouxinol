#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()

int main() {
    int n;
    cin >> n;

    REP(i, n) {
        vector<int> v(3);
        REP(j, 3) {
            cin >> v[j];
        }
        sort(ALL(v));
        if (pow(v[0],2)+pow(v[1],2)==pow(v[2],2)) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}