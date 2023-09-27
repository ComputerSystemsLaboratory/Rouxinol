#include <cstdio>

using namespace std;

int main() {
    while (true) {
        int n, x;
        scanf("%d %d", &n, &x);
        if (!n && !x) return 0;

        int res=0;
        for (int i=1; i<=n; ++i)
            for (int j=i+1; j<=n; ++j) {
                int k=x-(i+j);
                if (j<k && k<=n)
                    ++res;
            }

        printf("%d\n", res);
    }
}