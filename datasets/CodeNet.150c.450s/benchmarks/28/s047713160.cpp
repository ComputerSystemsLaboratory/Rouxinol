#include <iostream>

using namespace std;

const int N = 100010;

int n, k;
int w[N];

int check(int p)
{
    int cnt = k;
    int i = 0;
    while (cnt--) {
        int v = p;
        while (w[i] <= v) {
            v -= w[i];
            i++;
            if (i == n)
                return n;
        }
    }
    return i;
}

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i)
        scanf("%d", &w[i]);
        
    int l = 0, r = 1e9;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid) >= n)
            r = mid;
        else
            l = mid + 1;
    }
    
    printf("%d\n", r);
    return 0;
}
