#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

int n;
vector<int> a;

int partition(int p, int r){
    int x = a[r];
    int i = p - 1;
    rep(j, p, r){
        if(a[j] <= x){
            i = i + 1;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    rep(i, 0, n) cin >> a[i];
    int idx = partition(0, n - 1);
    rep(i, 0, n){
        if(i != 0) cout << " ";
        if(i == idx) cout << "[" << a[i] << "]";
        else cout << a[i];
    }
    cout << endl;
}