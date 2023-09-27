#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int Maxb = 61;
const int Maxn = 205;

int T;
int n;
ll a[Maxn];
string s;
ll B[Maxb];

int main()
{
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        cin >> s;
        fill(B, B + Maxb, 0ll);
        bool los = false;
        for (int i = n - 1; i >= 0 && !los; i--)
            if (s[i] == '0')
                for (int j = Maxb - 1; j >= 0; j--) {
                    if (a[i] & 1ll << ll(j))
                        if (B[j]) a[i] ^= B[j];
                        else { B[j] = a[i]; break; }
                }
            else {
                for (int j = Maxb - 1; j >= 0; j--) if (a[i] & 1ll << ll(j))
                    if (B[j]) a[i] ^= B[j];
                    else break;
                if (a[i] > 0) los = true;
            }
        printf("%d\n", int(los));
    }
    return 0;
}
