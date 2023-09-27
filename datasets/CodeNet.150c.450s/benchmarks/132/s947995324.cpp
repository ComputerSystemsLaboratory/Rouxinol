#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P;
    while (cin >> N >> P, N || P) {
        vector<int> v(N);
        int ans = -1;
        int now = 0;
        while (1) {
            if (P == 0) {
                P += v[now];
                v[now] = 0;
            } else {
                P--;
                v[now]++;
            }

            if (P == 0) {
                int count = 0;
                for (auto i : v) if (i > 0) count++;
                if (count == 1) {
                    cout << now << endl;
                    break;
                }
            }

            now = (now + 1) % N;
        }
    }

    return 0;
}

