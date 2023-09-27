#include<bits/stdc++.h>
using namespace std;

#define int long long

int s[100], t[100], sumS, sumT;

int N, M;

bool Exists(int target)
{
    int *p = lower_bound(t, t + M, target);
    if (p >= t + M) return false;
    if (*p == target) return true;
    return false;
}

signed main()
{
    while (cin >> N >> M, N || M)
    {
        sumS = 0; sumT = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> s[i];
            sumS += s[i];
        }
        for (int i = 0; i < M; i++)
        {
            cin >> t[i];
            sumT += t[i];
        }
        sort(t, t + M);
        int ans1 = LLONG_MAX / 2, ans2 = LLONG_MAX / 2;
        for (int i = 0; i < N; i++)
        {
            int target = sumT - sumS + 2 * s[i];
            if (target & 1 || !Exists(target / 2)) continue;
            target /= 2;
            if (ans1 + ans2 > s[i] + target)
            {
                ans1 = s[i]; ans2 = target;
            }
        }
        if (ans1 == LLONG_MAX / 2) puts("-1");
        else printf("%lld %lld\n", ans1, ans2);
    }
    return 0;
}