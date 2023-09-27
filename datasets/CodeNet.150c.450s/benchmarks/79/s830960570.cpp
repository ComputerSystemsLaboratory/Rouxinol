#include <cstdio>

using namespace std;

int n, r;
// greater is upper
int D[51];
int X[51];

int main() {
    for (;;) {
        scanf("%d%d", &n, &r);
        if (!n && !r) { break; }

        for (int i = 1; i <= 50; i++) {
            D[i] = i;
        }

        for (int i = 0; i < r; i++) {
            int p, c;
            scanf("%d%d", &p, &c);
            for (int j = 0; j < c; j++) {
                X[j] = D[n - (p - 1) - c + 1 + j];
            }
            for (int j = 0; j < p - 1; j++) {
                D[n - (p - 1) - c + 1 + j] = D[n - (p - 1) - c + 1 + j + c];
            }
            for (int j = 0; j < c; j++) {
                D[n - c + 1 + j] = X[j];
            }
        }

        printf("%d\n", D[n]);
    }
    return 0;
}