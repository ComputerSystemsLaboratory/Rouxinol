#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
	while (cin >> n >> s, n || s) {
        int ans = 0;

        for (int i = 0; i < (1<<10); ++i) {
            int cnt = 0, sum = 0;

            for (int j = 0; j < 10; ++j) {
                if (i >> j & 1) {
                    sum += j;
                    cnt++;
                }
            }

            if (cnt == n && sum == s) ans++; 
        }

        printf("%d\n", ans);
    }
}