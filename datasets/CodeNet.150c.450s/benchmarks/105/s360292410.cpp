#include <bits/stdc++.h>
 
#define int long long
 
#define pii pair<int, int>
 
#define x1 x1228
#define y1 y1228
 
#define left left228
#define right right228
 
#define pb push_back
#define eb emplace_back
 
#define mp make_pair                                                                
                                                                                                                                        
#define ff first                                                                  
#define ss second   
 
#define all(x) x.begin(), x.end()
#define debug(x) cout << #x << ": " << x << endl; 
#define TIME (ld)clock()/CLOCKS_PER_SEC
 
using namespace std;
typedef long long ll; 
typedef long double ld; 
                                                                                                   
const int maxn = 3e5 + 7, mod = 1e9 + 7, MAXN = 1e6 + 7;
const double eps = 1e-9;
const ll INF = 1e18, inf = 1e15;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int n;
int a[maxn];
string s; 
 
void add(vector<int> &base, int x) {
    for (int i = 59; i >= 0; --i) {
        if (((x >> i) & 1ll) == 0) continue; 
        if (base[i] == -1) {
            base[i] = x; 
            break; 
        } 
        x ^= base[i]; 
    }
}

vector<int> build(vector<int> value) {
    vector<int> base(60, -1);
    for (auto v : value) {
        add(base, v); 
    }        
    return base; 
}

bool check(vector<int> &base, int x) {
    for (int i = 59; i >= 0; --i) {
        if (((x >> i) & 1ll) == 0) continue; 
        if (base[i] == -1) return false;  
        x ^= base[i]; 
    }
    return true; 
}

void solve() {
    cin >> n; 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    cin >> s; 
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') continue; 
        vector<int> value; 
        for (int j = i + 1; j < n; ++j) if (s[j] == '0') value.pb(a[j]); 
        vector<int> base = build(value); 
        if (!check(base, a[i])) {
            cout << "1\n"; 
            return; 
        }
    }                             
    cout << "0\n"; 
}                                   
   
signed main() {
#ifdef LOCAL
    freopen("TASK.in", "r", stdin);
    freopen("TASK.out", "w", stdout);
#else 
    
#endif // LOCAL
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20); 
    cout << fixed; 
    int t = 1; cin >> t;  
    for (int i = 0; i < t; ++i) {              
        solve();
    }
    return 0;
}  