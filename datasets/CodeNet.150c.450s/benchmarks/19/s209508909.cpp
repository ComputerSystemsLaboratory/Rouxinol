#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    for (int x, y; scanf("%d %d", &x, &y);) {
        if (!x && !y) return 0;

        printf("%d %d\n", min(x, y), max(x, y));
    }
}