#include <bits/stdc++.h>

using namespace std;

int s[5001];

int main()
{
    int n;

    while (scanf("%d", &n), n) {
        memset(s, 0, sizeof(s));

        for (int i = 1; i <= n; ++i) {
            int a; scanf("%d", &a);
            s[i] = a + s[i - 1];
        }

        int ma = INT_MIN;

        for (int i = 1; i <= n; ++i) for (int j = 1; j <= i; ++j) {
            ma = max(ma, s[i] - s[j - 1]);
        }

        printf("%d\n", ma);
    }
}