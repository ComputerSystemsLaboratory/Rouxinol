#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N, N) {
        int count = 0;

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                int sum = (2 * i + j) * (j + 1) / 2;
                if (sum == N) count++;
                if (sum >= N) break;
            }
        }

        cout << count << endl;
    }

    return 0;
}

