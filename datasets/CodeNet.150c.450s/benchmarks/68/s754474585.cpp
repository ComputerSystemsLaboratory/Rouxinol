#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    int n;
    while(cin >> n, n){
        vector<int> a(n);
        rep(i, 0, n) cin >> a[i];
        sort(all(a));
        int MIN = 1e9;
        rep(i, 0, n - 1){
            MIN = min(MIN, a[i + 1] - a[i]);
        }
        cout << MIN << endl;
    }
}