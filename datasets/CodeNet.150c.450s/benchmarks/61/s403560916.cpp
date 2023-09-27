#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define rep(i, n)     rep2(i, 0, n)
#define rep2(i, m, n) for (int i = (m); i < (int)(n); ++i)

int main()
{
    int n, a, b, c, x, y[111];
    
    while (cin >> n, n) {
        cin >> a >> b >> c >> x;
        rep (i, n) cin >> y[i];
        
        int cur = 0, cnt = 0;
        if (y[0] == x) ++cur;
        if (cur == n) { cout << 0 << endl; continue; }
        
        do {
            x = (a * x + b) % c;
            if (x == y[cur]) ++cur;
            ++cnt;
        } while (cur < n && cnt < 10000);
        
        if (cur == n)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
}