#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int N, M, L;
int A[100][100], B[100][100];

int main(void) {

    cin >> N >> M >> L;

    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            cin >> A[n][m];
        }
    }

    for (int m = 0; m < M; ++m) {
        for (int l = 0; l < L; ++l) {
            cin >> B[m][l];
        }
    }

    for (int n = 0; n < N; ++n) {
        for (int l = 0; l < L; ++l) {
            long long total = 0;
            for (int m = 0; m < M; ++m) {
                total += A[n][m] * B[m][l];
            }
            if (l != L-1)
                printf("%lld ", total);
            else
                printf("%lld", total);
        }
        printf("\n");
    }

    return 0;
}