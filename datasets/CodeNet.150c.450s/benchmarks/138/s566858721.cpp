#include <cstdio>
#include <algorithm>

using namespace std;

int euclid(int a, int b) {
    if (b > a) {
        swap(a, b);
    }

    if (a % b == 0) return b;
    return euclid(b, a % b);
}

int main() {
    int x, y;
    int ans;
    scanf("%d %d", &x, &y);

    ans = euclid(x, y);

    printf("%d\n", ans);
    return 0;
}

