#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define PRINT(x) cout<<(x)<<endl
#define INF 1000000000000 // 10^12
#define MOD 1000000007 // 10^9+7
#define PB push_back
#define MP make_pair



int main() {
    int n; cin >> n;
    int k = 2;
    vector<int> factor(100000, 0);
    int m = n;
    while (k * k <= n) {
        if (m % k == 0) {
            factor[k]++;
            m /= k;
        }
        else k++;
    }
    printf("%d:", n);
    REP(i, factor.size()) {
        REP(j, factor[i]) printf(" %d", i);
    }
    if (m != 1) printf(" %d", m);
    printf("\n");
    return 0;
}
