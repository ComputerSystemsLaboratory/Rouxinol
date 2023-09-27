#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int N;
int ppl[120];

int main(void) {

    cin >> N;

    for (int i = 0; i < N; ++i) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        ppl[(b - 1) * 30 + (f - 1) * 10 + (r - 1)] += v;
    }

    for (int B = 0; B < 4; ++B) {
        for (int F = 0; F < 3; ++F) {
            for (int R = 0; R < 10; ++R) {
                printf(" %1d", ppl[B*30 + F*10 + R]);
            }
            printf("\n");
        }
        if (B != 3) {
            puts("####################");
        }
    }

    return 0;
}