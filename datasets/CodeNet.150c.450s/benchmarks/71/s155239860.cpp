#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int n_ints = 4;
constexpr int min_int = 0;
constexpr int max_int = 9;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, res;

    while (true) {
        cin >> n;
        if (cin.eof()) { break; }

        res = 0;
        FOR(a,min_int,max_int+1)
        FOR(b,min_int,max_int+1)
        FOR(c,min_int,max_int+1)
        FOR(d,min_int,max_int+1) {
            int sum = a + b + c + d;
            if (sum == n) {
                ++res;
            }
        }
        cout << res << endl;
    }

    return 0;
}