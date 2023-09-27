#include <bits/stdc++.h>
using namespace std ;
 
#define reMin(a, b) a = min(a, b)
#define reMax(a, b) a = max(a, b)
 
#define lint long long
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define SET(x, val) memset(x, val, sizeof(x))
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
typedef vector < int > vi ;
typedef pair < int, int > pii ;
 
const int N = 1e6 + 2 ;
const int MOD = 1e9 + 7 ;
const lint INF = 1e18 ;
const int LN = 63 ;

int n ; 
lint a[N] ;
string s ;
lint basis[LN];

bool inSpan(lint x) {
    for(int i = LN - 1; i >= 0; i--) {
        if(x & (1LL << i)) {
            if(basis[i])
                x ^= basis[i] ;
        }
    }
    return (x == 0LL) ;
}

void insert(lint x) {
    for(int i = LN - 1; i >= 0; i--) {
        if(x & (1LL << i)) {
            if(!basis[i]) {
                basis[i] =x ;
                return ;
            }
            x ^= basis[i] ; 
        }
    }
}

int main() {
    fastio;
    int t ; cin >> t ;
    while(t--) {
        cin >> n ; SET(basis, 0);
        for(int i = 0; i < n; i++) cin >> a[i] ;
        cin >> s ;
        if(s[n-1] == '1') {
            cout << 1 << endl ;
            continue ;
        }
        int oneWins = 0 ; 
        for(int i = n-1; i >= 0; i--) {
            int current = s[i] - '0' ; 
            if(current == 0) insert(a[i]);
            else {
                if(!inSpan(a[i])) oneWins = 1 ;
            }
        }
        if(oneWins) cout << 1 << endl;
        else cout << 0 << endl ; 
    }
}