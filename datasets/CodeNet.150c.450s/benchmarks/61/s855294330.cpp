#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n,a,b,c,x;
    while(cin >> n >> a >> b >> c >> x)
    {
        if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;

        vector<int> y(n);
        rep(i,n) cin >> y[i];

        int ans = 0;
        bool flag = true;
        rep(i,n) {
            while(y[i] != x) {
                x = a*x + b;
                x %= c;
                ans++;

                if(ans > 10000) {
                    flag = false;
                    break;
                }
            }

            if(i != n-1) {
                x = a*x + b;
                x %= c;
                ans++;
            }
        }

        if(flag) cout << ans << endl;
        else cout << -1 << endl;
    }

    return 0;
}