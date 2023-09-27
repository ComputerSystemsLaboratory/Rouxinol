#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> f(N + 1, 0);
    for (int x = 1; x * x <= N; ++x) {
        for (int y = 1; x * x + y * y <= N; ++y) {
            for (int z = 1; x * x + y * y + z * z + x * y + y * z + z * x <= N; ++z) {
                ++f[x * x + y * y + z * z + x * y + y * z + z * x];
            }
        }
    }
    for (int i = 1; i <= N; ++i) {
        cout << f[i] << endl;
    }
    return 0;
}