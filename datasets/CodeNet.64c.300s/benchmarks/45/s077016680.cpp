//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n, m, p;
    while(cin>>n>>m>>p, n) {
        int t = 0;
        int sum = 0;
        for(int i=1; i<=n; ++i) {
            int a;
            cin >> a;
            sum += a*100;
            if(i==m) t = a;
        }

        sum = sum - sum*p/100;
        if(t==0) cout << 0 << endl;
        else cout << sum/t << endl;
    }
    return 0;
}