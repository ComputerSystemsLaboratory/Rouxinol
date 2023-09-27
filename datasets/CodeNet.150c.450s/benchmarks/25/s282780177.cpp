#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int cnt[26] = {};

    while (scanf("%c", &c) != EOF) {
        if (islower(c)) {
            int num = c - 'a';
            cnt[num]++;
        } else if (isupper(c)) {
            int num = c - 'A';
            cnt[num]++;
        }
    }
    for (int i = 0; i < 26; ++i) {
        printf("%c : %d\n", 'a' + i, cnt[i]);
    }
    return 0;
}