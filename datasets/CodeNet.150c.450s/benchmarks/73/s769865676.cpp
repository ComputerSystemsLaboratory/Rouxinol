#include <iostream>
#include <cmath>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, q; cin >> n >> q;
    int sum;
    int a[100000] = {};
    int com, s, t;

    REP(i, q) {
        cin >> com >> s >> t;
        if (com) {
            sum = 0;
            for (int i = s; i <= t; i++) {
                sum += a[i];
            }
            cout << sum << endl;
        } else {
            a[s] += t;
        }
    }

    return 0;
}
