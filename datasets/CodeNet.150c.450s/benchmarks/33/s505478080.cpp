#include <bits/stdc++.h>
 
#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int tax(int a, int t) {
    return static_cast<int> (a*(100+t)/100);
}

int main()
{
    int x, y, s, ans;
    
    while (cin >> x >> y >> s) {
        if (x==0) break;

        ans = 0;
        for (int i = 1; i < s; i++) {
            for (int j = i; j < s; j++) {
                if (tax(i,x)+tax(j,x) == s) {
                    ans = max(ans, tax(i,y)+tax(j,y));
                }
            }
        }
        cout << ans << endl;
    }
}