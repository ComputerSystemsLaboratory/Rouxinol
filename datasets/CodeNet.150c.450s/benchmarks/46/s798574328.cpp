#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int main(void) {


    while (true) {
        int N, X;
        cin >> N >> X;

        if (N == 0 && X == 0) { break; }

        int total = 0;
        for (int i = 1; i <= N - 2; ++i) {
            for (int j = i + 1; j <= N - 1; ++j) {
                for (int k = j + 1; k <= N; ++k) {
                    if (i + j + k == X)
                        ++total;
                }
            }
        }
        printf("%d\n", total);
    }

    return 0;
}