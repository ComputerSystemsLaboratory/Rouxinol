#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
const int N = 1e6 + 5;
ll a[N];
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        if (fopen("BONUS.INP", "r")){
                freopen("BONUS.INP", "r", stdin);
                freopen("BONUS.OUT", "w", stdout);
        }
        ll t;
        cin >> t;
        while (t--){
                ll n;
                cin >> n;
                for (int i = 0; i < n; i++){
                        cin >> a[i];
                }
                string s;
                cin >> s;
                vector<ll> now;
                bool flag = true;
                for (int i = n - 1; i >= 0; i--){
                        for (auto j : now) a[i] = min(a[i], a[i] ^ j);
                        now.push_back(a[i]);
                        if (s[i] == '1' && a[i]){
                                flag = false;
                                break;
                        }
                }
                if (flag) cout << 0 << endl;
                else cout << 1 << endl;
        }
}
