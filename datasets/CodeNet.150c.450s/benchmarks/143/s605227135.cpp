#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <bitset>
#include <queue>
using namespace std;
using ll = long long int;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
const ll INF = 1LL << 60;
ll mod = 1000000007;

vector<int> num(100005,0);

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    rep(i,n) {
        cin >> a[i];
        num[a[i]]++;
        sum += a[i];
    }
    ll q;
    cin >> q;
    rep(i,q) {
        ll b, c;
        cin >> b >> c;
        sum = sum - num[b] * b + num[b] * c;
        num[c] += num[b];
        num[b] = 0;
        cout << sum << endl;
    }
    return 0;
}
