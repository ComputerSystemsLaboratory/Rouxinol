#include <iostream>
#include <cstdio>
#include <complex>

using namespace std;
typedef long long ll;

typedef double R;
typedef complex<R> P;

const R EPS = 1e-10;
const R PI = acos(-1);
int sgn(R a) {
    if (a < -EPS) return -1;
    if (a > EPS) return 1;
    return 0;
}


bool near(P a, P b) {
    return !sgn(abs(a-b));
}

double cross(const P &a, const P &b) { return imag(conj(a)*b); }
double dot(const P &a, const P &b) { return real(conj(a)*b); }

void solve() {
    P p[4];
    for (int i = 0; i < 4; i++) {
        R x, y;
        cin >> x >> y;
        p[i] = P(x, y);
    }

    if (!sgn(cross(p[0]-p[1], p[2]-p[3]))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        solve();
    }
    return 0;
}