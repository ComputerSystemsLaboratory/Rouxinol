#include <cstdio>

char c, buf[256];

int main() {
    while (scanf("%c", &c) != EOF) {
        ++buf[c];
    }

    for (char i = 'A'; i <= 'Z'; ++i) {
        buf[i + 'a' - 'A'] += buf[i];
    }

    for (char i = 'a'; i <= 'z'; ++i) {
        printf("%c : %d\n", i, buf[i]);
    }

    return 0;
}