#include <bits/stdc++.h>
 
#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    while (1) {
        int x, y, s, ans = 0;
        cin >> x >> y >> s;
        if (!x) break;
        loop (1010, ia) loop (1010, ib) {
            int a = ia+1, b = ib+1;
            if (a * (100 + x) / 100 + b * (100 + x) / 100 != s) continue;
            ans = max(a * (100 + y) / 100 + b * (100 + y) / 100, ans);
        }
        cout << ans << endl;
    }
    return 0;
}