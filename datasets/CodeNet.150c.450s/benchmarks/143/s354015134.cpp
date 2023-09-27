#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define rep(i, start, n) for (int i = (int)(start); i < (int)(n); ++i)
#define all(a) a.begin(), a.end()
#define mp(a, b) make_pair(a, b)

int INF = 100100100;
const int MAX = 110000;
const int MOD = 1000000007;

int main(){
    int N, Q;
    cin >> N;
    ll sum = 0;
    vector<int> a(MAX, 0);
    rep(i, 0, N){
        int num;
        cin >> num;
        sum += num;
        a[num] += 1;
    }
    cin >> Q;
    rep(i, 0, Q){
        int c, d;
        cin >> c >> d;
        sum += (d-c)*a[c];
        a[d] += a[c];
        a[c] = 0;
        cout << sum << endl;
    }
}