#include<cstdio>
#include<cctype>

int main() {
    char ch;
    int cnt[26] = {};

    while (scanf("%c", &ch) != EOF) {
        if (isupper(ch)) ch = tolower(ch);
        cnt[ch - 'a']++;            
    }
    for (int i = 0; i < 26; i++) printf("%c : %d\n", 'a' + i, cnt[i]);

    return 0;
}