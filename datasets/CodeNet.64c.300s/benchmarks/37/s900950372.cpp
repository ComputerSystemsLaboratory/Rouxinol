#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    while (cin >> N, N) {
        int res = 0;
        for (int i = 1; i <= N; i++) {
            for (int j = 2; j <= N; j++) {
                int sum = j * (2 * i + (j - 1) * 1);
                if (sum == N*2) {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}