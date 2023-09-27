#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int, int>;
using iii = pair<int, ii>;
#define vt vector
#define pq priority_queue
#define pb push_back
#define mp make_pair
#define fi first
#define se second
// #define multicase
const int MOD = 1e9 + 7;
const int INF = 2e9;
const int N = 1e4 + 5;

map<string, int> freq;

void solve() {
    int T = 1;
  #ifdef multicase
    cin >> T;
  #endif
    for(int tc = 1, q; tc <= T; tc++) {
        cin >> q;
        while(q--) {
            string s; cin >> s;
            freq[s]++;
        }
        cout << "AC x " << freq["AC"] << "\nWA x " << freq["WA"] << "\n";
        cout << "TLE x " << freq["TLE"] << "\nRE x " << freq["RE"] << "\n";
    }
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
    
}