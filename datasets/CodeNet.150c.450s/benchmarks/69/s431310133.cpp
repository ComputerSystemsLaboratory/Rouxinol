#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>
#include <cstdlib>

using namespace std;

#define NDEBUG

#ifndef NDEBUG
#define debug(...) printf(__VA_ARGS__)
#else
#define debug(...)
#endif

int N;

const char *solve(int (&balls)[10]) {
    for (int trial = 0; trial < (1 << 10); trial++) {
        int left_top = 0, right_top = 0;
        int i;
        for (i = 0; i < 10; i++) {
            int dir = ((trial >> i) & 1);
            int ball = balls[i];
            if (dir) { // left
                if (left_top == 0) {
                    left_top = ball;
                    continue;
                }
                if (left_top > ball) {
                    break;
                }
                left_top = ball;
            } else { // right
                if (right_top == 0) {
                    right_top = ball;
                    continue;
                }
                if (right_top > ball) {
                    break;
                }
                right_top = ball;
            }
        }
        if (i == 10) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    scanf(" %d", &N);
    debug("===\n");
    debug("%d\n", N);
    for (int i = 0; i < N; i++) {
        int balls[10];
        for (int j = 0; j < 10; j++) {
            scanf(" %d", &balls[j]);
        }
        for (int j = 0; j < 10; j++) {
            debug("%d ", balls[j]);
        }
        debug("\n");
        printf("%s\n", solve(balls));
    }
}