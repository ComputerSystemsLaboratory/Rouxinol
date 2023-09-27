#include <iostream>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    map<ll,ll> m;
    ll n, *a;
    cin >> n;
    a = new ll[n];
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        m[a[i]]++;
    }

    ll q;   cin >> q;
    ll *s = new ll[q];
    for (int i = 0; i < q; i++) {
        ll b, c;    cin >> b >> c;
        ll tmp = m[b];
        m[b] = 0;
        m[c] += tmp;
        sum += (c-b)*tmp;
        s[i] = sum;
    }

    for (int i = 0; i < q; i++)
        cout << s[i] << endl;

    return 0;
}