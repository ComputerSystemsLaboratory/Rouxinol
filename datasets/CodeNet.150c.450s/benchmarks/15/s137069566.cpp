#include <cstdio>
#include <algorithm>

using namespace std;

int S[10002];

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &S[i]);
    sort(S, S + n);

    int q, t, count = 0;
    scanf("%d\n", &q);
    for (int i = 0; i < q; ++i)
    {
        scanf("%d", &t);
        if (binary_search(S, S + n, t))
            count++;
    }

    printf("%d\n", count);
    return 0;
}