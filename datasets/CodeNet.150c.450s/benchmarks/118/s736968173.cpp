#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
int main() {
    int n;
    cin >> n;
    int y, m, d;
    while(n--) {
        cin >> y >> m >> d;
        int ans = 0;
        m--; d--;
        while(y != 1000 || m != 0 || d != 0) {
            ans++;
            d++;
            int last;
            if(y % 3 == 0) {
                last = 20;
            } else {
                last = (m % 2 == 0 ? 20 : 19);
            }
            if(last == d) {
                d = 0;
                m ++;
            } 
            if(m == 10) {
                y++;
                m = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}