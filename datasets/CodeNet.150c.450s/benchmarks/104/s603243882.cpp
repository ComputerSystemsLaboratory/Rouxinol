#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    int w, n;
    cin >> w >> n;
    vector<int> a(n), b(n), c(w);
    rep(i, 0, n){
        char s;
        cin >> a[i] >> s >> b[i];
        a[i]--; b[i]--;
    }  
    rep(i, 0, w) c[i] = i;
    rep(i, 0, n){
        swap(c[a[i]], c[b[i]]);
    }
    rep(i, 0, w){
        cout << c[i] + 1 << endl;
    }
}