#include <bits/stdc++.h>
using namespace std;
#define LL long int
#define ULL unsigned long int
#define LD long double

LL MOD = 1000000007;

int main(){
    ULL sum = 0;
    ULL n;
    cin >> n;
    ULL d[100001] = {};
    for(ULL i = 0; i < n; ++i){
        ULL a;
        cin >> a;
        sum += a;
        d[a]++;
    }

    ULL q;
    cin >> q;
    ULL b,c;
    vector<ULL> ans(q);

    for(ULL i = 0; i < q; ++i){
        cin >> b >> c;
        sum -= d[b] * b;
        sum += d[b] * c;
        d[c] += d[b];
        d[b] = 0;
        ans[i] = sum;
    }

    for(ULL i = 0; i < q; ++i) cout << ans[i] << endl;

    return 0;
}