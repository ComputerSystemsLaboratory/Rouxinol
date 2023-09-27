#include <bits/stdc++.h>
using namespace std;
 
#define sws ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) ((int) x.size())
#define fo(i, n) for( int i = 0; i < n; i++ )

const int INF = 1e9;
const ll INFLL = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;


int main() {sws;

    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    fo(i, n) cin >> a[i];

    for ( int i = k; i < n; i++ ) {
        if ( a[i - k] < a[i] ) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}