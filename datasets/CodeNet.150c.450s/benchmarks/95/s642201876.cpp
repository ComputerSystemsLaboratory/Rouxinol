#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef pair<int, int> P;

signed main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        int ans = 0;
        int now = 0;
        int pre = 0;
        rep(i, 0, n){
            string s;
            cin >> s;
            if(s == "lu") now += 2;
            if(s == "ru") now += 1;
            if(s == "ld") now -= 2;
            if(s == "rd") now -= 1;
            if(now == 3 && pre == 0){
                ans++;
                pre = 1;
            }else if(now == 0 && pre == 1){
                ans++;
                pre = 0;
            }
        }
        cout << ans << endl;
    }
}