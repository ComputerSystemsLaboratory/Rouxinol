#include <stdio.h>
#include <string.h>

char cs[10][16] = {
    "", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};
char s[2000];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%s", s);
        int cur = 0, cx = -1;
        for (int i = 0; s[i]; i++) {
            if (s[i] == '0') {
                if (cur != 0) putchar(cs[cur][cx%strlen(cs[cur])]);
                cur = 0;
                cx = -1;
            }
            else {
                cur = s[i] - '0';
                cx++;
            }
        }
        putchar('\n');
    }
    return 0;
}