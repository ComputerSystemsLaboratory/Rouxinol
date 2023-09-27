#include <cstdio>

using namespace std;

int main() {
    while (true) {
        int m, f, r;
        scanf("%d %d %d", &m, &f, &r);
        if (!~m && !~f && !~r) return 0;

        if (!~m || !~f) {
            printf("F\n");
        } else if (m+f >= 80) {
            printf("A\n");
        } else if (m+f >= 65) {
            printf("B\n");
        } else if (m+f >= 50) {
            printf("C\n");
        } else if (m+f >= 30) {
            if (r >= 50) {
                printf("C\n");
            } else {
                printf("D\n");
            }
        } else {
            printf("F\n");
        }
    }
}