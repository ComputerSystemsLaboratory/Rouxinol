#include <iostream>

using namespace std;

int main()
{
    int n, x;
    scanf("%d\n%d", &n, &x);
    int mn = x, mx = -1e9;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        mx = max(mx, x - mn);
        mn = min(mn, x);
    }
    printf("%d\n", mx);
    return 0;
}

