#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; ++i)
#define repf(i, f, l) for(int i = f; i < (int)l; ++i)

#ifdef ONLINE_JUDGE
#define DEBUG false
#else
#define DEBUG true
#endif

#define pb emplace_back
#define lb lower_bound
#define ul unsigned long
#define ull unsigned long long
#define ll long long
#define INF 1000000007
#define MOD 1000000007
#define fs first
#define sd second

#define ALL(c) (c).begin(),(c).end()

#define DBG0(x)    {if(DEBUG){ cout << #x << ": " << x << "\t"; }}
#define DBG(x)     {if(DEBUG){DBG0(x); cout << endl;}}
#define DBG2(x, y) {if(DEBUG){DBG0(x); DBG(y);}}
#define DBG3(x, y, z) {if(DEBUG){DBG0(x); DBG2(y, z);}}
#define DBG4(w, x, y, z) {if(DEBUG){DBG0(w); DBG3(x, y, z);}}

template <class T>
ostream& operator<<(ostream& os, vector<T> xs){ for(T x: xs) os << x << ' '; return os; }
template <class S, class T>
ostream& operator<<(ostream& os, pair<S,T> st){ os << "(" << st.first << "," << st.second <<")"; return os; }

typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<ul> vul;
typedef vector<ull> vull;
typedef vector<bool> vbl;
typedef pair<int, int> pii;

const int PN = 2100000;
vint ps;
vector<bool> eratos;
void init_primes(void){
    eratos = vector<bool>(PN, false);
    ps.clear();
    for(int i = 2; i < PN; ++i){
        if(!eratos[i]){
            ps.pb(i);
            for(int j = i; j < PN; j += i)
                eratos[j] = true;
        }
    }
    return;
}
int main(void){
    init_primes();
    int n;
    while(cin >> n){
        if(n < 2){
            cout << 0 << endl;
            continue;
        }
        int l = 0, r = ps.size() - 1;
        while(r - l > 1){
            int med = (l + r) / 2;
            if(ps[med] <= n) l = med;
            else r = med;
        }
        cout << l + 1 << endl;
    }
    return 0;
}