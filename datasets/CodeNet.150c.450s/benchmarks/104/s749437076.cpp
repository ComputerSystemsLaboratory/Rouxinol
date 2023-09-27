#include <bits/stdc++.h>

using namespace std;

int a[31];

int main()
{
    int w, n; scanf("%d\n%d", &w, &n);

    for (int i = 1; i <= w; ++i) a[i] = i;

    while (n--) {
        int b, c; scanf("%d,%d", &b, &c);
        swap(a[b], a[c]);
    }

    for (int i = 1; i <= w; ++i) cout << a[i] << endl;
}