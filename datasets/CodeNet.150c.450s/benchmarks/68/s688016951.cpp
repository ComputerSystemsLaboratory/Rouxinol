#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
//const ll mod = 1000000007;

int main() {
    //cout.precision(10);
    int a[1005];
    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int i = 0;
        int j = 0;
        int now = 1e9;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j < i; j++) {
                now = min(now, abs(a[i] - a[j]));
            }
        }
        cout << now << endl;
    }
    return 0;
}
