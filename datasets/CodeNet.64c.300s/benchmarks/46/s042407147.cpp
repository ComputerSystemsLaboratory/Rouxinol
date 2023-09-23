#include <bits/stdc++.h>

using namespace std;

#define min(a, b) ((a) < (b)? (a):(b))
#define max(a, b) ((a) > (b)? (a):(b))
#define rep(i, n) REP((i), 0, (n))
#define REP(i, a, n) for(int i=(a); i<(n); i++)

bool isp[1000000];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(1) {
        int a, d, n; cin >> a >> d >> n;
        if(a == 0 && d == 0 && n == 0) break;

        // eratosthenes
        int N = 1000010;
        memset(isp, true, N);
        isp[1] = false;
        REP(i, 2, sqrt(N)) {
            if(isp[i]) {
                for(int j=0; i*(j+2)<N; j++) {
                    isp[i*(j+2)] = false;
                }
            }
        }
        
        int cnt = 0;
        for(int i=0; ; i++) {
            if(isp[a+i*d]) cnt++;
            if(cnt == n) {
                cout << a+i*d << endl;
                break;
            }
        }
    }
}
