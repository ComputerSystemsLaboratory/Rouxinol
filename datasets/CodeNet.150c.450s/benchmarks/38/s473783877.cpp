#include <array>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    array<int, 3> sides;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);
        sort(sides.begin(), sides.end());
        printf(sides[2] * sides[2] == sides[0] * sides[0] + sides[1] * sides[1] ? "YES\n" : "NO\n");
    }

    return 0;
}