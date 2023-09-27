#include <cstdio>

using namespace std;

int main() {
    for (int i=1; ; ++i) {
        int x;
        scanf("%d", &x);
        if (!x) return 0;

        printf("Case %d: %d\n", i, x);
    }
}