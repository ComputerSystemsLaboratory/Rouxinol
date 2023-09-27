// テ・ツ淞コテヲツ慊ャテ」ツδ?」ツδウテ」ツδ療」ツδャテ」ツδシテ」ツδ?(テァツクツョテ・ツーツ湘ァツ可?

#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long
template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}
typedef pair<int, int> pii;
typedef long long ll;
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

int X, Y, S;

int calc(int x, int p) {
    return x * (100 + p) / 100;
}

signed main() {
    while(cin >> X >> Y >> S, S) {
        int ans = 0;
        rep(i,1,S) rep(j,1,S) {
            if(calc(i, X) + calc(j, X) != S) continue;
            int temp = calc(i, Y) + calc(j, Y);
            chmax(ans, temp);
        }
        cout << ans << endl;
    }
    return 0;
}