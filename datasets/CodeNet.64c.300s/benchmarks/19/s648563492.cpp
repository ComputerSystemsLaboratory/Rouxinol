#include <cstdio>
#include <algorithm>

using namespace std;

static const int INF=1<<29;

bool testcase_ends() {
    int n;
    scanf("%d", &n);

    if (!n) return 1;

    int res=-INF, seq=-INF;
    for (int i=0; i<n; ++i) {
        int a;
        scanf("%d", &a);

        seq = max(seq+a, a);
        res = max(res, seq);
    }

    printf("%d\n", res);
    return 0;
}

int main() {
    int solved=0;
    while (!testcase_ends())
        ++solved;

    return !solved;
}