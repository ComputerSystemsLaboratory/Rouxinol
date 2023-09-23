#include <cstdio>

int main () {
    int m, f, r;
    while(true) {
        scanf("%d %d %d", &m, &f, &r);
        char rank = 'F';
        if (m == -1 && f == -1 && r == -1) break;
        int sum = m + f;
        if (m == -1 || f == -1) {
            rank = 'F';
        } else if (80 <= sum) {
            rank = 'A';
        } else if (65 <= sum && sum < 80) {
            rank = 'B';
        } else if (50 <= sum && sum < 65) {
            rank = 'C';
        } else if (30 <= sum && sum < 50) {
            rank = 'D';
            if (50 <= r) rank = 'C';
        } else if (sum < 30) {
            rank = 'F';
        }
        printf("%c\n", rank);
    }

    return 0;
}