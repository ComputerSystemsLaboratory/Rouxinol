#include <cstdio>

using namespace std;

int main() {
    char num_chars[256]={};
    for (char c; scanf("%c", &c)!=EOF;)
        if ((c|0x20)>='a' && (c|0x20)<='z')
            ++num_chars[c|0x20];

    for (char c='a'; c<='z'; ++c)
        printf("%c : %d\n", c, num_chars[c+0]);

    return 0;
}