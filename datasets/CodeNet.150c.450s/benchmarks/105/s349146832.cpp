#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ii pair <int, int>
#define app push_back
#define all(a) a.begin(), a.end()
#define bp __builtin_popcountll
#define ll long long
#define mp make_pair
#define f first
#define s second
#define Time (double)clock()/CLOCKS_PER_SEC

const int LG = 60;
struct Bazis {
  
int a[LG];

Bazis() {
    memset(a, 0, sizeof a);
}

void add(int x) {
    for (int i = LG - 1; i >= 0; --i) {
        if ((x >> i) & 1) {
            if (!a[i]) {
                a[i] = x;
                break;
            }   
            x ^= a[i];
        }
    }   
}   
bool check(int x) {
    for (int i = LG - 1; i >= 0; --i) {
        if ((x >> i) & 1) {
            if (!a[i]) {
                return 0;
                break;
            }   
            x ^= a[i];
        }
    }   
    return x == 0;
}   

};  

void solve() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];
    string s;
    cin >> s;

    Bazis b;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '0') {
            b.add(a[i]);
        }   
        if (s[i] == '1') {
            if (!b.check(a[i])) {
                cout << 1 << endl;
                return;
            }   
        }
    }   
    cout << 0 << endl;
}

signed main() {
    #ifdef HOME
    freopen("input.txt", "r", stdin);
    #else
    #define endl '\n'
    ios_base::sync_with_stdio(0); cin.tie(0);
    #endif
    int t;
    cin >> t;
    while (t--) 
        solve();
}