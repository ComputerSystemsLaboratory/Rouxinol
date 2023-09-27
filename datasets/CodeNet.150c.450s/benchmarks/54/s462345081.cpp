#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    char buf[1<<11];
    scanf("%s", buf);
    string W(buf);
    transform(W.begin(), W.end(), W.begin(), [](char c)->char {
        return c |= 0x20;
    });

    int res=0;
    string T;
    for (char c; scanf("%c", &c)!=EOF;) {
        if (((c|0x20)>='a'&&(c|0x20)<='z') || c=='-' || c=='_') {
            T += c;
            continue;
        }

        if (T == "END_OF_TEXT") break;
        if (!T.length()) continue;

        transform(T.begin(), T.end(), T.begin(), [](char c)->char {
            return c |= 0x20;
        });

        if (W == T)
            ++res;

        T = "";
    }

    printf("%d\n", res);
    return 0;
}       