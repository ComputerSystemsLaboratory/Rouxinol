#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int N, M;
int A[100][100], B[100];

int main(void) {

    cin >> N >> M;

    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            cin >> A[n][m];
        }
    }

    for (int m = 0; m < M; ++m) {
        cin >> B[m];
    }

    for (int n = 0; n < N; ++n) {
        int result = 0;
        for (int m = 0; m < M; ++m) {
            result += A[n][m] * B[m];
        }
        printf("%d\n", result);
    }

    return 0;
}