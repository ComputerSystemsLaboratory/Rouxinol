#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        vector<long long int> v(n + 1);
        v[0] = 1L;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= 3; j++) {
                if(i + j <= n)
                    v[i + j] += v[i];
            }
        }
        cout << (v[n] + 3649L) / 3650L << endl;
    }

    return 0;
}