#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c, d, e, f;
    double den, x, y;

    while (true) {
        cin >> a >> b >> c >> d >> e >> f;
        if (cin.eof()) { break; }
        den =  a * e - b * d;
        x = static_cast<double>(c * e - b * f) / den;
        y = static_cast<double>(- c * d + a * f) / den;
        // avoid -0.000
        x += 0.0;
        y += 0.0;
        cout << fixed << setprecision(3) << x << " " << y << endl;
    }

    return 0;
}