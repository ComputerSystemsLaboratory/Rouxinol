#include <iostream>
#include <stdio.h>
#include <string>

int alph[26];
int p;

void Check(char _moji) {
    p = 0;
    if (isupper(_moji)) _moji = tolower(_moji);
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (ch == _moji) {
            alph[p] += 1;
            break;
        }
        p++;
    }
}
void Show() {
    p = 0;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c : %d\n", ch, alph[p]);
        p++;
    }
}
int main() {
    char moji;
    while(scanf("%c", &moji) != EOF) {
        Check(moji);
    }
    Show();
    return 0;
}