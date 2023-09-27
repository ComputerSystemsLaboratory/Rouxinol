#include <bits/stdc++.h>

using namespace std;

bool a[1000000];

int main()
{
    memset(a, true, sizeof(a));

    int n;
    while (~scanf("%d", &n)) {
        for (int i = 2; i * i <= n; ++i) {
            if (a[i]) for (int j = i + i; j <= n; j += i) a[j] = false;
        }
        int cnt = 0;
        for (int i = 2; i <= n; ++i) cnt += a[i];
        printf("%d\n", cnt);
    }
}