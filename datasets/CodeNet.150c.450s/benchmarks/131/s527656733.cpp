#include <cstdio>
#include <climits>
#include <algorithm>

using namespace std;

int a, L;
int ans_j, ans_ai, ans_i_j;

int A[22];
int N[6];

int get_greatest() {
    sort(&N[0], &N[L]);
    int r = 0;
    for (int i = L - 1; i >= 0; i--) {
        r *= 10;
        r += N[i];
    }
    //printf("greatest: %d\n", r);
    return r;
}

int get_least() {
    sort(&N[0], &N[L]);
    int r = 0;
    for (int i = 0; i < L; i++) {
        r *= 10;
        r += N[i];
    }
    //printf("least   : %d\n", r);
    return r;
}

void solve() {
    A[0] = a;
    for (int i = 0; i <= 20; i++) {
        int b = A[i];
        for (int j = 0; j < L; j++) {
            N[j] = b % 10;
            b /= 10;
        }
        A[i + 1] = get_greatest() - get_least();
    }
    int ans_i = INT_MAX;
    for (int j = 0; j <= 20; j++) {
        for (int i = j + 1; i <= 20; i++) {
            if (A[i] == A[j]) {
                if (ans_i > i) {
                    ans_i = i;
                    ans_j = j;
                    ans_ai = A[i];
                    ans_i_j = i - j;
                }
            }
        }
    }
}

int main() {
    for (;;) {
        scanf("%d%d", &a, &L);
        if (!a && !L) { break; }
        solve();
        printf("%d %d %d\n", ans_j, ans_ai, ans_i_j);
    }
    return 0;
}