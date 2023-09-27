#include <cstdio>
#include <algorithm>

using namespace std;

#define rep(i,x) for(int i=0;i<(x);++i)

const int inf = 1e9;

int N, R;

int main()
{
    scanf("%d\n%d", &N, &R);

    int mi = R, ma = -inf;

    for (int i = 1; i < N; ++i) {
        scanf("%d", &R);
        ma = max(ma, R - mi);
        mi = min(mi, R);
    }

    printf("%d\n", ma);
}