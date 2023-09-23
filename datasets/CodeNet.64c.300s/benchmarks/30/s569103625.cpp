#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define erep(i,a,b) for(int i=a;i<=(int)(b);++i)
#define per(i,a,b) for(int i=(b);i>(a);--i)
#define eper(i,a,b) for(int i=((int)(a));i>=b;--i)
#define pb push_back
#define mp make_pair
#define INF (1<<31)-1
#define MOD 1000000007
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef pair<int,int> Pii;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a, b)*b;}

int n;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
    int c[] = {500, 100, 50, 10, 5, 1};
    while (true) {
        cin >> n;
        if (n == 0) break;
        n = 1000 - n;
        int ans = 0;
        rep(i, 0, 6) {
            ans += n/c[i];
            n -= n/c[i] * c[i];
        }
        cout << ans << endl;
    }
    return 0;
}
