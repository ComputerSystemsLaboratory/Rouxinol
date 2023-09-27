#include <bits/stdc++.h>
 
using namespace std;
 
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
 
#define MOO(i, a, b) for(int i=a; i<b; i++)
#define M00(i, a) for(int i=0; i<a; i++)
#define MOOd(i,a,b) for(int i = (b)-1; i >= a; i--)
#define M00d(i,a) for(int i = (a)-1; i>=0; i--)
 
#define FAST ios::sync_with_stdio(0); cin.tie(0);
#define finish(x) return cout << x << '\n', 0;
#define dbg(x) cerr << ">>> " << #x << " = " << x << "\n";
#define _ << " _ " <<
 
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<ld,ld> pd;
typedef complex<ld> cd;

const int MAX_N = 205;
const int D = 64;
ll basis[D];
ll arr[MAX_N];
 
int main() { FAST
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        M00(i, n) cin >> arr[i];
        string s; cin >> s;
        M00(i, D) basis[i] = 0;
        bool good = 1;
        M00d(i, n) {
            if(!good) break;
            if(s[i] == '0') {
                ll val = arr[i];
                while(val != 0) {
                    int idx = __builtin_clzll(val);
                    if(basis[idx] == 0) {
                        basis[idx] = val;
                        break;
                    }
                    val ^= basis[idx];
                }
            } else {
                ll val = arr[i];
                while(val != 0) {
                    int idx = __builtin_clzll(val);
                    if(basis[idx] == 0) {
                        good = 0;
                        break;
                    }
                    val ^= basis[idx];
                }
            }
        }
        cout << (good ? "0" : "1") << "\n";
    }
}

