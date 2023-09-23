#include <cstdio>
using namespace std;

int n;
int has_put;
int a[10];

int main() {
    scanf("%d", &n);
    for (int T=0; T<n; T++) {
        for (int i=0; i<10; i++) {
            scanf("%d", &a[i]);
        }

        has_put = 0;
        for (int bit=0; bit<1024; bit++) {
            int pre1 = -1;
            int pre2 = -1;
            int possible = 1;

            for (int i=0; i<10; i++) {
                if ((bit>>i)&1) {
                    if (a[i] < pre1) {
                        possible = 0;
                        break;
                    }
                    pre1 = a[i];
                } else {
                    if (a[i] < pre2) {
                        possible = 0;
                        break;
                    }
                    pre2 = a[i];
                }
            }

            if (possible) {
                puts("YES");
                has_put = 1;
                break;
            }
        }

        if (!has_put) {
            puts("NO");
        }
    }
}