#include <iostream>
#include <vector>
#include <map>

using namespace std;

int cnt[100005] = {0};
int n, q;
long long sum = 0;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int a;
        scanf("%d", &a);
        cnt[a]++;
        sum += a;
    }

    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);
        sum += (y - x) * cnt[x];
        cnt[y] += cnt[x];
        cnt[x] = 0;
        printf("%lld\n", sum);
    }
    return 0;
}
