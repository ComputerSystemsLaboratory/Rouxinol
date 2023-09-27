#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    int a[5];
    rep(i, 0, 5) cin >> a[i];
    sort(a, a + 5);
    repb(i, 4, 0){
        if(i != 4) cout << " ";
        cout << a[i];
    }
    cout << endl;
}