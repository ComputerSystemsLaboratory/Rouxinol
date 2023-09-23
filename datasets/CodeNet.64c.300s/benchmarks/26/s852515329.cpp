#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    long long m,n;
    cin >> m >> n;
    unsigned long long x=1;
    while (true){
        if (n == 0) break;
        if (n&1) x*=m;
        x %= 1000000007;
        m *= m ;
        m %= 1000000007;
        n >>= 1;
    }
    cout << x << endl;
    return 0;
}
