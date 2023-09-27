#include <iostream>

using namespace std;

const int MAX = 100000;
int w[MAX];
int n, k;

int check(int P) {
    int i = 0;
    for (int j = 0; j < k; ++j) {
        long long s = 0;
        while (s + w[i] <= P) {
            s += w[i];
            ++i;
            if (i >= n) return n;
        }
    }
    return i;
}

long long solve() {
    long long l = 0;
    long long r = 100000 * 10000;
    while (r - l > 1) {
        long long m = (r + l) / 2; 
        int v = check(m);
        if (v >= n) r = m;
        else l = m;
    }
    return r;
}

int
main(int argc, const char *argv[])
{
    cin >> n >> k;
    for (int i = 0; i != n; ++i) cin >> w[i];
    long long ans = solve();
    cout << ans << endl;

    return 0;
}