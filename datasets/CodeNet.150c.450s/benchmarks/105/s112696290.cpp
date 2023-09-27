#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <sstream>
#include <string>
#define _repargs(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _repargs(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define mod 1000000007
#define inf 2000000007
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
template <typename T>
inline void output(T a, int p = 0) {
    if(p) cout << fixed << setprecision(p)  << a << "\n";
    else cout << a << "\n";
}
// end of template

template <typename T> inline void voutput(T &v){
    rep(i, v.size()){
        if (i) cout << " " << v[i];
        else cout << v[i];
    }
    cout << endl;
}

int MAX_B = 64;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    // source code
    int T;
    cin >> T;
    rep(t, T) {
        int N;
        cin >> N;
        vector<ll> A(N);
        rep(i, N) cin >> A[i];
        string s;
        cin >> s;
        vector<ll> B(MAX_B);
        bool ans = true;
        for(int i = N - 1; i >= 0; i--) {
            if(s[i] == '0') {
                for(int j = MAX_B - 1; j >= 0; j--) {
                    if((A[i] >> j) & 1) {
                        if(B[j] == 0) {
                            B[j] = A[i];
                            break;
                        }
                        else {
                            A[i] ^= B[j];
                        }
                    }
                }
            }
            else {
                for(int j = MAX_B - 1; j >= 0; j--) {
                    if((A[i] >> j) & 1) {
                        if(B[j] == 0) {
                            ans = false;
                            break;
                        }
                        else {
                            A[i] ^= B[j];
//                            cout << i << "," << j << "::" << A[i] << "," << B[j] << endl;
                        }
                    }
                }
                if(A[i] != 0) ans = false;
                if(!ans) break;
            }
            
//            cout << i << ":";
//            voutput(B);
        }
        output(ans ? 0 : 1);
    }
    
    return 0;
}
