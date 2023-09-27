#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define _abs(x)((x) < 0 ? (x) * -1 : (x))

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //freopen("debug.txt", "w", stderr);

    //cin.tie(0);
    //ios::sync_with_stdio(false);

    int w, n;
    int a, b;
    char ch;

    scanf("%d", &w);
    scanf("%d", &n);

    vector<int> v(w);

    int i;

    for (i = 1; i <= w; i++) v[i - 1] = i;

    while (n--) {
        scanf("%d%c%d", &a, &ch, &b);

        a--;
        b--;

        swap(v[a], v[b]);
    }

    for (i = 0; i < w; i++) printf("%d\n", v[i]);

    return 0;
}