#include <cstdio>
#include <cstring>
#include <cctype>

int main () {
    char c;
    int ans[150];
    for (int i=0; i< 150; i++) ans[i] = 0;
    while (scanf("%c", &c) != EOF) {
        char lower = tolower(c);
        ans[lower] += 1;
    }
    for (int i=97; i<123; i++) {
        printf("%c : %d\n", i, ans[i]);
    }

    return 0;
}