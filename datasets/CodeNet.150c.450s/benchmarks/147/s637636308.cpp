#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ar array
#define pii pair<int, int>

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

const int N = 1e4 + 4;

int cnt[N];

int f(int x, int y, int z) {
    return (x * x + y * y + z * z + x * y + y * z + z * x);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    for (int x = 1; x * x <= n; x++) {
        for (int y = 1; x * x + y * y + x * y <= n; y++) {
            for (int z = 1; f(x, y, z) <= n; z++) cnt[f(x, y, z)]++;
        }
    }
    for (int i = 1; i <= n; i++) cout << cnt[i] << '\n';
}
