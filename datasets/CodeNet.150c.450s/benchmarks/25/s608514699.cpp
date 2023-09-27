#include <cstdio>
#include <cctype>

int main() {
    int count[26] = {};
    char ch;

    while (scanf("%c", &ch) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            count[ch - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%c : %d\n", i + 'a', count[i]);
    }
    return 0;
}
